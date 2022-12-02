#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// CharacterMovement
struct CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ICharacterMovement
struct ICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.String
struct String_t;
// Trap
struct Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8;
// TrapBehavior
struct TrapBehavior_t25EE67B5FD8359161A171D132C9ED1098DDED267;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_mE99819615CB2CFA4902EE777A4209D7651B857F1_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Trap
struct Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_12;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CharacterMovement
struct CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController CharacterMovement::characterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___characterController_4;
	// System.Boolean CharacterMovement::isPlayer
	bool ___isPlayer_5;
	// System.Int32 CharacterMovement::<Health>k__BackingField
	int32_t ___U3CHealthU3Ek__BackingField_6;
};

// TrapBehavior
struct TrapBehavior_t25EE67B5FD8359161A171D132C9ED1098DDED267  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TrapTargetType TrapBehavior::trapType
	int32_t ___trapType_4;
	// Trap TrapBehavior::trap
	Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8* ___trap_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Trap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trap__ctor_m26C4D7B910070BE859DAAD16C871B81B1C095843 (Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ICharacterMovement>()
inline RuntimeObject* Component_GetComponent_TisICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_mE99819615CB2CFA4902EE777A4209D7651B857F1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Trap::HandleCharacterEntered(ICharacterMovement,TrapTargetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trap_HandleCharacterEntered_m473F3CE393CE29232AE1B999747E12AC097EC530 (Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8* __this, RuntimeObject* ___characterMover0, int32_t ___trapTargetType1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean CharacterMovement::get_IsPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterMovement_get_IsPlayer_m6B6D6DFBE32FF86317C78005B1BE2B4EC0036197 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPlayer => isPlayer;
		bool L_0 = __this->___isPlayer_5;
		return L_0;
	}
}
// System.Int32 CharacterMovement::get_Health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterMovement_get_Health_m6B477EB957B641FABA205F99D5660CA6EAEABE7E (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) 
{
	{
		// public int Health { get;  set;}
		int32_t L_0 = __this->___U3CHealthU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void CharacterMovement::set_Health(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_set_Health_m3793EF2AD6F719C5059D2DC07FA0C679D209E21F (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Health { get;  set;}
		int32_t L_0 = ___value0;
		__this->___U3CHealthU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void CharacterMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_Awake_m58C0B9590A2599D398ABEF85EFC49FCAE7359B1F (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// characterController = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___characterController_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characterController_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void CharacterMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_Update_mAC9BC2614C2AF0CF75EE46D855727EE29EB8BBAE (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float Horizontal = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float Vertical = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// characterController.Move(new Vector3(Horizontal,0,Vertical));
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_2 = __this->___characterController_4;
		float L_3 = V_0;
		float L_4 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_3, (0.0f), L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_2, L_5, NULL);
		// }
		return;
	}
}
// System.Void CharacterMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement__ctor_mAC2DD71D615E1B0D05E751051F490C1408DD3BC9 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrapBehavior::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrapBehavior_Awake_mE0421CF51A9CD99B9DF1F3625A4E3DF54EE8CBDD (TrapBehavior_t25EE67B5FD8359161A171D132C9ED1098DDED267* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trap = new Trap();
		Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8* L_0 = (Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8*)il2cpp_codegen_object_new(Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8_il2cpp_TypeInfo_var);
		Trap__ctor_m26C4D7B910070BE859DAAD16C871B81B1C095843(L_0, NULL);
		__this->___trap_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trap_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void TrapBehavior::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrapBehavior_OnTriggerEnter_m6C8E0195FE3BDE15CAA0072CBC8BCCEBDA87A094 (TrapBehavior_t25EE67B5FD8359161A171D132C9ED1098DDED267* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_mE99819615CB2CFA4902EE777A4209D7651B857F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var characterMover = other.GetComponent<ICharacterMovement>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		RuntimeObject* L_1;
		L_1 = Component_GetComponent_TisICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_mE99819615CB2CFA4902EE777A4209D7651B857F1(L_0, Component_GetComponent_TisICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_mE99819615CB2CFA4902EE777A4209D7651B857F1_RuntimeMethod_var);
		V_0 = L_1;
		// trap.HandleCharacterEntered(characterMover, trapType);
		Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8* L_2 = __this->___trap_5;
		RuntimeObject* L_3 = V_0;
		int32_t L_4 = __this->___trapType_4;
		Trap_HandleCharacterEntered_m473F3CE393CE29232AE1B999747E12AC097EC530(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void TrapBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrapBehavior__ctor_m6ECD15C84AAF6E0108B8E34CDA29343AF09A2AC3 (TrapBehavior_t25EE67B5FD8359161A171D132C9ED1098DDED267* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Trap::HandleCharacterEntered(ICharacterMovement,TrapTargetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trap_HandleCharacterEntered_m473F3CE393CE29232AE1B999747E12AC097EC530 (Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8* __this, RuntimeObject* ___characterMover0, int32_t ___trapTargetType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(characterMover.IsPlayer)
		RuntimeObject* L_0 = ___characterMover0;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean ICharacterMovement::get_IsPlayer() */, ICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if(trapTargetType == TrapTargetType.Player)
		int32_t L_2 = ___trapTargetType1;
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		// characterMover.Health--;
		RuntimeObject* L_3 = ___characterMover0;
		RuntimeObject* L_4 = L_3;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 ICharacterMovement::get_Health() */, ICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6 = V_0;
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void ICharacterMovement::set_Health(System.Int32) */, ICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_il2cpp_TypeInfo_var, L_4, ((int32_t)il2cpp_codegen_subtract(L_6, 1)));
		return;
	}

IL_001c:
	{
		// if(trapTargetType == TrapTargetType.Npc)
		int32_t L_7 = ___trapTargetType1;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		// characterMover.Health--;
		RuntimeObject* L_8 = ___characterMover0;
		RuntimeObject* L_9 = L_8;
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 ICharacterMovement::get_Health() */, ICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_il2cpp_TypeInfo_var, L_9);
		V_0 = L_10;
		int32_t L_11 = V_0;
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void ICharacterMovement::set_Health(System.Int32) */, ICharacterMovement_t4B4D4E0A863B979EDF599234BE26E7B27E9EFAE6_il2cpp_TypeInfo_var, L_9, ((int32_t)il2cpp_codegen_subtract(L_11, 1)));
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Trap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trap__ctor_m26C4D7B910070BE859DAAD16C871B81B1C095843 (Trap_t5502886D424EFBEFFF5488A9768C9350EABC7AC8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		return;
	}
}
