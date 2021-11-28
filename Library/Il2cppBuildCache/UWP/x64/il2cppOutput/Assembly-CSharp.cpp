#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Parallaxer/PoolObject[]
struct PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BackgroundParralax
struct BackgroundParralax_t46BEEC574173A1D1440E83565C94C69495892566;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CountdownText
struct CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HighscoreText
struct HighscoreText_tEF16E9DDE3769436826477C134FF8BA4946908C2;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Parallaxer
struct Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TapController
struct TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CountdownText/<Countdown>d__6
struct U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56;
// CountdownText/CountdownFinished
struct CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A;
// GameManager/GameDelegate
struct GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Parallaxer/PoolObject
struct PoolObject_t027754772FA29496DD2AFD541B52980885125869;
// TapController/PlayerDelegate
struct PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE;

IL2CPP_EXTERN_C RuntimeClass* CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoolObject_t027754772FA29496DD2AFD541B52980885125869_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B599F767D32D8B1B566EC7DC1300282B03DDD96;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral2D4D2941C9914975DAEACD50AB8D9994045DE3A7;
IL2CPP_EXTERN_C String_t* _stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8;
IL2CPP_EXTERN_C String_t* _stringLiteral6EEB2DDDCEB5CB51B4DADAAF46FF72E0D387C3CF;
IL2CPP_EXTERN_C String_t* _stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6;
IL2CPP_EXTERN_C String_t* _stringLiteralA15D40E7CF6DA730D6AA22F817BA013C16452C64;
IL2CPP_EXTERN_C String_t* _stringLiteralBEBA1C332EB2356D3EF1320D24E481C4F3C2BFCB;
IL2CPP_EXTERN_C String_t* _stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnCountdownFinished_mAB737D99D66615FA09122B975AE0CD95B7EAC31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnPlayerDied_m77595C4F9CCD0AF42D889D09814014314E0F5B9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnPlayerScored_m30B91AE423BD9A55A7D254AD034F251580B08DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parallaxer_OnGameOverConfirmed_mADC3545134F718ACFA5DB865F618419872A683A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TapController_OnGameOverConfirmed_m37BB2F222835F3C970BBF0C2984D8230F8D67E12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TapController_OnGameStarted_m5AD2426C99B6F6E0F6919D1775209FDF8573F77C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_m8DE5F4496B84C95F1D7B816A4CD26A915C9E4E51_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E;

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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CountdownText/<Countdown>d__6
struct U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56  : public RuntimeObject
{
	// System.Int32 CountdownText/<Countdown>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CountdownText/<Countdown>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CountdownText CountdownText/<Countdown>d__6::<>4__this
	CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1* ___U3CU3E4__this_2;
	// System.Int32 CountdownText/<Countdown>d__6::<count>5__2
	int32_t ___U3CcountU3E5__2_3;
	// System.Int32 CountdownText/<Countdown>d__6::<i>5__3
	int32_t ___U3CiU3E5__3_4;
};

// Parallaxer/PoolObject
struct PoolObject_t027754772FA29496DD2AFD541B52980885125869  : public RuntimeObject
{
	// UnityEngine.Transform Parallaxer/PoolObject::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_0;
	// System.Boolean Parallaxer/PoolObject::inUse
	bool ___inUse_1;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Parallaxer/YSpawnRange
struct YSpawnRange_t4BEDBC017BF1856A7F82B116CC1B5B03A62B4DD7 
{
	// System.Single Parallaxer/YSpawnRange::min
	float ___min_0;
	// System.Single Parallaxer/YSpawnRange::max
	float ___max_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.ForceMode2D
struct ForceMode2D_tED0B49EFC7DE2D6679187CE772C38F82CC9E45CA 
{
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;
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

// GameManager/PageState
struct PageState_tD9C5D746A707E49BC2E1E306FC68567A713C1AF1 
{
	// System.Int32 GameManager/PageState::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CountdownText/CountdownFinished
struct CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A  : public MulticastDelegate_t
{
};

// GameManager/GameDelegate
struct GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896  : public MulticastDelegate_t
{
};

// TapController/PlayerDelegate
struct PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BackgroundParralax
struct BackgroundParralax_t46BEEC574173A1D1440E83565C94C69495892566  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BackgroundParralax::length
	float ___length_4;
	// System.Single BackgroundParralax::startpos
	float ___startpos_5;
	// UnityEngine.GameObject BackgroundParralax::cam
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cam_6;
	// System.Single BackgroundParralax::parralaxEffect
	float ___parralaxEffect_7;
};

// CountdownText
struct CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text CountdownText::countdown
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___countdown_5;
};

struct CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_StaticFields
{
	// CountdownText/CountdownFinished CountdownText::OnCountdownFinished
	CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* ___OnCountdownFinished_4;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::startPage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startPage_7;
	// UnityEngine.GameObject GameManager::gameOverPage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOverPage_8;
	// UnityEngine.GameObject GameManager::countdownPage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___countdownPage_9;
	// UnityEngine.UI.Text GameManager::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_10;
	// System.Int32 GameManager::score
	int32_t ___score_11;
	// System.Boolean GameManager::gameOver
	bool ___gameOver_12;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::Instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___Instance_4;
	// GameManager/GameDelegate GameManager::OnGameStarted
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* ___OnGameStarted_5;
	// GameManager/GameDelegate GameManager::OnGameOverConfirmed
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* ___OnGameOverConfirmed_6;
};

// HighscoreText
struct HighscoreText_tEF16E9DDE3769436826477C134FF8BA4946908C2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text HighscoreText::highscore
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___highscore_4;
};

// Parallaxer
struct Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Parallaxer::Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefab_4;
	// System.Int32 Parallaxer::poolSize
	int32_t ___poolSize_5;
	// System.Single Parallaxer::shiftSpeed
	float ___shiftSpeed_6;
	// System.Single Parallaxer::spawnRate
	float ___spawnRate_7;
	// Parallaxer/YSpawnRange Parallaxer::ySpawnRange
	YSpawnRange_t4BEDBC017BF1856A7F82B116CC1B5B03A62B4DD7 ___ySpawnRange_8;
	// UnityEngine.Vector3 Parallaxer::defaultSpawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultSpawnPos_9;
	// System.Boolean Parallaxer::spawnImmediate
	bool ___spawnImmediate_10;
	// UnityEngine.Vector3 Parallaxer::immediateSpawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___immediateSpawnPos_11;
	// UnityEngine.Vector2 Parallaxer::targetAspectRatio
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetAspectRatio_12;
	// System.Single Parallaxer::spawnTimer
	float ___spawnTimer_13;
	// System.Single Parallaxer::targetAspect
	float ___targetAspect_14;
	// Parallaxer/PoolObject[] Parallaxer::poolObjects
	PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* ___poolObjects_15;
	// GameManager Parallaxer::game
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___game_16;
};

// TapController
struct TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TapController::tapForce
	float ___tapForce_6;
	// System.Single TapController::tiltSmooth
	float ___tiltSmooth_7;
	// UnityEngine.Vector3 TapController::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_8;
	// UnityEngine.AudioSource TapController::tapAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___tapAudio_9;
	// UnityEngine.AudioSource TapController::scoreAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___scoreAudio_10;
	// UnityEngine.AudioSource TapController::dieAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___dieAudio_11;
	// UnityEngine.Rigidbody2D TapController::rigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigidbody_12;
	// UnityEngine.Quaternion TapController::downRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___downRotation_13;
	// UnityEngine.Quaternion TapController::forwardRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forwardRotation_14;
	// GameManager TapController::game
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___game_15;
};

