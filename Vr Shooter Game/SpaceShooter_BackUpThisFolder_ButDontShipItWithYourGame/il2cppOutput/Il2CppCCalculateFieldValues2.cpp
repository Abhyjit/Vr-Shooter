#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<System.Int32,System.String>
struct Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6;
// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>
struct Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D;
// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F  : public RuntimeObject
{
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___elist_2;
};

// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2  : public RuntimeObject
{
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesAvailable
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesAvailable_0;
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesOverflow
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesOverflow_1;
};

// UnityEngineInternal.Input.NativeInputSystem
struct NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE  : public RuntimeObject
{
};

struct NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields
{
	// UnityEngineInternal.Input.NativeUpdateCallback UnityEngineInternal.Input.NativeInputSystem::onUpdate
	NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* ___onUpdate_0;
	// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> UnityEngineInternal.Input.NativeInputSystem::onBeforeUpdate
	Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B* ___onBeforeUpdate_1;
	// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> UnityEngineInternal.Input.NativeInputSystem::onShouldRunUpdate
	Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2* ___onShouldRunUpdate_2;
	// System.Action`2<System.Int32,System.String> UnityEngineInternal.Input.NativeInputSystem::s_OnDeviceDiscoveredCallback
	Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* ___s_OnDeviceDiscoveredCallback_3;
};

// UnityEngine.SpatialTracking.PoseDataSource
struct PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858  : public RuntimeObject
{
};

struct PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.SpatialTracking.PoseDataSource::nodeStates
	List_1_t8AE5A65CCFBC753343962D38B82C801F7BDE3C87* ___nodeStates_0;
};

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
struct TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF  : public RuntimeObject
{
};

struct TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::DeviceData
	List_1_tA8C10B8A593896280D68A4B006217C43F236DE0D* ___DeviceData_0;
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

// UnityEngine.XR.XRDevice
struct XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194  : public RuntimeObject
{
};

struct XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields
{
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___deviceLoaded_0;
};

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngineInternal.Input.NativeInputEvent
struct NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEventType UnityEngineInternal.Input.NativeInputEvent::type
					int32_t ___type_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[4];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::sizeInBytes
					uint16_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding[6];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::deviceId
					uint16_t ___deviceId_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding[8];
					// System.Double UnityEngineInternal.Input.NativeInputEvent::time
					double ___time_4;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding_forAlignmentOnly[8];
					double ___time_4_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEvent::eventId
					int32_t ___eventId_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8__padding[20];
	};
};

// UnityEngineInternal.Input.NativeInputEventBuffer
struct NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Void* UnityEngineInternal.Input.NativeInputEventBuffer::eventBuffer
					void* ___eventBuffer_0;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					void* ___eventBuffer_0_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding[8];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::eventCount
					int32_t ___eventCount_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding_forAlignmentOnly[8];
					int32_t ___eventCount_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[12];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::sizeInBytes
					int32_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[12];
					int32_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::capacityInBytes
					int32_t ___capacityInBytes_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding_forAlignmentOnly[16];
					int32_t ___capacityInBytes_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD__padding[20];
	};
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

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A 
{
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::PoseNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::Poses
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_pinvoke
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_com
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
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

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.ParticleSystem/Particle
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;
};

// UnityEngine.Rendering.Universal.ShaderInput/LightData
struct LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED 
{
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::position
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___position_0;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::color
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___color_1;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::attenuation
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___attenuation_2;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::spotDirection
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___spotDirection_3;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::occlusionProbeChannels
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___occlusionProbeChannels_4;
	// System.UInt32 UnityEngine.Rendering.Universal.ShaderInput/LightData::layerMask
	uint32_t ___layerMask_5;
};

// UnityEngine.Rendering.Universal.ShaderInput/ShadowData
struct ShadowData_t25107BFCD514C4CD90FAC8F07B5DFA940E2E5B67 
{
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.ShaderInput/ShadowData::worldToShadowMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToShadowMatrix_0;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/ShadowData::shadowParams
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___shadowParams_1;
};

