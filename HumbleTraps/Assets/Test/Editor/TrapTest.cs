using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NUnit.Framework;
using NSubstitute;

public class TrapTest
{
    [Test]
    public void PlayerEnteringPlayerTargetedTrap_ReduceHealthbyOne()
    {
        Trap trap = new Trap();
        ICharacterMovement characterMover = Substitute.For<ICharacterMovement>();
        characterMover.IsPlayer.Returns(true);
        
        trap.HandleCharacterEntered(characterMover, TrapTargetType.Player, TrapType.Damage);
        Assert.AreEqual(-1, characterMover.Health);
    }

    [Test]
    public void NpcEnteringNpcTargetedTrap_ReduceHealthbyOne()
    {
        Trap trap = new Trap();
        ICharacterMovement characterMover = Substitute.For<ICharacterMovement>();
        trap.HandleCharacterEntered(characterMover, TrapTargetType.Npc, TrapType.Damage);
        Assert.AreEqual(-1, characterMover.Health);
    }

    [Test]
    public void PlayerEnteringPlayerTargetedSlowTrap_ReduceSpeedbyOne()
    {
        Trap trap = new Trap();
        ICharacterMovement characterMover = Substitute.For<ICharacterMovement>();
        characterMover.IsPlayer.Returns(true);

        trap.HandleCharacterEntered(characterMover, TrapTargetType.Player, TrapType.Slow);
        Assert.AreEqual(-1, characterMover.Speed);
    }

    [Test]
    public void NPCEnteringNPCTargetedSlowTrap_ReduceSpeedbyOne()
    {
        Trap trap = new Trap();
        ICharacterMovement characterMover = Substitute.For<ICharacterMovement>();
        characterMover.IsPlayer.Returns(false);

        trap.HandleCharacterEntered(characterMover, TrapTargetType.Npc, TrapType.Slow);
        Assert.AreEqual(-1, characterMover.Speed);
    }

    [Test]
    public void PlayerEnteringPlayerTargetedWaterTrap_CauseDrowning()
    {
        Trap trap = new Trap();
        ICharacterMovement characterMover = Substitute.For<ICharacterMovement>();
        characterMover.IsPlayer.Returns(true);

        trap.HandleCharacterEntered(characterMover, TrapTargetType.Player, TrapType.Water);
        Assert.AreEqual(true, characterMover.IsDrowned);
    }

    [Test]
    public void NPCEnteringNPCTargetedWaterTrap_CauseDrowning()
    {
        Trap trap = new Trap();
        ICharacterMovement characterMover = Substitute.For<ICharacterMovement>();
        characterMover.IsPlayer.Returns(false);

        trap.HandleCharacterEntered(characterMover, TrapTargetType.Npc, TrapType.Water);
        Assert.AreEqual(true, characterMover.IsDrowned);
    }
}