struct TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields
{
	// TapController/PlayerDelegate TapController::OnPlayerDied
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* ___OnPlayerDied_4;
	// TapController/PlayerDelegate TapController::OnPlayerScored
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* ___OnPlayerScored_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Parallaxer/PoolObject[]
struct PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E  : public RuntimeArray
{
	ALIGN_FIELD (8) PoolObject_t027754772FA29496DD2AFD541B52980885125869* m_Items[1];

	inline PoolObject_t027754772FA29496DD2AFD541B52980885125869* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PoolObject_t027754772FA29496DD2AFD541B52980885125869** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PoolObject_t027754772FA29496DD2AFD541B52980885125869* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PoolObject_t027754772FA29496DD2AFD541B52980885125869* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PoolObject_t027754772FA29496DD2AFD541B52980885125869** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PoolObject_t027754772FA29496DD2AFD541B52980885125869* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void CountdownText/<Countdown>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6__ctor_m7DC921546E87B20A1029CC175A88A6B18AD62367 (U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void CountdownText/CountdownFinished::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_inline (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void CountdownText/CountdownFinished::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownFinished__ctor_m3ADD1F10DD6B2516FA8DEF901EA1460046418F5C (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void CountdownText::add_OnCountdownFinished(CountdownText/CountdownFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownText_add_OnCountdownFinished_mEAEA8A7DB795C8171557AC285AFE766FD5F403A9 (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* ___value0, const RuntimeMethod* method) ;
// System.Void TapController/PlayerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDelegate__ctor_mCF8E6FEBE3DFA93E1819E6FF6E2DCE1E52FC66D9 (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void TapController::add_OnPlayerDied(TapController/PlayerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_add_OnPlayerDied_mEFCFC8386879A66BC4172E6BBA2650A6B439E031 (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* ___value0, const RuntimeMethod* method) ;
// System.Void TapController::add_OnPlayerScored(TapController/PlayerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_add_OnPlayerScored_m8026315BD472AEE5859B7334E7BC14B21E4EF2CA (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::SetPageState(GameManager/PageState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetPageState_m2614093B811932EB736DE3BFFBE051537D26C3B6 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___state0, const RuntimeMethod* method) ;
// System.Void CountdownText::remove_OnCountdownFinished(CountdownText/CountdownFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownText_remove_OnCountdownFinished_mE2060CF67D81626DE74FCBB8DAEEBB1F2E222474 (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* ___value0, const RuntimeMethod* method) ;
// System.Void TapController::remove_OnPlayerDied(TapController/PlayerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_remove_OnPlayerDied_m3363D9F36AFF8C76A7C453837E65F8CEF9F6B9B4 (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* ___value0, const RuntimeMethod* method) ;
// System.Void TapController::remove_OnPlayerScored(TapController/PlayerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_remove_OnPlayerScored_mB69718349EFEC57A0D4D0D5D0879730C30D6C5CA (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* ___value0, const RuntimeMethod* method) ;
// System.Void GameManager/GameDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_inline (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void Parallaxer::Configure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_Configure_m0CF55AB85216A6C924D07579142A39876220D5E4 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) ;
// System.Void GameManager/GameDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDelegate__ctor_mEDDB3D688DC4DF75611AF6CD5F77274417149AC2 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameManager::add_OnGameOverConfirmed(GameManager/GameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnGameOverConfirmed_m354F12BA528423F1B7F1173FE95F8D3626830091 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::remove_OnGameOverConfirmed(GameManager/GameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnGameOverConfirmed_m80FFD03DD0202F99F53C6801AF8AE00B2EDF6A06 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* ___value0, const RuntimeMethod* method) ;
// System.Void Parallaxer/PoolObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolObject_Dispose_m1A0E69E608D586FB188F7789C74C928066F793E5 (PoolObject_t027754772FA29496DD2AFD541B52980885125869* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void Parallaxer::SpawnImmediate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_SpawnImmediate_m0A496AF0CECB3E8EE0B882658B3CF92F979D43ED (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) ;
// System.Boolean GameManager::get_GameOver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void Parallaxer::Shift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_Shift_m9B6C1B37DEFBF11D987506BBAF1336375EDAAFA0 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void Parallaxer::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_Spawn_m9C25A34F7EE3D39325F9491292962D213DE6DB38 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void Parallaxer/PoolObject::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolObject__ctor_mB90D00062C1F16C2FD800E3B6D38BBDCE18ED154 (PoolObject_t027754772FA29496DD2AFD541B52980885125869* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) ;
// UnityEngine.Transform Parallaxer::GetPoolObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Parallaxer_GetPoolObject_m5FA73E64588AE0E6B76A157EAFA37AD957ED4A6D (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Parallaxer::CheckDisposeObject(Parallaxer/PoolObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_CheckDisposeObject_m1EA6F20691AF4BE2781A42760F3B301F18018D57 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, PoolObject_t027754772FA29496DD2AFD541B52980885125869* ___poolObject0, const RuntimeMethod* method) ;
// System.Void Parallaxer/PoolObject::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolObject_Use_mCE3B39D652202EAAB3D813E83F13B60154865427 (PoolObject_t027754772FA29496DD2AFD541B52980885125869* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_simulated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::add_OnGameStarted(GameManager/GameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnGameStarted_m33A3DC5D90E3D5ABFF820E322C764FCD341C3608 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::remove_OnGameStarted(GameManager/GameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnGameStarted_m41C55E60E38CF3F360409315FA9066DEA9A1CB3C (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void TapController/PlayerDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_inline (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
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
// System.Void BackgroundParralax::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundParralax_Start_mC6316B55DD097166A7BB1359B896B05B44518112 (BackgroundParralax_t46BEEC574173A1D1440E83565C94C69495892566* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// startpos = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___startpos_5 = L_2;
		// length = GetComponent<SpriteRenderer>().bounds.size.x;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4;
		L_4 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_3, NULL);
		V_0 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_6 = L_5.___x_2;
		__this->___length_4 = L_6;
		// }
		return;
	}
}
// System.Void BackgroundParralax::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundParralax_FixedUpdate_mA5FA639837BBF2B3131414C583697E579657591B (BackgroundParralax_t46BEEC574173A1D1440E83565C94C69495892566* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float temp = (cam.transform.position.x * (1 - parralaxEffect));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cam_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = __this->___parralaxEffect_7;
		V_0 = ((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_subtract((1.0f), L_4))));
		// float dist = (cam.transform.position.x * parralaxEffect);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___cam_6;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9 = __this->___parralaxEffect_7;
		V_1 = ((float)il2cpp_codegen_multiply(L_8, L_9));
		// transform.position = new Vector3(startpos + dist, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11 = __this->___startpos_5;
		float L_12 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), ((float)il2cpp_codegen_add(L_11, L_12)), L_15, L_18, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_19, NULL);
		// if (temp > startpos + length)
		float L_20 = V_0;
		float L_21 = __this->___startpos_5;
		float L_22 = __this->___length_4;
		if ((!(((float)L_20) > ((float)((float)il2cpp_codegen_add(L_21, L_22))))))
		{
			goto IL_009c;
		}
	}
	{
		// startpos += length;
		float L_23 = __this->___startpos_5;
		float L_24 = __this->___length_4;
		__this->___startpos_5 = ((float)il2cpp_codegen_add(L_23, L_24));
		return;
	}