// UnityEngine.Audio.AudioClipPlayable
struct AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Audio.AudioMixerPlayable
struct AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Audio.AudioPlayableOutput
struct AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 
{
	// UnityEngine.ParticleSystem/Particle UnityEngine.ParticleSystem/EmitParams::m_Particle
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_PositionSet
	bool ___m_PositionSet_1;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_VelocitySet
	bool ___m_VelocitySet_2;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AxisOfRotationSet
	bool ___m_AxisOfRotationSet_3;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RotationSet
	bool ___m_RotationSet_4;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AngularVelocitySet
	bool ___m_AngularVelocitySet_5;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartSizeSet
	bool ___m_StartSizeSet_6;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartColorSet
	bool ___m_StartColorSet_7;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RandomSeedSet
	bool ___m_RandomSeedSet_8;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartLifetimeSet
	bool ___m_StartLifetimeSet_9;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_MeshIndexSet
	bool ___m_MeshIndexSet_10;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_ApplyShapeToPosition
	bool ___m_ApplyShapeToPosition_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_pinvoke
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_com
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_OriginPose_10;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6000[1] = 
{
	static_cast<int32_t>(offsetof(AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20, ___m_Handle_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6001[1] = 
{
	static_cast<int32_t>(offsetof(AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0, ___m_Handle_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6002[1] = 
{
	static_cast<int32_t>(offsetof(AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C, ___m_Handle_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6004[2] = 
{
	static_cast<int32_t>(offsetof(AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2, ___sampleFramesAvailable_0)),static_cast<int32_t>(offsetof(AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2, ___sampleFramesOverflow_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6006[17] = 
{
	static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_Position_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_Velocity_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_AnimatedVelocity_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_InitialVelocity_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_AxisOfRotation_4)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_Rotation_5)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_AngularVelocity_6)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_StartSize_7)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_StartColor_8)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_RandomSeed_9)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_ParentRandomSeed_10)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_Lifetime_11)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_StartLifetime_12)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_MeshIndex_13)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_EmitAccumulator0_14)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_EmitAccumulator1_15)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D, ___m_Flags_16)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6007[12] = 
{
	static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_Particle_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_PositionSet_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_VelocitySet_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_AxisOfRotationSet_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_RotationSet_4)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_AngularVelocitySet_5)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_StartSizeSet_6)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_StartColorSet_7)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_RandomSeedSet_8)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_StartLifetimeSet_9)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_MeshIndexSet_10)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0, ___m_ApplyShapeToPosition_11)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6012[6] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6013[4] = 
{
	static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___eventBuffer_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___eventCount_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___sizeInBytes_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___capacityInBytes_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6014[6] = 
{
	0,static_cast<int32_t>(offsetof(NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8, ___type_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8, ___sizeInBytes_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8, ___deviceId_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8, ___time_4)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8, ___eventId_5)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6015[6] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6016[4] = 
{
	static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___onUpdate_0)),static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___onBeforeUpdate_1)),static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___onShouldRunUpdate_2)),static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___s_OnDeviceDiscoveredCallback_3)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6018[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6020[1] = 
{
	static_cast<int32_t>(offsetof(XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields, ___deviceLoaded_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6029[2] = 
{
	static_cast<int32_t>(offsetof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A, ___PoseNames_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A, ___Poses_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6030[1] = 
{
	static_cast<int32_t>(offsetof(TrackedPoseDriverDataDescription_tDD80D37EB4F938007BCE0FAB9705032594E4D9FF_StaticFields, ___DeviceData_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6031[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6032[1] = 
{
	static_cast<int32_t>(offsetof(PoseDataSource_tF08072CF4DBA9641E6AE6D1DBA1D421DA9C46858_StaticFields, ___nodeStates_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6033[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6034[12] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6035[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6036[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6037[7] = 
{
	static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_Device_4)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_PoseSource_5)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_PoseProviderComponent_6)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_TrackingType_7)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_UpdateType_8)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_UseRelativeTransform_9)),static_cast<int32_t>(offsetof(TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD, ___m_OriginPose_10)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6044[3] = 
{
	static_cast<int32_t>(offsetof(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F, ___m_nTag_0)),static_cast<int32_t>(offsetof(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F, ___m_aValue_1)),static_cast<int32_t>(offsetof(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F, ___elist_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6049[3] = 
{
	static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___IsTextualNodeBitmap_0)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___CanReadContentAsBitmap_1)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___HasValueBitmap_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6052[13] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6053[9] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6054[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6055[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6056[6] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6057[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6058[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6059[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6060[6] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6061[7] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6062[8] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6063[2] = 
{
	static_cast<int32_t>(offsetof(ShadowData_t25107BFCD514C4CD90FAC8F07B5DFA940E2E5B67, ___worldToShadowMatrix_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(ShadowData_t25107BFCD514C4CD90FAC8F07B5DFA940E2E5B67, ___shadowParams_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6064[6] = 
{
	static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___position_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___color_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___attenuation_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___spotDirection_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___occlusionProbeChannels_4)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED, ___layerMask_5)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6073[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
