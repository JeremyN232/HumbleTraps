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
        
        trap.HandleCharacterEntered(characterMover, TrapTargetType.Player);
        Assert.AreEqual(-1, characterMover.Health);
    }

    [Test]
    public void NpcEnteringNpcTargetedTrap_ReduceHealthbyOne()
    {
        Trap trap = new Trap();
        ICharacterMovement characterMover = Substitute.For<ICharacterMovement>();
        trap.HandleCharacterEntered(characterMover, TrapTargetType.Npc);
        Assert.AreEqual(-1, characterMover.Health);
    }
}