IL_009c:
	{
		// else if(temp < startpos - length)
		float L_25 = V_0;
		float L_26 = __this->___startpos_5;
		float L_27 = __this->___length_4;
		if ((!(((float)L_25) < ((float)((float)il2cpp_codegen_subtract(L_26, L_27))))))
		{
			goto IL_00bf;
		}
	}
	{
		// startpos -= length;
		float L_28 = __this->___startpos_5;
		float L_29 = __this->___length_4;
		__this->___startpos_5 = ((float)il2cpp_codegen_subtract(L_28, L_29));
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void BackgroundParralax::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundParralax__ctor_m71CF62CF32E93B9F27E82C061E1CE9CAC8CBC884 (BackgroundParralax_t46BEEC574173A1D1440E83565C94C69495892566* __this, const RuntimeMethod* method) 
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
// System.Void CountdownText::add_OnCountdownFinished(CountdownText/CountdownFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownText_add_OnCountdownFinished_mEAEA8A7DB795C8171557AC285AFE766FD5F403A9 (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* V_0 = NULL;
	CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* V_1 = NULL;
	CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* V_2 = NULL;
	{
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_0 = ((CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_StaticFields*)il2cpp_codegen_static_fields_for(CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_il2cpp_TypeInfo_var))->___OnCountdownFinished_4;
		V_0 = L_0;
	}

IL_0006:
	{
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_1 = V_0;
		V_1 = L_1;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_2 = V_1;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*)CastclassSealed((RuntimeObject*)L_4, CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A_il2cpp_TypeInfo_var));
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_5 = V_2;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_6 = V_1;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_7;
		L_7 = InterlockedCompareExchangeImpl<CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*>((&((CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_StaticFields*)il2cpp_codegen_static_fields_for(CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_il2cpp_TypeInfo_var))->___OnCountdownFinished_4), L_5, L_6);
		V_0 = L_7;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_8 = V_0;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_9 = V_1;
		if ((!(((RuntimeObject*)(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*)L_8) == ((RuntimeObject*)(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CountdownText::remove_OnCountdownFinished(CountdownText/CountdownFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownText_remove_OnCountdownFinished_mE2060CF67D81626DE74FCBB8DAEEBB1F2E222474 (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* V_0 = NULL;
	CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* V_1 = NULL;
	CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* V_2 = NULL;
	{
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_0 = ((CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_StaticFields*)il2cpp_codegen_static_fields_for(CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_il2cpp_TypeInfo_var))->___OnCountdownFinished_4;
		V_0 = L_0;
	}

IL_0006:
	{
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_1 = V_0;
		V_1 = L_1;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_2 = V_1;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*)CastclassSealed((RuntimeObject*)L_4, CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A_il2cpp_TypeInfo_var));
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_5 = V_2;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_6 = V_1;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_7;
		L_7 = InterlockedCompareExchangeImpl<CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*>((&((CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_StaticFields*)il2cpp_codegen_static_fields_for(CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_il2cpp_TypeInfo_var))->___OnCountdownFinished_4), L_5, L_6);
		V_0 = L_7;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_8 = V_0;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_9 = V_1;
		if ((!(((RuntimeObject*)(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*)L_8) == ((RuntimeObject*)(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CountdownText::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownText_OnEnable_m60620EF194120D93CC8A3F7C9C52163D5C95A828 (CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EEB2DDDCEB5CB51B4DADAAF46FF72E0D387C3CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countdown = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___countdown_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___countdown_5), (void*)L_0);
		// countdown.text = "3";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___countdown_5;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		// StartCoroutine("Countdown");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral6EEB2DDDCEB5CB51B4DADAAF46FF72E0D387C3CF, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CountdownText::Countdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CountdownText_Countdown_m54E8C6B12FF72B52F0DA90D8B85BD85AD606C62D (CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56* L_0 = (U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56*)il2cpp_codegen_object_new(U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCountdownU3Ed__6__ctor_m7DC921546E87B20A1029CC175A88A6B18AD62367(L_0, 0, NULL);
		U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CountdownText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownText__ctor_m8BEE77DED80DCD670E8396823A1DD93A7DA4FB14 (CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1* __this, const RuntimeMethod* method) 
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
void CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_Multicast(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* currentDelegate = reinterpret_cast<CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_Open(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_Closed(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, method);
}
void CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_OpenStaticInvoker(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_ClosedStaticInvoker(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CountdownText/CountdownFinished::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownFinished__ctor_m3ADD1F10DD6B2516FA8DEF901EA1460046418F5C (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_Multicast;
}
// System.Void CountdownText/CountdownFinished::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CountdownText/CountdownFinished::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CountdownFinished_BeginInvoke_mE83E11426188E291BD473C0FC3FB9E981BB7A05F (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void CountdownText/CountdownFinished::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountdownFinished_EndInvoke_mC97E5845B824D3633FF802B899F56218AE3A8D16 (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CountdownText/<Countdown>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6__ctor_m7DC921546E87B20A1029CC175A88A6B18AD62367 (U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CountdownText/<Countdown>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6_System_IDisposable_Dispose_mF9797514F4CE762652082942C12A836DFB3A6B58 (U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CountdownText/<Countdown>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountdownU3Ed__6_MoveNext_m02194E374626806B97E96C2B2942340452222D8E (U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int count = 3;
		__this->___U3CcountU3E5__2_3 = 3;
		// for (int i = 0; i < count; i++) {
		__this->___U3CiU3E5__3_4 = 0;
		goto IL_007e;
	}

IL_002e:
	{
		// countdown.text = (count - i).ToString();
		CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1* L_4 = V_1;
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_4->___countdown_5;
		int32_t L_6 = __this->___U3CcountU3E5__2_3;
		int32_t L_7 = __this->___U3CiU3E5__3_4;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0067:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < count; i++) {
		int32_t L_10 = __this->___U3CiU3E5__3_4;
		V_2 = L_10;
		int32_t L_11 = V_2;
		__this->___U3CiU3E5__3_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_007e:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = __this->___U3CiU3E5__3_4;
		int32_t L_13 = __this->___U3CcountU3E5__2_3;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002e;
		}
	}
	{
		// OnCountdownFinished();
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_14 = ((CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_StaticFields*)il2cpp_codegen_static_fields_for(CountdownText_tD6BF607422ADF931CE0D01AABD99732B5F187FC1_il2cpp_TypeInfo_var))->___OnCountdownFinished_4;
		NullCheck(L_14);
		CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_inline(L_14, NULL);
		// }
		return (bool)0;
	}
}
// System.Object CountdownText/<Countdown>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountdownU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC7F62E5880240E93E00068E42731B917A971260E (U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CountdownText/<Countdown>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_m8DE5F4496B84C95F1D7B816A4CD26A915C9E4E51 (U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_m8DE5F4496B84C95F1D7B816A4CD26A915C9E4E51_RuntimeMethod_var)));
	}
}
// System.Object CountdownText/<Countdown>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountdownU3Ed__6_System_Collections_IEnumerator_get_Current_mF4D0D939E909E3D9C6F7203B3C7330724C06EE30 (U3CCountdownU3Ed__6_t5EC873F82275091C907CADD414176F49CC4ADF56* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void GameManager::add_OnGameStarted(GameManager/GameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnGameStarted_m33A3DC5D90E3D5ABFF820E322C764FCD341C3608 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_0 = NULL;
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_1 = NULL;
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_2 = NULL;
	{
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameStarted_5;
		V_0 = L_0;
	}

IL_0006:
	{
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_1 = V_0;
		V_1 = L_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_2 = V_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)CastclassSealed((RuntimeObject*)L_4, GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var));
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_5 = V_2;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_6 = V_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_7;
		L_7 = InterlockedCompareExchangeImpl<GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameStarted_5), L_5, L_6);
		V_0 = L_7;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_8 = V_0;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_9 = V_1;
		if ((!(((RuntimeObject*)(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)L_8) == ((RuntimeObject*)(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::remove_OnGameStarted(GameManager/GameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnGameStarted_m41C55E60E38CF3F360409315FA9066DEA9A1CB3C (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_0 = NULL;
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_1 = NULL;
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_2 = NULL;
	{
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameStarted_5;
		V_0 = L_0;
	}

IL_0006:
	{
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_1 = V_0;
		V_1 = L_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_2 = V_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)CastclassSealed((RuntimeObject*)L_4, GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var));
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_5 = V_2;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_6 = V_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_7;
		L_7 = InterlockedCompareExchangeImpl<GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameStarted_5), L_5, L_6);
		V_0 = L_7;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_8 = V_0;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_9 = V_1;
		if ((!(((RuntimeObject*)(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)L_8) == ((RuntimeObject*)(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::add_OnGameOverConfirmed(GameManager/GameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnGameOverConfirmed_m354F12BA528423F1B7F1173FE95F8D3626830091 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_0 = NULL;
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_1 = NULL;
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_2 = NULL;
	{
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameOverConfirmed_6;
		V_0 = L_0;
	}

IL_0006:
	{
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_1 = V_0;
		V_1 = L_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_2 = V_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)CastclassSealed((RuntimeObject*)L_4, GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var));
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_5 = V_2;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_6 = V_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_7;
		L_7 = InterlockedCompareExchangeImpl<GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameOverConfirmed_6), L_5, L_6);
		V_0 = L_7;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_8 = V_0;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_9 = V_1;
		if ((!(((RuntimeObject*)(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)L_8) == ((RuntimeObject*)(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::remove_OnGameOverConfirmed(GameManager/GameDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnGameOverConfirmed_m80FFD03DD0202F99F53C6801AF8AE00B2EDF6A06 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_0 = NULL;
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_1 = NULL;
	GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* V_2 = NULL;
	{
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameOverConfirmed_6;
		V_0 = L_0;
	}

IL_0006:
	{
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_1 = V_0;
		V_1 = L_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_2 = V_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)CastclassSealed((RuntimeObject*)L_4, GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var));
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_5 = V_2;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_6 = V_1;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_7;
		L_7 = InterlockedCompareExchangeImpl<GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameOverConfirmed_6), L_5, L_6);
		V_0 = L_7;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_8 = V_0;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_9 = V_1;
		if ((!(((RuntimeObject*)(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)L_8) == ((RuntimeObject*)(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean GameManager::get_GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public bool GameOver { get { return gameOver; } }
		bool L_0 = __this->___gameOver_12;
		return L_0;
	}
}
// System.Int32 GameManager::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_Score_m3640082785929352BF649E844AECA9184AAA6DAB (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public int Score { get { return score; } }
		int32_t L_0 = __this->___score_11;
		return L_0;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void GameManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnEnable_mCBA3C942196F2FE284CA416B26833E78468F635E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnCountdownFinished_mAB737D99D66615FA09122B975AE0CD95B7EAC31F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnPlayerDied_m77595C4F9CCD0AF42D889D09814014314E0F5B9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnPlayerScored_m30B91AE423BD9A55A7D254AD034F251580B08DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CountdownText.OnCountdownFinished += OnCountdownFinished;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_0 = (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*)il2cpp_codegen_object_new(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CountdownFinished__ctor_m3ADD1F10DD6B2516FA8DEF901EA1460046418F5C(L_0, __this, (intptr_t)((void*)GameManager_OnCountdownFinished_mAB737D99D66615FA09122B975AE0CD95B7EAC31F_RuntimeMethod_var), NULL);
		CountdownText_add_OnCountdownFinished_mEAEA8A7DB795C8171557AC285AFE766FD5F403A9(L_0, NULL);
		// TapController.OnPlayerDied += OnPlayerDied;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_1 = (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)il2cpp_codegen_object_new(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PlayerDelegate__ctor_mCF8E6FEBE3DFA93E1819E6FF6E2DCE1E52FC66D9(L_1, __this, (intptr_t)((void*)GameManager_OnPlayerDied_m77595C4F9CCD0AF42D889D09814014314E0F5B9C_RuntimeMethod_var), NULL);
		TapController_add_OnPlayerDied_mEFCFC8386879A66BC4172E6BBA2650A6B439E031(L_1, NULL);
		// TapController.OnPlayerScored += OnPlayerScored;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_2 = (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)il2cpp_codegen_object_new(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PlayerDelegate__ctor_mCF8E6FEBE3DFA93E1819E6FF6E2DCE1E52FC66D9(L_2, __this, (intptr_t)((void*)GameManager_OnPlayerScored_m30B91AE423BD9A55A7D254AD034F251580B08DB0_RuntimeMethod_var), NULL);
		TapController_add_OnPlayerScored_m8026315BD472AEE5859B7334E7BC14B21E4EF2CA(L_2, NULL);
		// SetPageState(PageState.Start);
		GameManager_SetPageState_m2614093B811932EB736DE3BFFBE051537D26C3B6(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDisable_mF3CB4DACBE9C8FF46B0ED4D4E7BD71315230B968 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnCountdownFinished_mAB737D99D66615FA09122B975AE0CD95B7EAC31F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnPlayerDied_m77595C4F9CCD0AF42D889D09814014314E0F5B9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnPlayerScored_m30B91AE423BD9A55A7D254AD034F251580B08DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CountdownText.OnCountdownFinished -= OnCountdownFinished;
		CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* L_0 = (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A*)il2cpp_codegen_object_new(CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CountdownFinished__ctor_m3ADD1F10DD6B2516FA8DEF901EA1460046418F5C(L_0, __this, (intptr_t)((void*)GameManager_OnCountdownFinished_mAB737D99D66615FA09122B975AE0CD95B7EAC31F_RuntimeMethod_var), NULL);
		CountdownText_remove_OnCountdownFinished_mE2060CF67D81626DE74FCBB8DAEEBB1F2E222474(L_0, NULL);
		// TapController.OnPlayerDied -= OnPlayerDied;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_1 = (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)il2cpp_codegen_object_new(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PlayerDelegate__ctor_mCF8E6FEBE3DFA93E1819E6FF6E2DCE1E52FC66D9(L_1, __this, (intptr_t)((void*)GameManager_OnPlayerDied_m77595C4F9CCD0AF42D889D09814014314E0F5B9C_RuntimeMethod_var), NULL);
		TapController_remove_OnPlayerDied_m3363D9F36AFF8C76A7C453837E65F8CEF9F6B9B4(L_1, NULL);
		// TapController.OnPlayerScored -= OnPlayerScored;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_2 = (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)il2cpp_codegen_object_new(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PlayerDelegate__ctor_mCF8E6FEBE3DFA93E1819E6FF6E2DCE1E52FC66D9(L_2, __this, (intptr_t)((void*)GameManager_OnPlayerScored_m30B91AE423BD9A55A7D254AD034F251580B08DB0_RuntimeMethod_var), NULL);
		TapController_remove_OnPlayerScored_mB69718349EFEC57A0D4D0D5D0879730C30D6C5CA(L_2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnCountdownFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnCountdownFinished_mAB737D99D66615FA09122B975AE0CD95B7EAC31F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetPageState(PageState.None);
		GameManager_SetPageState_m2614093B811932EB736DE3BFFBE051537D26C3B6(__this, 0, NULL);
		// OnGameStarted();
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameStarted_5;
		NullCheck(L_0);
		GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_inline(L_0, NULL);
		// score = 0;
		__this->___score_11 = 0;
		// gameOver = false;
		__this->___gameOver_12 = (bool)0;
		// }
		return;
	}
}
// System.Void GameManager::OnPlayerDied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnPlayerDied_m77595C4F9CCD0AF42D889D09814014314E0F5B9C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// gameOver = true;
		__this->___gameOver_12 = (bool)1;
		// int savedScore = PlayerPrefs.GetInt("Highscore");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6, NULL);
		V_0 = L_0;
		// if (score > savedScore)
		int32_t L_1 = __this->___score_11;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_002b;
		}
	}
	{
		// PlayerPrefs.SetInt("Highscore", score);
		int32_t L_3 = __this->___score_11;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6, L_3, NULL);
	}

IL_002b:
	{
		// SetPageState(PageState.GameOver);
		GameManager_SetPageState_m2614093B811932EB736DE3BFFBE051537D26C3B6(__this, 2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnPlayerScored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnPlayerScored_m30B91AE423BD9A55A7D254AD034F251580B08DB0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D4D2941C9914975DAEACD50AB8D9994045DE3A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score++;
		int32_t L_0 = __this->___score_11;
		__this->___score_11 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// scoreText.text = "Score : " + score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___scoreText_10;
		int32_t* L_2 = (&__this->___score_11);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2D4D2941C9914975DAEACD50AB8D9994045DE3A7, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void GameManager::SetPageState(GameManager/PageState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetPageState_m2614093B811932EB736DE3BFFBE051537D26C3B6 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___state0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_0086;
			}
		}
	}
	{
		return;
	}

IL_0017:
	{
		// startPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___startPage_7;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// gameOverPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameOverPage_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// countdownPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___countdownPage_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// break;
		return;
	}

IL_003c:
	{
		// startPage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___startPage_7;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// gameOverPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___gameOverPage_8;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// countdownPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___countdownPage_9;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// break;
		return;
	}

IL_0061:
	{
		// startPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___startPage_7;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// gameOverPage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___gameOverPage_8;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// countdownPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___countdownPage_9;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// break;
		return;
	}

IL_0086:
	{
		// startPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___startPage_7;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// gameOverPage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___gameOverPage_8;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// countdownPage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___countdownPage_9;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ConfirmGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ConfirmGameOver_mEBBA8B7F0DE862E6A745F230443A16EE52A4DB00 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15D40E7CF6DA730D6AA22F817BA013C16452C64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnGameOverConfirmed(); //event
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameOverConfirmed_6;
		NullCheck(L_0);
		GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_inline(L_0, NULL);
		// scoreText.text = "Score : 0";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___scoreText_10;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralA15D40E7CF6DA730D6AA22F817BA013C16452C64);
		// SetPageState(PageState.Start);
		GameManager_SetPageState_m2614093B811932EB736DE3BFFBE051537D26C3B6(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// SetPageState(PageState.Countdown);
		GameManager_SetPageState_m2614093B811932EB736DE3BFFBE051537D26C3B6(__this, 3, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ExitGame_m9F891C333D9746F17AB10CBB7705806877941C78 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// bool gameOver = true;
		__this->___gameOver_12 = (bool)1;
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
void GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_Multicast(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* currentDelegate = reinterpret_cast<GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_Open(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_Closed(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, method);
}
void GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_OpenStaticInvoker(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_ClosedStaticInvoker(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameManager/GameDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDelegate__ctor_mEDDB3D688DC4DF75611AF6CD5F77274417149AC2 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_Multicast;
}
// System.Void GameManager/GameDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameManager/GameDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameDelegate_BeginInvoke_m8A004AC92EFAD288D0C15E3C51BECD4F821B4A21 (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameManager/GameDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDelegate_EndInvoke_m9D980FBB071456319BF47CB79826A6CD8BFB0E1C (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void HighscoreText::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighscoreText_OnEnable_mE1FF2F3C160CA7AB0CE12038CD221814186BE98A (HighscoreText_tEF16E9DDE3769436826477C134FF8BA4946908C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// highscore = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___highscore_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___highscore_4), (void*)L_0);
		// highscore.text = "Highscore: " + PlayerPrefs.GetInt("Highscore").ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___highscore_4;
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral75B9C2589F235DD3C81AB7074613877A21D6F1F6, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3632213D60B5C0CA9BD6FD44599110D0BAC3DBF8, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void HighscoreText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighscoreText__ctor_m0992A850F8B0A0CC5C60F85D631C9214C7169D78 (HighscoreText_tEF16E9DDE3769436826477C134FF8BA4946908C2* __this, const RuntimeMethod* method) 
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
// System.Void Parallaxer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_Awake_mB1BF0DF3D5FA053E0C3F578F7095713A9E1101D7 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	{
		// Configure();
		Parallaxer_Configure_m0CF55AB85216A6C924D07579142A39876220D5E4(__this, NULL);
		// }
		return;
	}
}
// System.Void Parallaxer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_Start_mD1A34270A81FCAFADDDDC200F7BB7AA437942D8A (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// game = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_4;
		__this->___game_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___game_16), (void*)L_0);
		// }
		return;
	}
}
// System.Void Parallaxer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_OnEnable_mB5B37E060EC33F94648608935AB1EFCA573F1A65 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallaxer_OnGameOverConfirmed_mADC3545134F718ACFA5DB865F618419872A683A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.OnGameOverConfirmed += OnGameOverConfirmed;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_0 = (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)il2cpp_codegen_object_new(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameDelegate__ctor_mEDDB3D688DC4DF75611AF6CD5F77274417149AC2(L_0, __this, (intptr_t)((void*)Parallaxer_OnGameOverConfirmed_mADC3545134F718ACFA5DB865F618419872A683A9_RuntimeMethod_var), NULL);
		GameManager_add_OnGameOverConfirmed_m354F12BA528423F1B7F1173FE95F8D3626830091(L_0, NULL);
		// }
		return;
	}
}
// System.Void Parallaxer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_OnDisable_mF00BBAE5581CC56BE7B28A16D580AF22819C8114 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallaxer_OnGameOverConfirmed_mADC3545134F718ACFA5DB865F618419872A683A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.OnGameOverConfirmed -= OnGameOverConfirmed;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_0 = (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)il2cpp_codegen_object_new(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameDelegate__ctor_mEDDB3D688DC4DF75611AF6CD5F77274417149AC2(L_0, __this, (intptr_t)((void*)Parallaxer_OnGameOverConfirmed_mADC3545134F718ACFA5DB865F618419872A683A9_RuntimeMethod_var), NULL);
		GameManager_remove_OnGameOverConfirmed_m80FFD03DD0202F99F53C6801AF8AE00B2EDF6A06(L_0, NULL);
		// }
		return;
	}
}
// System.Void Parallaxer::OnGameOverConfirmed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_OnGameOverConfirmed_mADC3545134F718ACFA5DB865F618419872A683A9 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < poolObjects.Length; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		// poolObjects[i].Dispose();
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_0 = __this->___poolObjects_15;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		PoolObject_Dispose_m1A0E69E608D586FB188F7789C74C928066F793E5(L_3, NULL);
		// poolObjects[i].transform.position = Vector3.one * 1000;
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_4 = __this->___poolObjects_15;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___transform_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, (1000.0f), NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_10, NULL);
		// for (int i = 0; i < poolObjects.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0036:
	{
		// for (int i = 0; i < poolObjects.Length; i++)
		int32_t L_12 = V_0;
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_13 = __this->___poolObjects_15;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// if (spawnImmediate)
		bool L_14 = __this->___spawnImmediate_10;
		if (!L_14)
		{
			goto IL_004f;
		}
	}
	{
		// SpawnImmediate();
		Parallaxer_SpawnImmediate_m0A496AF0CECB3E8EE0B882658B3CF92F979D43ED(__this, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Parallaxer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_Update_m96A3F57115ABC8B0C53B3F74E6F1CA7DB97F3F16 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	{
		// if (game.GameOver) return;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___game_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (game.GameOver) return;
		return;
	}

IL_000e:
	{
		// Shift();
		Parallaxer_Shift_m9B6C1B37DEFBF11D987506BBAF1336375EDAAFA0(__this, NULL);
		// spawnTimer += Time.deltaTime;
		float L_2 = __this->___spawnTimer_13;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___spawnTimer_13 = ((float)il2cpp_codegen_add(L_2, L_3));
		// if (spawnTimer > spawnRate)
		float L_4 = __this->___spawnTimer_13;
		float L_5 = __this->___spawnRate_7;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0045;
		}
	}
	{
		// Spawn();
		Parallaxer_Spawn_m9C25A34F7EE3D39325F9491292962D213DE6DB38(__this, NULL);
		// spawnTimer = 0;
		__this->___spawnTimer_13 = (0.0f);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Parallaxer::Configure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_Configure_m0CF55AB85216A6C924D07579142A39876220D5E4 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolObject_t027754772FA29496DD2AFD541B52980885125869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// targetAspect = targetAspectRatio.x / targetAspectRatio.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___targetAspectRatio_12);
		float L_1 = L_0->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___targetAspectRatio_12);
		float L_3 = L_2->___y_1;
		__this->___targetAspect_14 = ((float)(L_1/L_3));
		// poolObjects = new PoolObject[poolSize];
		int32_t L_4 = __this->___poolSize_5;
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_5 = (PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E*)(PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E*)SZArrayNew(PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___poolObjects_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___poolObjects_15), (void*)L_5);
		// for (int i = 0; i < poolObjects.Length; i++)
		V_0 = 0;
		goto IL_0076;
	}

IL_0032:
	{
		// GameObject go = Instantiate(Prefab) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___Prefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// Transform t = go.transform;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		V_1 = L_8;
		// t.SetParent(transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_10, NULL);
		// t.position = Vector3.one * 1000;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, (1000.0f), NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_13, NULL);
		// poolObjects[i] = new PoolObject(t);
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_14 = __this->___poolObjects_15;
		int32_t L_15 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_17 = (PoolObject_t027754772FA29496DD2AFD541B52980885125869*)il2cpp_codegen_object_new(PoolObject_t027754772FA29496DD2AFD541B52980885125869_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		PoolObject__ctor_mB90D00062C1F16C2FD800E3B6D38BBDCE18ED154(L_17, L_16, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (PoolObject_t027754772FA29496DD2AFD541B52980885125869*)L_17);
		// for (int i = 0; i < poolObjects.Length; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0076:
	{
		// for (int i = 0; i < poolObjects.Length; i++)
		int32_t L_19 = V_0;
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_20 = __this->___poolObjects_15;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// if (spawnImmediate)
		bool L_21 = __this->___spawnImmediate_10;
		if (!L_21)
		{
			goto IL_008f;
		}
	}
	{
		// SpawnImmediate();
		Parallaxer_SpawnImmediate_m0A496AF0CECB3E8EE0B882658B3CF92F979D43ED(__this, NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Parallaxer::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_Spawn_m9C25A34F7EE3D39325F9491292962D213DE6DB38 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Transform t = GetPoolObject();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Parallaxer_GetPoolObject_m5FA73E64588AE0E6B76A157EAFA37AD957ED4A6D(__this, NULL);
		V_0 = L_0;
		// if (t == null) return; // if true indicates pool size too small
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// if (t == null) return; // if true indicates pool size too small
		return;
	}

IL_0011:
	{
		// Vector3 pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_1 = L_3;
		// pos.x = (defaultSpawnPos.x * Camera.main.aspect) / Camera.main.aspect;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___defaultSpawnPos_9);
		float L_5 = L_4->___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_8, NULL);
		(&V_1)->___x_2 = ((float)(((float)il2cpp_codegen_multiply(L_5, L_7))/L_9));
		// pos.y = UnityEngine.Random.Range(ySpawnRange.min, ySpawnRange.max);
		YSpawnRange_t4BEDBC017BF1856A7F82B116CC1B5B03A62B4DD7* L_10 = (&__this->___ySpawnRange_8);
		float L_11 = L_10->___min_0;
		YSpawnRange_t4BEDBC017BF1856A7F82B116CC1B5B03A62B4DD7* L_12 = (&__this->___ySpawnRange_8);
		float L_13 = L_12->___max_1;
		float L_14;
		L_14 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_11, L_13, NULL);
		(&V_1)->___y_3 = L_14;
		// t.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void Parallaxer::SpawnImmediate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_SpawnImmediate_m0A496AF0CECB3E8EE0B882658B3CF92F979D43ED (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Transform t = GetPoolObject();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Parallaxer_GetPoolObject_m5FA73E64588AE0E6B76A157EAFA37AD957ED4A6D(__this, NULL);
		V_0 = L_0;
		// if (t == null) return; // if true indicates pool size too small
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// if (t == null) return; // if true indicates pool size too small
		return;
	}

IL_0011:
	{
		// Vector3 pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_1 = L_3;
		// pos.x = (immediateSpawnPos.x * Camera.main.aspect) / Camera.main.aspect;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___immediateSpawnPos_11);
		float L_5 = L_4->___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_8, NULL);
		(&V_1)->___x_2 = ((float)(((float)il2cpp_codegen_multiply(L_5, L_7))/L_9));
		// pos.y = UnityEngine.Random.Range(ySpawnRange.min, ySpawnRange.max);
		YSpawnRange_t4BEDBC017BF1856A7F82B116CC1B5B03A62B4DD7* L_10 = (&__this->___ySpawnRange_8);
		float L_11 = L_10->___min_0;
		YSpawnRange_t4BEDBC017BF1856A7F82B116CC1B5B03A62B4DD7* L_12 = (&__this->___ySpawnRange_8);
		float L_13 = L_12->___max_1;
		float L_14;
		L_14 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_11, L_13, NULL);
		(&V_1)->___y_3 = L_14;
		// t.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_16, NULL);
		// Spawn();
		Parallaxer_Spawn_m9C25A34F7EE3D39325F9491292962D213DE6DB38(__this, NULL);
		// }
		return;
	}
}
// System.Void Parallaxer::Shift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_Shift_m9B6C1B37DEFBF11D987506BBAF1336375EDAAFA0 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < poolObjects.Length; i++)
		V_0 = 0;
		goto IL_0052;
	}

IL_0004:
	{
		// poolObjects[i].transform.localPosition += -Vector3.right * shiftSpeed * Time.deltaTime;
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_0 = __this->___poolObjects_15;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_7, NULL);
		float L_9 = __this->___shiftSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_9, NULL);
		float L_11;
		L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_12, NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_13, NULL);
		// CheckDisposeObject(poolObjects[i]);
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_14 = __this->___poolObjects_15;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Parallaxer_CheckDisposeObject_m1EA6F20691AF4BE2781A42760F3B301F18018D57(__this, L_17, NULL);
		// for (int i = 0; i < poolObjects.Length; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0052:
	{
		// for (int i = 0; i < poolObjects.Length; i++)
		int32_t L_19 = V_0;
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_20 = __this->___poolObjects_15;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Parallaxer::CheckDisposeObject(Parallaxer/PoolObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer_CheckDisposeObject_m1EA6F20691AF4BE2781A42760F3B301F18018D57 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, PoolObject_t027754772FA29496DD2AFD541B52980885125869* ___poolObject0, const RuntimeMethod* method) 
{
	{
		// if (poolObject.transform.position.x < (-defaultSpawnPos.x * Camera.main.aspect)/ Camera.main.aspect)
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_0 = ___poolObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___transform_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___defaultSpawnPos_9);
		float L_5 = L_4->___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_8, NULL);
		if ((!(((float)L_3) < ((float)((float)(((float)il2cpp_codegen_multiply(((-L_5)), L_7))/L_9))))))
		{
			goto IL_0054;
		}
	}
	{
		// poolObject.Dispose();
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_10 = ___poolObject0;
		NullCheck(L_10);
		PoolObject_Dispose_m1A0E69E608D586FB188F7789C74C928066F793E5(L_10, NULL);
		// poolObject.transform.position = Vector3.one * 1000;
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_11 = ___poolObject0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11->___transform_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_13, (1000.0f), NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_14, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// UnityEngine.Transform Parallaxer::GetPoolObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Parallaxer_GetPoolObject_m5FA73E64588AE0E6B76A157EAFA37AD957ED4A6D (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < poolObjects.Length; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// if (!poolObjects[i].inUse)
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_0 = __this->___poolObjects_15;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4 = L_3->___inUse_1;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// poolObjects[i].Use();
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_5 = __this->___poolObjects_15;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		PoolObject_Use_mCE3B39D652202EAAB3D813E83F13B60154865427(L_8, NULL);
		// return poolObjects[i].transform;
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_9 = __this->___poolObjects_15;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		PoolObject_t027754772FA29496DD2AFD541B52980885125869* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12->___transform_0;
		return L_13;
	}

IL_002e:
	{
		// for (int i = 0; i < poolObjects.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0032:
	{
		// for (int i = 0; i < poolObjects.Length; i++)
		int32_t L_15 = V_0;
		PoolObjectU5BU5D_tDDA1A36B7C003BA33BAD54EA08B5CB7A322CAC1E* L_16 = __this->___poolObjects_15;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}
}
// System.Void Parallaxer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallaxer__ctor_m4CBCD29C4F3CB4FD1D946F8A116EDAE485877602 (Parallaxer_t74F7608D29A1E88075B1676CC3252944CCB6EB23* __this, const RuntimeMethod* method) 
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
// System.Void Parallaxer/PoolObject::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolObject__ctor_mB90D00062C1F16C2FD800E3B6D38BBDCE18ED154 (PoolObject_t027754772FA29496DD2AFD541B52980885125869* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) 
{
	{
		// public PoolObject (Transform t) { transform = t; }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public PoolObject (Transform t) { transform = t; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___t0;
		__this->___transform_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transform_0), (void*)L_0);
		// public PoolObject (Transform t) { transform = t; }
		return;
	}
}
// System.Void Parallaxer/PoolObject::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolObject_Use_mCE3B39D652202EAAB3D813E83F13B60154865427 (PoolObject_t027754772FA29496DD2AFD541B52980885125869* __this, const RuntimeMethod* method) 
{
	{
		// public void Use() { inUse = true; }
		__this->___inUse_1 = (bool)1;
		// public void Use() { inUse = true; }
		return;
	}
}
// System.Void Parallaxer/PoolObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolObject_Dispose_m1A0E69E608D586FB188F7789C74C928066F793E5 (PoolObject_t027754772FA29496DD2AFD541B52980885125869* __this, const RuntimeMethod* method) 
{
	{
		// public void Dispose() { inUse = false; }
		__this->___inUse_1 = (bool)0;
		// public void Dispose() { inUse = false; }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TapController::add_OnPlayerDied(TapController/PlayerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_add_OnPlayerDied_mEFCFC8386879A66BC4172E6BBA2650A6B439E031 (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_0 = NULL;
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_1 = NULL;
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_2 = NULL;
	{
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_0 = ((TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields*)il2cpp_codegen_static_fields_for(TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var))->___OnPlayerDied_4;
		V_0 = L_0;
	}

IL_0006:
	{
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_1 = V_0;
		V_1 = L_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_2 = V_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)CastclassSealed((RuntimeObject*)L_4, PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var));
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_5 = V_2;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_6 = V_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_7;
		L_7 = InterlockedCompareExchangeImpl<PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*>((&((TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields*)il2cpp_codegen_static_fields_for(TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var))->___OnPlayerDied_4), L_5, L_6);
		V_0 = L_7;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_8 = V_0;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_9 = V_1;
		if ((!(((RuntimeObject*)(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)L_8) == ((RuntimeObject*)(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TapController::remove_OnPlayerDied(TapController/PlayerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_remove_OnPlayerDied_m3363D9F36AFF8C76A7C453837E65F8CEF9F6B9B4 (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_0 = NULL;
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_1 = NULL;
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_2 = NULL;
	{
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_0 = ((TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields*)il2cpp_codegen_static_fields_for(TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var))->___OnPlayerDied_4;
		V_0 = L_0;
	}

IL_0006:
	{
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_1 = V_0;
		V_1 = L_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_2 = V_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)CastclassSealed((RuntimeObject*)L_4, PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var));
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_5 = V_2;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_6 = V_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_7;
		L_7 = InterlockedCompareExchangeImpl<PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*>((&((TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields*)il2cpp_codegen_static_fields_for(TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var))->___OnPlayerDied_4), L_5, L_6);
		V_0 = L_7;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_8 = V_0;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_9 = V_1;
		if ((!(((RuntimeObject*)(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)L_8) == ((RuntimeObject*)(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TapController::add_OnPlayerScored(TapController/PlayerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_add_OnPlayerScored_m8026315BD472AEE5859B7334E7BC14B21E4EF2CA (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_0 = NULL;
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_1 = NULL;
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_2 = NULL;
	{
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_0 = ((TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields*)il2cpp_codegen_static_fields_for(TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var))->___OnPlayerScored_5;
		V_0 = L_0;
	}

IL_0006:
	{
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_1 = V_0;
		V_1 = L_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_2 = V_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)CastclassSealed((RuntimeObject*)L_4, PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var));
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_5 = V_2;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_6 = V_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_7;
		L_7 = InterlockedCompareExchangeImpl<PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*>((&((TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields*)il2cpp_codegen_static_fields_for(TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var))->___OnPlayerScored_5), L_5, L_6);
		V_0 = L_7;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_8 = V_0;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_9 = V_1;
		if ((!(((RuntimeObject*)(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)L_8) == ((RuntimeObject*)(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TapController::remove_OnPlayerScored(TapController/PlayerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_remove_OnPlayerScored_mB69718349EFEC57A0D4D0D5D0879730C30D6C5CA (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_0 = NULL;
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_1 = NULL;
	PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* V_2 = NULL;
	{
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_0 = ((TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields*)il2cpp_codegen_static_fields_for(TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var))->___OnPlayerScored_5;
		V_0 = L_0;
	}

IL_0006:
	{
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_1 = V_0;
		V_1 = L_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_2 = V_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)CastclassSealed((RuntimeObject*)L_4, PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE_il2cpp_TypeInfo_var));
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_5 = V_2;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_6 = V_1;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_7;
		L_7 = InterlockedCompareExchangeImpl<PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*>((&((TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields*)il2cpp_codegen_static_fields_for(TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var))->___OnPlayerScored_5), L_5, L_6);
		V_0 = L_7;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_8 = V_0;
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_9 = V_1;
		if ((!(((RuntimeObject*)(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)L_8) == ((RuntimeObject*)(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TapController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_Start_mBBD021FD34F5FD87996DE2AD3BD393A530B2656C (TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbody = GetComponent <Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigidbody_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody_12), (void*)L_0);
		// downRotation = Quaternion.Euler(0, 0, -90);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (-90.0f), NULL);
		__this->___downRotation_13 = L_1;
		// forwardRotation = Quaternion.Euler(0, 0, 35);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (35.0f), NULL);
		__this->___forwardRotation_14 = L_2;
		// game = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___Instance_4;
		__this->___game_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___game_15), (void*)L_3);
		// rigidbody.simulated = false;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rigidbody_12;
		NullCheck(L_4);
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TapController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_OnEnable_m06837FA29E1128FE2B9CBD51EE8DEE17D17B2E7D (TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapController_OnGameOverConfirmed_m37BB2F222835F3C970BBF0C2984D8230F8D67E12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapController_OnGameStarted_m5AD2426C99B6F6E0F6919D1775209FDF8573F77C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.OnGameStarted += OnGameStarted;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_0 = (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)il2cpp_codegen_object_new(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameDelegate__ctor_mEDDB3D688DC4DF75611AF6CD5F77274417149AC2(L_0, __this, (intptr_t)((void*)TapController_OnGameStarted_m5AD2426C99B6F6E0F6919D1775209FDF8573F77C_RuntimeMethod_var), NULL);
		GameManager_add_OnGameStarted_m33A3DC5D90E3D5ABFF820E322C764FCD341C3608(L_0, NULL);
		// GameManager.OnGameOverConfirmed += OnGameOverConfirmed;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_1 = (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)il2cpp_codegen_object_new(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameDelegate__ctor_mEDDB3D688DC4DF75611AF6CD5F77274417149AC2(L_1, __this, (intptr_t)((void*)TapController_OnGameOverConfirmed_m37BB2F222835F3C970BBF0C2984D8230F8D67E12_RuntimeMethod_var), NULL);
		GameManager_add_OnGameOverConfirmed_m354F12BA528423F1B7F1173FE95F8D3626830091(L_1, NULL);
		// }
		return;
	}
}
// System.Void TapController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_OnDisable_m0588426E0023A4E0C54B2B495EECD85C7CF68952 (TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapController_OnGameOverConfirmed_m37BB2F222835F3C970BBF0C2984D8230F8D67E12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapController_OnGameStarted_m5AD2426C99B6F6E0F6919D1775209FDF8573F77C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.OnGameStarted -= OnGameStarted;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_0 = (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)il2cpp_codegen_object_new(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameDelegate__ctor_mEDDB3D688DC4DF75611AF6CD5F77274417149AC2(L_0, __this, (intptr_t)((void*)TapController_OnGameStarted_m5AD2426C99B6F6E0F6919D1775209FDF8573F77C_RuntimeMethod_var), NULL);
		GameManager_remove_OnGameStarted_m41C55E60E38CF3F360409315FA9066DEA9A1CB3C(L_0, NULL);
		// GameManager.OnGameOverConfirmed -= OnGameOverConfirmed;
		GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* L_1 = (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896*)il2cpp_codegen_object_new(GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameDelegate__ctor_mEDDB3D688DC4DF75611AF6CD5F77274417149AC2(L_1, __this, (intptr_t)((void*)TapController_OnGameOverConfirmed_m37BB2F222835F3C970BBF0C2984D8230F8D67E12_RuntimeMethod_var), NULL);
		GameManager_remove_OnGameOverConfirmed_m80FFD03DD0202F99F53C6801AF8AE00B2EDF6A06(L_1, NULL);
		// }
		return;
	}
}
// System.Void TapController::OnGameStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_OnGameStarted_m5AD2426C99B6F6E0F6919D1775209FDF8573F77C (TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D* __this, const RuntimeMethod* method) 
{
	{
		// rigidbody.velocity = Vector3.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_1, NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_2, NULL);
		// rigidbody.simulated = true;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rigidbody_12;
		NullCheck(L_3);
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TapController::OnGameOverConfirmed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_OnGameOverConfirmed_m37BB2F222835F3C970BBF0C2984D8230F8D67E12 (TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D* __this, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = startPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___startPos_8;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// transform.rotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TapController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_Update_mE80A67E38C261B62B8481A907CFC3C14ED2C69C6 (TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (game.GameOver) return;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___game_15;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (game.GameOver) return;
		return;
	}

IL_000e:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_2)
		{
			goto IL_0063;
		}
	}
	{
		// tapAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___tapAudio_9;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// transform.rotation = forwardRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___forwardRotation_14;
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		// rigidbody.velocity = Vector3.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_7, NULL);
		NullCheck(L_6);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_6, L_8, NULL);
		// rigidbody.AddForce(Vector2.up * tapForce, ForceMode2D.Force);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___rigidbody_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		float L_11 = __this->___tapForce_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_9, L_12, 0, NULL);
	}

IL_0063:
	{
		// if (Input.GetKey("escape"))
		bool L_13;
		L_13 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07, NULL);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		// { Application.Quit(); }
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_0074:
	{
		// transform.rotation = Quaternion.Lerp(transform.rotation, downRotation, tiltSmooth * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = __this->___downRotation_13;
		float L_18 = __this->___tiltSmooth_7;
		float L_19;
		L_19 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_16, L_17, ((float)il2cpp_codegen_multiply(L_18, L_19)), NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_20, NULL);
		// }
		return;
	}
}
// System.Void TapController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController_OnTriggerEnter2D_mF313628B090D840E126FA09D3B7B427F62AE7537 (TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B599F767D32D8B1B566EC7DC1300282B03DDD96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEBA1C332EB2356D3EF1320D24E481C4F3C2BFCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "ScoreZone")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralBEBA1C332EB2356D3EF1320D24E481C4F3C2BFCB, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// OnPlayerScored(); // event sent ot gamemanager
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_4 = ((TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields*)il2cpp_codegen_static_fields_for(TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var))->___OnPlayerScored_5;
		NullCheck(L_4);
		PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_inline(L_4, NULL);
		// scoreAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___scoreAudio_10;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
	}

IL_002c:
	{
		// if (collision.gameObject.tag == "DeadZone")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___collision0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_7, NULL);
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral1B599F767D32D8B1B566EC7DC1300282B03DDD96, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// rigidbody.simulated = false;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_10 = __this->___rigidbody_12;
		NullCheck(L_10);
		Rigidbody2D_set_simulated_m38E0BD6581E907DD87059034C4B2E8D47BBFE71D(L_10, (bool)0, NULL);
		// OnPlayerDied(); //event sent to gamemamager
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* L_11 = ((TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_StaticFields*)il2cpp_codegen_static_fields_for(TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D_il2cpp_TypeInfo_var))->___OnPlayerDied_4;
		NullCheck(L_11);
		PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_inline(L_11, NULL);
		// dieAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___dieAudio_11;
		NullCheck(L_12);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void TapController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapController__ctor_m072123FFA40A47319EF0E160F4BD13BF53154D9E (TapController_t12C52184C482F261EEED15EB3F87CCE251F2871D* __this, const RuntimeMethod* method) 
{
	{
		// public float tapForce = 10;
		__this->___tapForce_6 = (10.0f);
		// public float tiltSmooth = 5;
		__this->___tiltSmooth_7 = (5.0f);
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
void PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_Multicast(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* currentDelegate = reinterpret_cast<PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_Open(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_Closed(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, method);
}
void PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_OpenStaticInvoker(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_ClosedStaticInvoker(PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TapController/PlayerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDelegate__ctor_mCF8E6FEBE3DFA93E1819E6FF6E2DCE1E52FC66D9 (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_Multicast;
}
// System.Void TapController/PlayerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TapController/PlayerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerDelegate_BeginInvoke_m73D00DE27F606988AAF6621DE11FFBBEEF18AF70 (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void TapController/PlayerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDelegate_EndInvoke_m57D63BCC855F1565AB7119FAD720110AD3BA1B87 (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CountdownFinished_Invoke_m35A2DD5F65CB273330A3D7F61E274ED6A70C023F_inline (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (CountdownFinished_t92ECB5FBFD45472F8BC281ECF1DA93C01A4C905A* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameDelegate_Invoke_mDD50E2CB06DCE99CC22B3052AAC35E6762910FE3_inline (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (GameDelegate_tB557C10CEFEC992348F97C31C7078B5F2D3A1896* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_get_GameOver_m01334E89CE8A36B7795AD0CDD173E3449681E1A8_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public bool GameOver { get { return gameOver; } }
		bool L_0 = __this->___gameOver_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerDelegate_Invoke_m7D0351DF7A56603E3B7B53EF96E4996847B1062B_inline (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (PlayerDelegate_t4C9E6E2145F897DC53DFF1E77C90BAB53993B0CE* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
