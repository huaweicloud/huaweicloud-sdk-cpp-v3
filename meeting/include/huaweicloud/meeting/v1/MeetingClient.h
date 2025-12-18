#ifndef HUAWEICLOUD_SDK_MEETING_V1_MeetingClient_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MeetingClient_H_

#include <huaweicloud/meeting/v1/MeetingExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/meeting/v1/model/ActiveDTO.h>
#include <huaweicloud/meeting/v1/model/AddAppIdRequest.h>
#include <huaweicloud/meeting/v1/model/AddAppIdRequestBody.h>
#include <huaweicloud/meeting/v1/model/AddAppIdResponse.h>
#include <huaweicloud/meeting/v1/model/AddCorpAdminRequest.h>
#include <huaweicloud/meeting/v1/model/AddCorpAdminResponse.h>
#include <huaweicloud/meeting/v1/model/AddCorpDTO.h>
#include <huaweicloud/meeting/v1/model/AddCorpRequest.h>
#include <huaweicloud/meeting/v1/model/AddCorpResponse.h>
#include <huaweicloud/meeting/v1/model/AddDepartmentRequest.h>
#include <huaweicloud/meeting/v1/model/AddDepartmentResponse.h>
#include <huaweicloud/meeting/v1/model/AddDeviceDTO.h>
#include <huaweicloud/meeting/v1/model/AddDeviceRequest.h>
#include <huaweicloud/meeting/v1/model/AddDeviceResponse.h>
#include <huaweicloud/meeting/v1/model/AddMaterialRequest.h>
#include <huaweicloud/meeting/v1/model/AddMaterialRequestBody.h>
#include <huaweicloud/meeting/v1/model/AddMaterialResponse.h>
#include <huaweicloud/meeting/v1/model/AddProgramRequest.h>
#include <huaweicloud/meeting/v1/model/AddProgramResponse.h>
#include <huaweicloud/meeting/v1/model/AddPublicationRequest.h>
#include <huaweicloud/meeting/v1/model/AddPublicationResponse.h>
#include <huaweicloud/meeting/v1/model/AddResourceRequest.h>
#include <huaweicloud/meeting/v1/model/AddResourceResponse.h>
#include <huaweicloud/meeting/v1/model/AddToPersonalSpaceRequest.h>
#include <huaweicloud/meeting/v1/model/AddToPersonalSpaceResponse.h>
#include <huaweicloud/meeting/v1/model/AddUserDTO.h>
#include <huaweicloud/meeting/v1/model/AddUserRequest.h>
#include <huaweicloud/meeting/v1/model/AddUserRequestBody.h>
#include <huaweicloud/meeting/v1/model/AddUserResponse.h>
#include <huaweicloud/meeting/v1/model/AdminResetPwdReqDTO.h>
#include <huaweicloud/meeting/v1/model/AllowAudienceJoinRequest.h>
#include <huaweicloud/meeting/v1/model/AllowAudienceJoinResponse.h>
#include <huaweicloud/meeting/v1/model/AllowClientRecordRequest.h>
#include <huaweicloud/meeting/v1/model/AllowClientRecordResponse.h>
#include <huaweicloud/meeting/v1/model/AllowGuestUnmuteRequest.h>
#include <huaweicloud/meeting/v1/model/AllowGuestUnmuteResponse.h>
#include <huaweicloud/meeting/v1/model/AllowWaitingParticipantRequest.h>
#include <huaweicloud/meeting/v1/model/AllowWaitingParticipantResponse.h>
#include <huaweicloud/meeting/v1/model/AssociateVmrRequest.h>
#include <huaweicloud/meeting/v1/model/AssociateVmrResponse.h>
#include <huaweicloud/meeting/v1/model/AuthorizeConfigInfoRequestBody.h>
#include <huaweicloud/meeting/v1/model/BatchDeleteCorpAdminsRequest.h>
#include <huaweicloud/meeting/v1/model/BatchDeleteCorpAdminsResponse.h>
#include <huaweicloud/meeting/v1/model/BatchDeleteDevicesRequest.h>
#include <huaweicloud/meeting/v1/model/BatchDeleteDevicesResponse.h>
#include <huaweicloud/meeting/v1/model/BatchDeleteMaterialsRequest.h>
#include <huaweicloud/meeting/v1/model/BatchDeleteMaterialsResponse.h>
#include <huaweicloud/meeting/v1/model/BatchDeleteProgramsRequest.h>
#include <huaweicloud/meeting/v1/model/BatchDeleteProgramsResponse.h>
#include <huaweicloud/meeting/v1/model/BatchDeletePublicationsRequest.h>
#include <huaweicloud/meeting/v1/model/BatchDeletePublicationsResponse.h>
#include <huaweicloud/meeting/v1/model/BatchDeleteUsersRequest.h>
#include <huaweicloud/meeting/v1/model/BatchDeleteUsersResponse.h>
#include <huaweicloud/meeting/v1/model/BatchHandRequest.h>
#include <huaweicloud/meeting/v1/model/BatchHandResponse.h>
#include <huaweicloud/meeting/v1/model/BatchMoveToWaitingRoomRequest.h>
#include <huaweicloud/meeting/v1/model/BatchMoveToWaitingRoomResponse.h>
#include <huaweicloud/meeting/v1/model/BatchSearchAppIdRequest.h>
#include <huaweicloud/meeting/v1/model/BatchSearchAppIdResponse.h>
#include <huaweicloud/meeting/v1/model/BatchShowUserDetailsRequest.h>
#include <huaweicloud/meeting/v1/model/BatchShowUserDetailsResponse.h>
#include <huaweicloud/meeting/v1/model/BatchUpdateDevicesStatusRequest.h>
#include <huaweicloud/meeting/v1/model/BatchUpdateDevicesStatusResponse.h>
#include <huaweicloud/meeting/v1/model/BatchUpdateUserStatusRequest.h>
#include <huaweicloud/meeting/v1/model/BatchUpdateUserStatusResponse.h>
#include <huaweicloud/meeting/v1/model/BroadcastParticipantRequest.h>
#include <huaweicloud/meeting/v1/model/BroadcastParticipantResponse.h>
#include <huaweicloud/meeting/v1/model/CancelBroadcastRequest.h>
#include <huaweicloud/meeting/v1/model/CancelBroadcastResponse.h>
#include <huaweicloud/meeting/v1/model/CancelMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/CancelMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/CancelRecurringMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/CancelRecurringMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/CancelRecurringSubMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/CancelRecurringSubMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/CheckCallNumberInConfRequest.h>
#include <huaweicloud/meeting/v1/model/CheckCallNumberInConfResponse.h>
#include <huaweicloud/meeting/v1/model/CheckSlideVerifyCodeRequest.h>
#include <huaweicloud/meeting/v1/model/CheckSlideVerifyCodeResponse.h>
#include <huaweicloud/meeting/v1/model/CheckTokenRequest.h>
#include <huaweicloud/meeting/v1/model/CheckTokenResponse.h>
#include <huaweicloud/meeting/v1/model/CheckVeriCodeForUpdateUserInfoRequest.h>
#include <huaweicloud/meeting/v1/model/CheckVeriCodeForUpdateUserInfoResponse.h>
#include <huaweicloud/meeting/v1/model/CheckVerifyCodeRequest.h>
#include <huaweicloud/meeting/v1/model/CheckVerifyCodeResponse.h>
#include <huaweicloud/meeting/v1/model/ConferenceInfo.h>
#include <huaweicloud/meeting/v1/model/CorpAdminDTO.h>
#include <huaweicloud/meeting/v1/model/CreateAnonymousAuthRandomRequest.h>
#include <huaweicloud/meeting/v1/model/CreateAnonymousAuthRandomResponse.h>
#include <huaweicloud/meeting/v1/model/CreateAuthRandomRequest.h>
#include <huaweicloud/meeting/v1/model/CreateAuthRandomResponse.h>
#include <huaweicloud/meeting/v1/model/CreateConfTokenRequest.h>
#include <huaweicloud/meeting/v1/model/CreateConfTokenResponse.h>
#include <huaweicloud/meeting/v1/model/CreateMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/CreateMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/CreatePortalRefNonceRequest.h>
#include <huaweicloud/meeting/v1/model/CreatePortalRefNonceResponse.h>
#include <huaweicloud/meeting/v1/model/CreateProgramRequestDTO.h>
#include <huaweicloud/meeting/v1/model/CreatePublicationRequestDTO.h>
#include <huaweicloud/meeting/v1/model/CreateRecurringMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/CreateRecurringMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/CreateVisionActiveCodeRequest.h>
#include <huaweicloud/meeting/v1/model/CreateVisionActiveCodeResponse.h>
#include <huaweicloud/meeting/v1/model/CreateWebSocketTokenRequest.h>
#include <huaweicloud/meeting/v1/model/CreateWebSocketTokenResponse.h>
#include <huaweicloud/meeting/v1/model/CreateWebinarRequest.h>
#include <huaweicloud/meeting/v1/model/CreateWebinarResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteAppIdRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteAppIdResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteAttendeesRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteAttendeesResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteCorpRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteCorpResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteCorpVmrRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteCorpVmrResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteDepartmentRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteDepartmentResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteLayoutRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteLayoutResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteRecordingsRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteRecordingsResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteResourceRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteResourceResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteTokenRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteTokenResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteVisionActiveCodeRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteVisionActiveCodeResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteWebHookConfigRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteWebHookConfigResponse.h>
#include <huaweicloud/meeting/v1/model/DeleteWebinarRequest.h>
#include <huaweicloud/meeting/v1/model/DeleteWebinarResponse.h>
#include <huaweicloud/meeting/v1/model/DeptDTO.h>
#include <huaweicloud/meeting/v1/model/DisassociateVmrRequest.h>
#include <huaweicloud/meeting/v1/model/DisassociateVmrResponse.h>
#include <huaweicloud/meeting/v1/model/HandRequest.h>
#include <huaweicloud/meeting/v1/model/HandResponse.h>
#include <huaweicloud/meeting/v1/model/HangUpRequest.h>
#include <huaweicloud/meeting/v1/model/HangUpResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/meeting/v1/model/InviteOperateVideoRequest.h>
#include <huaweicloud/meeting/v1/model/InviteOperateVideoResponse.h>
#include <huaweicloud/meeting/v1/model/InviteParticipantRequest.h>
#include <huaweicloud/meeting/v1/model/InviteParticipantResponse.h>
#include <huaweicloud/meeting/v1/model/InviteShareDTO.h>
#include <huaweicloud/meeting/v1/model/InviteShareRequest.h>
#include <huaweicloud/meeting/v1/model/InviteShareResponse.h>
#include <huaweicloud/meeting/v1/model/InviteUserRequest.h>
#include <huaweicloud/meeting/v1/model/InviteUserResponse.h>
#include <huaweicloud/meeting/v1/model/InviteWithPwdRequest.h>
#include <huaweicloud/meeting/v1/model/InviteWithPwdResponse.h>
#include <huaweicloud/meeting/v1/model/ListHistoryWebinarsRequest.h>
#include <huaweicloud/meeting/v1/model/ListHistoryWebinarsResponse.h>
#include <huaweicloud/meeting/v1/model/ListNetworkQualityRequest.h>
#include <huaweicloud/meeting/v1/model/ListNetworkQualityResponse.h>
#include <huaweicloud/meeting/v1/model/ListOngoingWebinarsRequest.h>
#include <huaweicloud/meeting/v1/model/ListOngoingWebinarsResponse.h>
#include <huaweicloud/meeting/v1/model/ListOnlineConfAttendeeRequest.h>
#include <huaweicloud/meeting/v1/model/ListOnlineConfAttendeeResponse.h>
#include <huaweicloud/meeting/v1/model/ListUpComingWebinarsRequest.h>
#include <huaweicloud/meeting/v1/model/ListUpComingWebinarsResponse.h>
#include <huaweicloud/meeting/v1/model/LiveRequest.h>
#include <huaweicloud/meeting/v1/model/LiveResponse.h>
#include <huaweicloud/meeting/v1/model/LockMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/LockMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/LockViewRequest.h>
#include <huaweicloud/meeting/v1/model/LockViewResponse.h>
#include <huaweicloud/meeting/v1/model/ModCorpBasicInfoDTO.h>
#include <huaweicloud/meeting/v1/model/ModCorpDTO.h>
#include <huaweicloud/meeting/v1/model/ModDeptDTO.h>
#include <huaweicloud/meeting/v1/model/ModDeviceDTO.h>
#include <huaweicloud/meeting/v1/model/ModMemberDTO.h>
#include <huaweicloud/meeting/v1/model/ModPwdReqDTO.h>
#include <huaweicloud/meeting/v1/model/ModResourceDTO.h>
#include <huaweicloud/meeting/v1/model/ModUserDTO.h>
#include <huaweicloud/meeting/v1/model/ModVmrDTO.h>
#include <huaweicloud/meeting/v1/model/MoveToWaitingRoomRequest.h>
#include <huaweicloud/meeting/v1/model/MoveToWaitingRoomResponse.h>
#include <huaweicloud/meeting/v1/model/MuteMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/MuteMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/MuteParticipantRequest.h>
#include <huaweicloud/meeting/v1/model/MuteParticipantResponse.h>
#include <huaweicloud/meeting/v1/model/OpenEditConfReq.h>
#include <huaweicloud/meeting/v1/model/OpenRoomSettingReq.h>
#include <huaweicloud/meeting/v1/model/OpenScheduleConfReq.h>
#include <huaweicloud/meeting/v1/model/PauseConferenceReq.h>
#include <huaweicloud/meeting/v1/model/PauseConferenceRequest.h>
#include <huaweicloud/meeting/v1/model/PauseConferenceResponse.h>
#include <huaweicloud/meeting/v1/model/ProlongMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/ProlongMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/QueryDeptResultDTO.h>
#include <huaweicloud/meeting/v1/model/QueryDeviceTypeResultDTO.h>
#include <huaweicloud/meeting/v1/model/RecordInfoReq.h>
#include <huaweicloud/meeting/v1/model/RecordRequest.h>
#include <huaweicloud/meeting/v1/model/RecordResponse.h>
#include <huaweicloud/meeting/v1/model/RenameParticipantRequest.h>
#include <huaweicloud/meeting/v1/model/RenameParticipantResponse.h>
#include <huaweicloud/meeting/v1/model/ResetActivecodeRequest.h>
#include <huaweicloud/meeting/v1/model/ResetActivecodeResponse.h>
#include <huaweicloud/meeting/v1/model/ResetAppKeyRequest.h>
#include <huaweicloud/meeting/v1/model/ResetAppKeyResponse.h>
#include <huaweicloud/meeting/v1/model/ResetPwdByAdminRequest.h>
#include <huaweicloud/meeting/v1/model/ResetPwdByAdminResponse.h>
#include <huaweicloud/meeting/v1/model/ResetPwdReqDTOV1.h>
#include <huaweicloud/meeting/v1/model/ResetPwdRequest.h>
#include <huaweicloud/meeting/v1/model/ResetPwdResponse.h>
#include <huaweicloud/meeting/v1/model/ResetVisionActiveCodeRequest.h>
#include <huaweicloud/meeting/v1/model/ResetVisionActiveCodeResponse.h>
#include <huaweicloud/meeting/v1/model/ResourceDTO.h>
#include <huaweicloud/meeting/v1/model/RestAllowAudienceReqBody.h>
#include <huaweicloud/meeting/v1/model/RestAllowClientRecordReqBody.h>
#include <huaweicloud/meeting/v1/model/RestAllowUnMuteReqBody.h>
#include <huaweicloud/meeting/v1/model/RestAllowWaitingParticipantReqBody.h>
#include <huaweicloud/meeting/v1/model/RestBatchHandsUpReqBody.h>
#include <huaweicloud/meeting/v1/model/RestBatchMoveToWaitingRoomReqBody.h>
#include <huaweicloud/meeting/v1/model/RestBulkDelAttendReqBody.h>
#include <huaweicloud/meeting/v1/model/RestBulkHangUpReqBody.h>
#include <huaweicloud/meeting/v1/model/RestCancelSingleRecordCycleConfListReqBody.h>
#include <huaweicloud/meeting/v1/model/RestChairTokenReqBody.h>
#include <huaweicloud/meeting/v1/model/RestChairViewReqBody.h>
#include <huaweicloud/meeting/v1/model/RestCustomMultiPictureBody.h>
#include <huaweicloud/meeting/v1/model/RestHandsUpReqBody.h>
#include <huaweicloud/meeting/v1/model/RestInviteReqBody.h>
#include <huaweicloud/meeting/v1/model/RestInviteWithPwdReqBody.h>
#include <huaweicloud/meeting/v1/model/RestLockReqBody.h>
#include <huaweicloud/meeting/v1/model/RestLockSiteViewReqBody.h>
#include <huaweicloud/meeting/v1/model/RestMixedPictureBody.h>
#include <huaweicloud/meeting/v1/model/RestMoveToWaitingRoomReqBody.h>
#include <huaweicloud/meeting/v1/model/RestMuteParticipantReqBody.h>
#include <huaweicloud/meeting/v1/model/RestMuteReqBody.h>
#include <huaweicloud/meeting/v1/model/RestParticipantViewReqBody.h>
#include <huaweicloud/meeting/v1/model/RestPicLayoutBody.h>
#include <huaweicloud/meeting/v1/model/RestProlongDurReqBody.h>
#include <huaweicloud/meeting/v1/model/RestQosRequestDTO.h>
#include <huaweicloud/meeting/v1/model/RestRenamePartReqBody.h>
#include <huaweicloud/meeting/v1/model/RestScheduleConfDTO.h>
#include <huaweicloud/meeting/v1/model/RestScheduleCycleConfDTO.h>
#include <huaweicloud/meeting/v1/model/RestSetAttendeeLanChannelBody.h>
#include <huaweicloud/meeting/v1/model/RestSetCohostBody.h>
#include <huaweicloud/meeting/v1/model/RestSetInterpreterGroupBody.h>
#include <huaweicloud/meeting/v1/model/RestSetLiveReqBody.h>
#include <huaweicloud/meeting/v1/model/RestSetMmrLiveReqBody.h>
#include <huaweicloud/meeting/v1/model/RestSetMmrRecordReqBody.h>
#include <huaweicloud/meeting/v1/model/RestSetRecordReqBody.h>
#include <huaweicloud/meeting/v1/model/RestSimultaneousInterpretationBody.h>
#include <huaweicloud/meeting/v1/model/RestSwitchModeReqBody.h>
#include <huaweicloud/meeting/v1/model/RestVideoBody.h>
#include <huaweicloud/meeting/v1/model/ResumeSimultaneousInterpretationRequest.h>
#include <huaweicloud/meeting/v1/model/ResumeSimultaneousInterpretationResponse.h>
#include <huaweicloud/meeting/v1/model/RollcallParticipantRequest.h>
#include <huaweicloud/meeting/v1/model/RollcallParticipantResponse.h>
#include <huaweicloud/meeting/v1/model/SaveLayoutRequest.h>
#include <huaweicloud/meeting/v1/model/SaveLayoutResponse.h>
#include <huaweicloud/meeting/v1/model/SearchAttendanceRecordsOfHisMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/SearchAttendanceRecordsOfHisMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/SearchCorpAdminsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchCorpAdminsResponse.h>
#include <huaweicloud/meeting/v1/model/SearchCorpDirRequest.h>
#include <huaweicloud/meeting/v1/model/SearchCorpDirResponse.h>
#include <huaweicloud/meeting/v1/model/SearchCorpExternalDirRequest.h>
#include <huaweicloud/meeting/v1/model/SearchCorpExternalDirResponse.h>
#include <huaweicloud/meeting/v1/model/SearchCorpRequest.h>
#include <huaweicloud/meeting/v1/model/SearchCorpResourcesRequest.h>
#include <huaweicloud/meeting/v1/model/SearchCorpResourcesResponse.h>
#include <huaweicloud/meeting/v1/model/SearchCorpResponse.h>
#include <huaweicloud/meeting/v1/model/SearchCorpVmrRequest.h>
#include <huaweicloud/meeting/v1/model/SearchCorpVmrResponse.h>
#include <huaweicloud/meeting/v1/model/SearchCtlRecordsOfHisMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/SearchCtlRecordsOfHisMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/SearchDepartmentByNameRequest.h>
#include <huaweicloud/meeting/v1/model/SearchDepartmentByNameResponse.h>
#include <huaweicloud/meeting/v1/model/SearchDevicesRequest.h>
#include <huaweicloud/meeting/v1/model/SearchDevicesResponse.h>
#include <huaweicloud/meeting/v1/model/SearchHisMeetingsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchHisMeetingsResponse.h>
#include <huaweicloud/meeting/v1/model/SearchMaterialsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchMaterialsResponse.h>
#include <huaweicloud/meeting/v1/model/SearchMeetingFileListRequest.h>
#include <huaweicloud/meeting/v1/model/SearchMeetingFileListResponse.h>
#include <huaweicloud/meeting/v1/model/SearchMeetingsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchMeetingsResponse.h>
#include <huaweicloud/meeting/v1/model/SearchMemberVmrRequest.h>
#include <huaweicloud/meeting/v1/model/SearchMemberVmrResponse.h>
#include <huaweicloud/meeting/v1/model/SearchOnlineMeetingsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchOnlineMeetingsResponse.h>
#include <huaweicloud/meeting/v1/model/SearchProgramsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchProgramsResponse.h>
#include <huaweicloud/meeting/v1/model/SearchPublicationsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchPublicationsResponse.h>
#include <huaweicloud/meeting/v1/model/SearchRecordingsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchRecordingsResponse.h>
#include <huaweicloud/meeting/v1/model/SearchResourceOpRecordRequest.h>
#include <huaweicloud/meeting/v1/model/SearchResourceOpRecordResponse.h>
#include <huaweicloud/meeting/v1/model/SearchResourceRequest.h>
#include <huaweicloud/meeting/v1/model/SearchResourceResponse.h>
#include <huaweicloud/meeting/v1/model/SearchUsersRequest.h>
#include <huaweicloud/meeting/v1/model/SearchUsersResponse.h>
#include <huaweicloud/meeting/v1/model/SearchVisionActiveCodeRequest.h>
#include <huaweicloud/meeting/v1/model/SearchVisionActiveCodeResponse.h>
#include <huaweicloud/meeting/v1/model/SendSlideVerifyCodeRequest.h>
#include <huaweicloud/meeting/v1/model/SendSlideVerifyCodeResponse.h>
#include <huaweicloud/meeting/v1/model/SendVeriCodeForChangePwdRequest.h>
#include <huaweicloud/meeting/v1/model/SendVeriCodeForChangePwdResponse.h>
#include <huaweicloud/meeting/v1/model/SendVeriCodeForUpdateUserInfoRequest.h>
#include <huaweicloud/meeting/v1/model/SendVeriCodeForUpdateUserInfoResponse.h>
#include <huaweicloud/meeting/v1/model/SetAttendeeLanChannelRequest.h>
#include <huaweicloud/meeting/v1/model/SetAttendeeLanChannelResponse.h>
#include <huaweicloud/meeting/v1/model/SetCohostRequest.h>
#include <huaweicloud/meeting/v1/model/SetCohostResponse.h>
#include <huaweicloud/meeting/v1/model/SetCustomMultiPictureRequest.h>
#include <huaweicloud/meeting/v1/model/SetCustomMultiPictureResponse.h>
#include <huaweicloud/meeting/v1/model/SetHostViewRequest.h>
#include <huaweicloud/meeting/v1/model/SetHostViewResponse.h>
#include <huaweicloud/meeting/v1/model/SetInterpreterGroupRequest.h>
#include <huaweicloud/meeting/v1/model/SetInterpreterGroupResponse.h>
#include <huaweicloud/meeting/v1/model/SetMmrLiveRequest.h>
#include <huaweicloud/meeting/v1/model/SetMmrLiveResponse.h>
#include <huaweicloud/meeting/v1/model/SetMmrRecordRequest.h>
#include <huaweicloud/meeting/v1/model/SetMmrRecordResponse.h>
#include <huaweicloud/meeting/v1/model/SetMultiPictureRequest.h>
#include <huaweicloud/meeting/v1/model/SetMultiPictureResponse.h>
#include <huaweicloud/meeting/v1/model/SetParticipantViewRequest.h>
#include <huaweicloud/meeting/v1/model/SetParticipantViewResponse.h>
#include <huaweicloud/meeting/v1/model/SetProfileImageRequest.h>
#include <huaweicloud/meeting/v1/model/SetProfileImageRequestBody.h>
#include <huaweicloud/meeting/v1/model/SetProfileImageResponse.h>
#include <huaweicloud/meeting/v1/model/SetRoleRequest.h>
#include <huaweicloud/meeting/v1/model/SetRoleResponse.h>
#include <huaweicloud/meeting/v1/model/SetSsoConfigRequest.h>
#include <huaweicloud/meeting/v1/model/SetSsoConfigResponse.h>
#include <huaweicloud/meeting/v1/model/SetUserProfileImageRequest.h>
#include <huaweicloud/meeting/v1/model/SetUserProfileImageRequestBody.h>
#include <huaweicloud/meeting/v1/model/SetUserProfileImageResponse.h>
#include <huaweicloud/meeting/v1/model/SetWebHookConfigRequest.h>
#include <huaweicloud/meeting/v1/model/SetWebHookConfigResponse.h>
#include <huaweicloud/meeting/v1/model/ShowConfOrgRequest.h>
#include <huaweicloud/meeting/v1/model/ShowConfOrgResponse.h>
#include <huaweicloud/meeting/v1/model/ShowCorpAdminRequest.h>
#include <huaweicloud/meeting/v1/model/ShowCorpAdminResponse.h>
#include <huaweicloud/meeting/v1/model/ShowCorpBasicInfoRequest.h>
#include <huaweicloud/meeting/v1/model/ShowCorpBasicInfoResponse.h>
#include <huaweicloud/meeting/v1/model/ShowCorpRequest.h>
#include <huaweicloud/meeting/v1/model/ShowCorpResourceRequest.h>
#include <huaweicloud/meeting/v1/model/ShowCorpResourceResponse.h>
#include <huaweicloud/meeting/v1/model/ShowCorpResponse.h>
#include <huaweicloud/meeting/v1/model/ShowDepartmentRequest.h>
#include <huaweicloud/meeting/v1/model/ShowDepartmentResponse.h>
#include <huaweicloud/meeting/v1/model/ShowDeptAndChildDeptRequest.h>
#include <huaweicloud/meeting/v1/model/ShowDeptAndChildDeptResponse.h>
#include <huaweicloud/meeting/v1/model/ShowDeviceDetailRequest.h>
#include <huaweicloud/meeting/v1/model/ShowDeviceDetailResponse.h>
#include <huaweicloud/meeting/v1/model/ShowDeviceStatusRequest.h>
#include <huaweicloud/meeting/v1/model/ShowDeviceStatusResponse.h>
#include <huaweicloud/meeting/v1/model/ShowDeviceTypesRequest.h>
#include <huaweicloud/meeting/v1/model/ShowDeviceTypesResponse.h>
#include <huaweicloud/meeting/v1/model/ShowHisMeetingDetailRequest.h>
#include <huaweicloud/meeting/v1/model/ShowHisMeetingDetailResponse.h>
#include <huaweicloud/meeting/v1/model/ShowLayoutRequest.h>
#include <huaweicloud/meeting/v1/model/ShowLayoutResponse.h>
#include <huaweicloud/meeting/v1/model/ShowMeetingDetailRequest.h>
#include <huaweicloud/meeting/v1/model/ShowMeetingDetailResponse.h>
#include <huaweicloud/meeting/v1/model/ShowMeetingFileListRequest.h>
#include <huaweicloud/meeting/v1/model/ShowMeetingFileListResponse.h>
#include <huaweicloud/meeting/v1/model/ShowMeetingFileRequest.h>
#include <huaweicloud/meeting/v1/model/ShowMeetingFileResponse.h>
#include <huaweicloud/meeting/v1/model/ShowMgmtSiteStatusRequest.h>
#include <huaweicloud/meeting/v1/model/ShowMgmtSiteStatusResponse.h>
#include <huaweicloud/meeting/v1/model/ShowMyInfoRequest.h>
#include <huaweicloud/meeting/v1/model/ShowMyInfoResponse.h>
#include <huaweicloud/meeting/v1/model/ShowOnlineMeetingDetailRequest.h>
#include <huaweicloud/meeting/v1/model/ShowOnlineMeetingDetailResponse.h>
#include <huaweicloud/meeting/v1/model/ShowOrgResRequest.h>
#include <huaweicloud/meeting/v1/model/ShowOrgResResponse.h>
#include <huaweicloud/meeting/v1/model/ShowProgramRequest.h>
#include <huaweicloud/meeting/v1/model/ShowProgramResponse.h>
#include <huaweicloud/meeting/v1/model/ShowPublicationRequest.h>
#include <huaweicloud/meeting/v1/model/ShowPublicationResponse.h>
#include <huaweicloud/meeting/v1/model/ShowRealTimeInfoOfMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/ShowRealTimeInfoOfMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/ShowRecordInfoRequest.h>
#include <huaweicloud/meeting/v1/model/ShowRecordInfoResponse.h>
#include <huaweicloud/meeting/v1/model/ShowRecordingDetailRequest.h>
#include <huaweicloud/meeting/v1/model/ShowRecordingDetailResponse.h>
#include <huaweicloud/meeting/v1/model/ShowRecordingFileDownloadUrlsRequest.h>
#include <huaweicloud/meeting/v1/model/ShowRecordingFileDownloadUrlsResponse.h>
#include <huaweicloud/meeting/v1/model/ShowRegionInfoOfMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/ShowRegionInfoOfMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/ShowRoomSettingRequest.h>
#include <huaweicloud/meeting/v1/model/ShowRoomSettingResponse.h>
#include <huaweicloud/meeting/v1/model/ShowSpResRequest.h>
#include <huaweicloud/meeting/v1/model/ShowSpResResponse.h>
#include <huaweicloud/meeting/v1/model/ShowSpResourceRequest.h>
#include <huaweicloud/meeting/v1/model/ShowSpResourceResponse.h>
#include <huaweicloud/meeting/v1/model/ShowSsoConfigRequest.h>
#include <huaweicloud/meeting/v1/model/ShowSsoConfigResponse.h>
#include <huaweicloud/meeting/v1/model/ShowUserDetailRequest.h>
#include <huaweicloud/meeting/v1/model/ShowUserDetailResponse.h>
#include <huaweicloud/meeting/v1/model/ShowUserRequestDTO.h>
#include <huaweicloud/meeting/v1/model/ShowWebHookConfigRequest.h>
#include <huaweicloud/meeting/v1/model/ShowWebHookConfigResponse.h>
#include <huaweicloud/meeting/v1/model/ShowWebinarRequest.h>
#include <huaweicloud/meeting/v1/model/ShowWebinarResponse.h>
#include <huaweicloud/meeting/v1/model/SlideVerifyCodeCheckDTO.h>
#include <huaweicloud/meeting/v1/model/SlideVerifyCodeSendDTO.h>
#include <huaweicloud/meeting/v1/model/StartMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/StartMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/StartRequest.h>
#include <huaweicloud/meeting/v1/model/StopMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/StopMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/SwitchModeRequest.h>
#include <huaweicloud/meeting/v1/model/SwitchModeResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateAppIdRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateAppIdRequestBody.h>
#include <huaweicloud/meeting/v1/model/UpdateAppIdResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateContactRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateContactResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateCorpBasicInfoRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateCorpBasicInfoResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateCorpRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateCorpResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateDepartmentRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateDepartmentResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateDeviceRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateDeviceResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateMaterialRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateMaterialRequestDTO.h>
#include <huaweicloud/meeting/v1/model/UpdateMaterialResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateMemberVmrRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateMemberVmrResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateMyInfoRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateMyInfoResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateProgramRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateProgramRequestDTO.h>
#include <huaweicloud/meeting/v1/model/UpdateProgramResponse.h>
#include <huaweicloud/meeting/v1/model/UpdatePublicationRequest.h>
#include <huaweicloud/meeting/v1/model/UpdatePublicationRequestDTO.h>
#include <huaweicloud/meeting/v1/model/UpdatePublicationResponse.h>
#include <huaweicloud/meeting/v1/model/UpdatePwdRequest.h>
#include <huaweicloud/meeting/v1/model/UpdatePwdResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateRecurringMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateRecurringMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateRecurringSubMeetingRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateRecurringSubMeetingResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateResourceRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateResourceResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateRoomSettingRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateRoomSettingResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateStartedConfConfigRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateStartedConfConfigResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateStartedConfigReqBody.h>
#include <huaweicloud/meeting/v1/model/UpdateTokenRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateTokenResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateUserRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateUserResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateWebHookConfigStatusRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateWebHookConfigStatusResponse.h>
#include <huaweicloud/meeting/v1/model/UpdateWebinarRequest.h>
#include <huaweicloud/meeting/v1/model/UpdateWebinarResponse.h>
#include <huaweicloud/meeting/v1/model/UploadFileRequest.h>
#include <huaweicloud/meeting/v1/model/UploadFileRequestBody.h>
#include <huaweicloud/meeting/v1/model/UploadFileResponse.h>
#include <huaweicloud/meeting/v1/model/UserDTO.h>
#include <huaweicloud/meeting/v1/model/UserStatusDTO.h>
#include <huaweicloud/meeting/v1/model/ValidateTokenReqDTO.h>
#include <huaweicloud/meeting/v1/model/VerificationCodeDTO.h>
#include <huaweicloud/meeting/v1/model/VerifyCodeCheckDTO.h>
#include <huaweicloud/meeting/v1/model/VerifyCodeSendDTOV1.h>
#include <huaweicloud/meeting/v1/model/VisionActiveCodeDTO.h>
#include <huaweicloud/meeting/v1/model/WebHookConfigRequest.h>
#include <map>
#include <string>
#include <vector>

#include <huaweicloud/meeting/v1/model/SearchQosHistoryMeetingsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchQosHistoryMeetingsResponse.h>
#include <huaweicloud/meeting/v1/model/SearchQosOnlineMeetingsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchQosOnlineMeetingsResponse.h>
#include <huaweicloud/meeting/v1/model/SearchQosParticipantDetailRequest.h>
#include <huaweicloud/meeting/v1/model/SearchQosParticipantDetailResponse.h>
#include <huaweicloud/meeting/v1/model/SearchQosParticipantsRequest.h>
#include <huaweicloud/meeting/v1/model/SearchQosParticipantsResponse.h>
#include <huaweicloud/meeting/v1/model/SetQosThresholdReq.h>
#include <huaweicloud/meeting/v1/model/SetQosThresholdRequest.h>
#include <huaweicloud/meeting/v1/model/SetQosThresholdResponse.h>
#include <huaweicloud/meeting/v1/model/ShowQosThresholdRequest.h>
#include <huaweicloud/meeting/v1/model/ShowQosThresholdResponse.h>
#include <string>

#include <huaweicloud/meeting/v1/model/SearchStatisticConferenceInfoRequest.h>
#include <huaweicloud/meeting/v1/model/SearchStatisticConferenceInfoResponse.h>
#include <huaweicloud/meeting/v1/model/SearchStatisticConferenceParticipantRequest.h>
#include <huaweicloud/meeting/v1/model/SearchStatisticConferenceParticipantResponse.h>
#include <huaweicloud/meeting/v1/model/SearchStatisticResourceInfoRequest.h>
#include <huaweicloud/meeting/v1/model/SearchStatisticResourceInfoResponse.h>
#include <huaweicloud/meeting/v1/model/SearchStatisticUserInfoRequest.h>
#include <huaweicloud/meeting/v1/model/SearchStatisticUserInfoResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Meeting::V1::Model;

class HUAWEICLOUD_MEETING_V1_EXPORT  MeetingClient : public Client
{
public:

    MeetingClient();

    virtual ~MeetingClient();

    static ClientBuilder<MeetingClient> newBuilder();

    // 添加企业应用
    //
    // 企业默认管理员添加应用，添加应用后，记录返回信息，后续可通过[[执行App ID鉴权](https://support.huaweicloud.com/api-meeting/meeting_21_0311.html)](tag:hws) [[执行App ID鉴权](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0311.html)](tag:hk)获取accessToken
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddAppIdResponse> addAppId(
        AddAppIdRequest &request
    );
    // SP管理员创建企业
    //
    // 创建企业，默认管理员及分配资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddCorpResponse> addCorp(
        AddCorpRequest &request
    );
    // 添加企业管理员
    //
    // 企业默认管理员添加企业普通管理员。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddCorpAdminResponse> addCorpAdmin(
        AddCorpAdminRequest &request
    );
    // 添加部门
    //
    // 企业管理员通过该接口添加部门，最多支持10级部门，每级子部门最多支持100个，默认企业最大部门数量为10000个。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddDepartmentResponse> addDepartment(
        AddDepartmentRequest &request
    );
    // 增加终端
    //
    // 企业管理员通过该接口添加专业会议终端。专业会议终端包括DP300/HUAWEI Bar系列/HUAWEI Board/TE系列。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddDeviceResponse> addDevice(
        AddDeviceRequest &request
    );
    // 新增信息窗素材
    //
    // 新增信息窗素材（上传素材文件）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddMaterialResponse> addMaterial(
        AddMaterialRequest &request
    );
    // 新增信息窗节目
    //
    // 新增信息窗节目。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddProgramResponse> addProgram(
        AddProgramRequest &request
    );
    // 新增信息窗发布
    //
    // 新增信息窗发布。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddPublicationResponse> addPublication(
        AddPublicationRequest &request
    );
    // SP管理员分配企业资源
    //
    // 企业新增资源发放。该接口同时支持修改，带resourceId后会判断该资源是否存在，存在即修改（支持修改的参数见修改接口），否则按新增处理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddResourceResponse> addResource(
        AddResourceRequest &request
    );
    // 保存会议纪要到个人云空间
    //
    // 用户使用手机扫码后,手机端请求服务端将当前会议纪要文件保存到个人云空间。二维码内容 ：cloudlink://cloudlink.huawei.com/h5page?action&#x3D;SAVE_MEETING_FILE&amp;key1&#x3D;value1&amp;key2&#x3D;value2 。key/value的个数可能变化，终端解析后，在发起后续请求时，将所有key/value存为map，作为入参即可。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddToPersonalSpaceResponse> addToPersonalSpace(
        AddToPersonalSpaceRequest &request
    );
    // 添加用户
    //
    // 企业管理员通过该接口添加企业用户。
    // &gt; 默认添加用户后，用户第一次登录华为云会议App或者Portal时需要修改密码。若需关闭第一次登录修改密码，请联系华为销售人员，并提供华为云会议企业ID。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddUserResponse> addUser(
        AddUserRequest &request
    );
    // 主持人允许观众入会
    //
    // 主持人通过接口控制是否允许观众入会。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AllowAudienceJoinResponse> allowAudienceJoin(
        AllowAudienceJoinRequest &request
    );
    // 允许客户端录制
    //
    // 该接口用于设置允许/禁止与会者客户端本地录制（非云端录制）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AllowClientRecordResponse> allowClientRecord(
        AllowClientRecordRequest &request
    );
    // 与会者自己解除静音
    //
    // 该接口用于设置与会者是否可以自己解除静音。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AllowGuestUnmuteResponse> allowGuestUnmute(
        AllowGuestUnmuteRequest &request
    );
    // 准入等候者
    //
    // 该接口用于允许等候室中的成员进入会议。可以允许全部成员进入会议，或者允许指定成员进入会议。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AllowWaitingParticipantResponse> allowWaitingParticipant(
        AllowWaitingParticipantRequest &request
    );
    // 分配云会议室
    //
    // 企业管理员通过该接口将云会议室分配给用户、专业会议终端（TE10、TE20、HUAWEI Board、HUAWEI Bar 500及HUAWEI Box系列）、智慧屏TV、电子白板（SmartRooms）、IdeaHub。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateVmrResponse> associateVmr(
        AssociateVmrRequest &request
    );
    // 批量删除企业管理员
    //
    // 通过该接口批量删除企业管理员。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteCorpAdminsResponse> batchDeleteCorpAdmins(
        BatchDeleteCorpAdminsRequest &request
    );
    // 批量删除终端
    //
    // 企业管理员通过该接口批量删除专业会议终端，返回删除失败的列表。
    // &gt; 如果需要删除Ideahub、SmartRooms、智慧屏TV请使用[[批量删除用户](https://support.huaweicloud.com/api-meeting/meeting_21_0070.html)](tag:hws)[[批量删除用户](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0070.html)](tag:hk)接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteDevicesResponse> batchDeleteDevices(
        BatchDeleteDevicesRequest &request
    );
    // 删除信息窗素材
    //
    // 删除信息窗素材。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteMaterialsResponse> batchDeleteMaterials(
        BatchDeleteMaterialsRequest &request
    );
    // 删除信息窗节目
    //
    // 删除信息窗节目。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteProgramsResponse> batchDeletePrograms(
        BatchDeleteProgramsRequest &request
    );
    // 删除信息窗发布
    //
    // 删除信息窗发布。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeletePublicationsResponse> batchDeletePublications(
        BatchDeletePublicationsRequest &request
    );
    // 批量删除用户
    //
    // 企业管理员通过该接口批量删除企业用户。删除多个用户时，全部删除成功或者全部删除失败。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteUsersResponse> batchDeleteUsers(
        BatchDeleteUsersRequest &request
    );
    // 批量举手
    //
    // 该接口用于批量设置来宾的举手/放下举手状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchHandResponse> batchHand(
        BatchHandRequest &request
    );
    // 批量移入等候室
    //
    // 主持人通过该接口批量移动用户到等候室。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchMoveToWaitingRoomResponse> batchMoveToWaitingRoom(
        BatchMoveToWaitingRoomRequest &request
    );
    // 分页查询企业应用
    //
    // 企业默认管理员分页查询企业应用
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchSearchAppIdResponse> batchSearchAppId(
        BatchSearchAppIdRequest &request
    );
    // 批量查询用户详情
    //
    // 批量查询用户详情，支持指定第三方账号查询详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchShowUserDetailsResponse> batchShowUserDetails(
        BatchShowUserDetailsRequest &request
    );
    // 批量修改终端状态
    //
    // 企业管理员通过该接口批量修改专业会议终端状态。当硬终端资源到期后，若企业内对应资源的硬终端超过数量后会被系统随机自动停用，此时可通过该接口修改专业会议终端的状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateDevicesStatusResponse> batchUpdateDevicesStatus(
        BatchUpdateDevicesStatusRequest &request
    );
    // 批量修改用户状态
    //
    // 企业管理员通过该接口批量修改用户状态，当用户帐号数资源或者电子白板（SmartRooms）资源到期后，若企业内对应资源的用户帐号超过数量后会被系统随机自动停用，此时可通过该接口修改用户的状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateUserStatusResponse> batchUpdateUserStatus(
        BatchUpdateUserStatusRequest &request
    );
    // 广播会场
    //
    // 该接口用于广播指定的与会者。同一时间，只允许一个与会者被广播。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BroadcastParticipantResponse> broadcastParticipant(
        BroadcastParticipantRequest &request
    );
    // 取消广播
    //
    // 该接口用于取消广播，包括：取消广播多画面，取消广播会场，取消点名会场。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelBroadcastResponse> cancelBroadcast(
        CancelBroadcastRequest &request
    );
    // 取消预约会议
    //
    // 该接口用于取消预约的会议。企业管理员可以取消本企业下用户创建的会议，普通用户只能取消自己创建的会议。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelMeetingResponse> cancelMeeting(
        CancelMeetingRequest &request
    );
    // 取消周期性会议
    //
    // 该接口用于取消周期性会议。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelRecurringMeetingResponse> cancelRecurringMeeting(
        CancelRecurringMeetingRequest &request
    );
    // 取消周期性会议的子会议
    //
    // 该接口用于取消周期性会议的子会议。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelRecurringSubMeetingResponse> cancelRecurringSubMeeting(
        CancelRecurringSubMeetingRequest &request
    );
    // 根据号码，查询是否在会议中
    //
    // 通过该接口查询号码，是否在会议中
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckCallNumberInConfResponse> checkCallNumberInConf(
        CheckCallNumberInConfRequest &request
    );
    // 校验滑块验证码
    //
    // 该接口提供校验滑块验证码。服务器收到请求，返回校验结果。用户在前台界面通过滑块操作匹配图形，使得抠图和原图吻合。然后服务器进行校验滑块验证码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckSlideVerifyCodeResponse> checkSlideVerifyCode(
        CheckSlideVerifyCodeRequest &request
    );
    // 校验Token
    //
    // 该接口提供校验token合法性功能。服务器收到请求后，验证token合法性并返回结果。如果参数needGenNewToken为true时，生成新的token并返回。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckTokenResponse> checkToken(
        CheckTokenRequest &request
    );
    // 校验手机和邮箱对应的验证码
    //
    // 企业用户通过该接口校验手机和邮箱对应的验证码，一分钟内记录尝试次数不得超过5次。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckVeriCodeForUpdateUserInfoResponse> checkVeriCodeForUpdateUserInfo(
        CheckVeriCodeForUpdateUserInfoRequest &request
    );
    // 校验验证码
    //
    // 该接口提供校验验证码，服务器收到请求，返回结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckVerifyCodeResponse> checkVerifyCode(
        CheckVerifyCodeRequest &request
    );
    // 匿名用户会议鉴权
    //
    // 该接口用于匿名用户入会鉴权。请求根据会议ID和密码鉴权，返回鉴权随机数（可以根据该随机数获取匿名用户信息、会议信息等）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAnonymousAuthRandomResponse> createAnonymousAuthRandom(
        CreateAnonymousAuthRandomRequest &request
    );
    // 获取会议鉴权随机数
    //
    // 根据会议ID + 密码鉴权返回鉴权随机数，如果是小程序调用时，需要企业支持小程序功能
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAuthRandomResponse> createAuthRandom(
        CreateAuthRandomRequest &request
    );
    // 获取会控Token
    //
    // 该接口用于获取正在召开会议的会控Token（未开始的会议调用该接口返回失败）。Token有效期是半个小时。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateConfTokenResponse> createConfToken(
        CreateConfTokenRequest &request
    );
    // 创建会议
    //
    // 该接口用于创建立即会议和预约会议。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMeetingResponse> createMeeting(
        CreateMeetingRequest &request
    );
    // 获取页面免登陆跳转的nonce信息
    //
    // 通过Access Token生成页面免登陆跳转到华为云会议的Portal的nonce信息。获取到nonce信息后，通过链接https://meeting.huaweicloud.com/?lang&#x3D;zh-CN&amp;nonce&#x3D;xxxxxxxxxxxxx#/login进行免登陆跳转。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePortalRefNonceResponse> createPortalRefNonce(
        CreatePortalRefNonceRequest &request
    );
    // 创建周期性会议
    //
    // 该接口用于预约周期性会议。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRecurringMeetingResponse> createRecurringMeeting(
        CreateRecurringMeetingRequest &request
    );
    // 企业管理员生成激活码
    //
    // 企业管理员生成智慧屏、电子白板（SmartRooms）、Ideahub的激活码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVisionActiveCodeResponse> createVisionActiveCode(
        CreateVisionActiveCodeRequest &request
    );
    // 获取websocket建链Token
    //
    // 该接口用于获取会控WebSocket建链的临时Token。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWebSocketTokenResponse> createWebSocketToken(
        CreateWebSocketTokenRequest &request
    );
    // 预约网络研讨会
    //
    // 该接口用于创建网络研讨会。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWebinarResponse> createWebinar(
        CreateWebinarRequest &request
    );
    // 删除企业应用
    //
    // 企业管理员删除企业应用
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAppIdResponse> deleteAppId(
        DeleteAppIdRequest &request
    );
    // 删除与会者
    //
    // 该接口用于删除与会者。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAttendeesResponse> deleteAttendees(
        DeleteAttendeesRequest &request
    );
    // SP管理员删除企业
    //
    // 删除企业。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCorpResponse> deleteCorp(
        DeleteCorpRequest &request
    );
    // 删除云会议室
    //
    // 企业管理员通过该接口删除企业的云会议室。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCorpVmrResponse> deleteCorpVmr(
        DeleteCorpVmrRequest &request
    );
    // 删除部门
    //
    // 企业管理员通过该接口删除部门。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDepartmentResponse> deleteDepartment(
        DeleteDepartmentRequest &request
    );
    // 删除多画面布局
    //
    // 该接口用于删除当前会议已保存的多画面布局。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLayoutResponse> deleteLayout(
        DeleteLayoutRequest &request
    );
    // 批量删除录制
    //
    // 该接口用于批量删除会议的录制。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRecordingsResponse> deleteRecordings(
        DeleteRecordingsRequest &request
    );
    // SP管理员根据删除企业资源
    //
    // 企业删除资源项，删除资源项后，企业资源总数会自动减少。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteResourceResponse> deleteResource(
        DeleteResourceRequest &request
    );
    // 注销登录
    //
    // 该接口提供注销功能。服务器收到请求后，删除该Token。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTokenResponse> deleteToken(
        DeleteTokenRequest &request
    );
    // 企业管理员删除激活码
    //
    // 企业管理员批量删除激活码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVisionActiveCodeResponse> deleteVisionActiveCode(
        DeleteVisionActiveCodeRequest &request
    );
    // 删除事件推送
    //
    // 该接口用于管理员删除已配置的事件推送设置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWebHookConfigResponse> deleteWebHookConfig(
        DeleteWebHookConfigRequest &request
    );
    // 取消网络研讨会
    //
    // 该接口用于取消已预约的网络研讨会。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWebinarResponse> deleteWebinar(
        DeleteWebinarRequest &request
    );
    // 回收云会议室
    //
    // 企业管理员通过该接口回收云会议室。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateVmrResponse> disassociateVmr(
        DisassociateVmrRequest &request
    );
    // 举手
    //
    // 该接口用于设置指定与会者的举手/放下举手状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<HandResponse> hand(
        HandRequest &request
    );
    // 挂断与会者
    //
    // 该接口用于挂断正在通话中的与会者。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<HangUpResponse> hangUp(
        HangUpRequest &request
    );
    // 主持人邀请与会者开启/关闭摄像头
    //
    // 该接口用于邀请指定与会者开启、关闭摄像头。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<InviteOperateVideoResponse> inviteOperateVideo(
        InviteOperateVideoRequest &request
    );
    // 邀请与会者
    //
    // 该接口用于邀请与会者加入会议。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<InviteParticipantResponse> inviteParticipant(
        InviteParticipantRequest &request
    );
    // 邀请共享
    //
    // 该接口用于邀请/取消邀请指定与会人共享桌面。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<InviteShareResponse> inviteShare(
        InviteShareRequest &request
    );
    // 邀请用户
    //
    // 通过手机号码或者邮箱地址邀请用户加入企业。
    // * 若被邀请用户在华为云会议系统中不存在，则：
    //   - 华为云会议免费版和华为云会议标准版发送短信/邮件邀请用户完成注册后加入企业。用户注册成功后，加入该企业。
    //   - 华为云会议旗舰版在企业内直接添加该用户。用户会收到华为云会议的初始密码，用户第一次以手机号或者邮箱登录时，需要修改密码。
    // * 若被邀请用户在华为云会议系统中存在，则该用户会收到短信或者邮件确认。确认完成后改用户加入企业内。该用户的密码保持原来的密码不变。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<InviteUserResponse> inviteUser(
        InviteUserRequest &request
    );
    // 通过会议ID和密码邀请与会者
    //
    // 该接口用于通过会议ID和密码邀请与会者。一般用于App已知会议ID和来宾密码，通过扫码等方式获取其他终端的SIP号码后，使用该接口将其他终端邀请加入会议中。
    // &gt; 需要管理员在企业的“会议设置”&gt;“来宾扫码邀请任意硬终端入会”设置成打开，才允许通过来宾密码邀请其他终端入会。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<InviteWithPwdResponse> inviteWithPwd(
        InviteWithPwdRequest &request
    );
    // 查询历史召开的网络研讨会列表
    //
    // 该接口用于查询历史网络研讨会。管理员可查询企业内历史网络研讨会，非管理员可查询个人历史网络研讨会。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHistoryWebinarsResponse> listHistoryWebinars(
        ListHistoryWebinarsRequest &request
    );
    // 查询会场网络质量
    //
    // 查询会场网络质量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNetworkQualityResponse> listNetworkQuality(
        ListNetworkQualityRequest &request
    );
    // 查询正在召开的网络研讨会列表
    //
    // 该接口用于查询正在召开的网络研讨会。管理员可查询企业内正在召开网络研讨会，非管理员可查询自己预订的正在召开的网络研讨会。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOngoingWebinarsResponse> listOngoingWebinars(
        ListOngoingWebinarsRequest &request
    );
    // 查询指定会议的在线与会者信息
    //
    // 该接口用于查询指定会议的在线与会者信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOnlineConfAttendeeResponse> listOnlineConfAttendee(
        ListOnlineConfAttendeeRequest &request
    );
    // 查询即将召开的网络研讨会列表
    //
    // 该接口用于查询即将召开的网络研讨会。管理员可查询企业内即将召开网络研讨会，非管理员可查询自己预订的即将召开的网络研讨会。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUpComingWebinarsResponse> listUpComingWebinars(
        ListUpComingWebinarsRequest &request
    );
    // 启停会议直播
    //
    // 该接口用于启动或停止会议直播。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<LiveResponse> live(
        LiveRequest &request
    );
    // 锁定会议
    //
    // 该接口用于锁定或解锁会议。锁定会议后，不允许新的来宾主动加入会议。会议锁定后使用主持人密码/主持人链接加入会议或者主持人邀请来宾不受影响。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<LockMeetingResponse> lockMeeting(
        LockMeetingRequest &request
    );
    // 锁定会场视频源
    //
    // 该接口用于锁定或者解锁某在线会场的视频源。只适用于专业会议终端（如TE系列等）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<LockViewResponse> lockView(
        LockViewRequest &request
    );
    // 移入等候室
    //
    // 该接口用于将会中的指定与会者移入到等候室。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MoveToWaitingRoomResponse> moveToWaitingRoom(
        MoveToWaitingRoomRequest &request
    );
    // 全场静音
    //
    // 该接口用于设置整个会议所有与会者（主持人除外）的静音/取消静音状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MuteMeetingResponse> muteMeeting(
        MuteMeetingRequest &request
    );
    // 静音与会者
    //
    // 该接口用于设置指定与会者静音/取消静音状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MuteParticipantResponse> muteParticipant(
        MuteParticipantRequest &request
    );
    // 主持人暂停/取消暂停会议
    //
    // 主持人通过接口控制暂停/取消暂停。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PauseConferenceResponse> pauseConference(
        PauseConferenceRequest &request
    );
    // 延长会议
    //
    // 该接口用于延长会议时间。默认会议自动延长。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ProlongMeetingResponse> prolongMeeting(
        ProlongMeetingRequest &request
    );
    // 启停会议录制
    //
    // 该接口用于启动或停止会议云录制。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecordResponse> record(
        RecordRequest &request
    );
    // 重命名与会者
    //
    // 重命名某个与会者。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RenameParticipantResponse> renameParticipant(
        RenameParticipantRequest &request
    );
    // 企业管理员通过sn重置激活码
    //
    // 当硬终端激活码失效时，企业管理员可以通过该接口重置激活码，使用重新获取的激活码激活终端，每24小时可重新激活5次。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetActivecodeResponse> resetActivecode(
        ResetActivecodeRequest &request
    );
    // 重置企业应用appkey
    //
    // 企业默认管理员重置企业应用appkey
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetAppKeyResponse> resetAppKey(
        ResetAppKeyRequest &request
    );
    // 用户重置密码
    //
    // 该接口提供给用户重置密码功能，服务器收到请求，重新设置用户密码并返回结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetPwdResponse> resetPwd(
        ResetPwdRequest &request
    );
    // 企业管理员重置企业成员密码
    //
    // 企业管理员通过该接口提供企业管理员重置企业成员密码的功能。当服务器收到重置密码的请求时，发送新的密码到企业成员的邮箱或者短信，并返回结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetPwdByAdminResponse> resetPwdByAdmin(
        ResetPwdByAdminRequest &request
    );
    // 企业管理员重置帐号的激活码
    //
    // 企业管理员重置帐号的激活码，重置后，原设备直接解绑，必须重新激活使用,若手机邮箱不填，则不会发送新的激活码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetVisionActiveCodeResponse> resetVisionActiveCode(
        ResetVisionActiveCodeRequest &request
    );
    // 开启/关闭同声传译
    //
    // 该接口用于会议主席可以通过该接口开启/关闭同声传译。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResumeSimultaneousInterpretationResponse> resumeSimultaneousInterpretation(
        ResumeSimultaneousInterpretationRequest &request
    );
    // 点名会场
    //
    // 该接口用于点名指定与会者。点名会场的效果是除了主持人外，点名与会者为非静音状态，未点名的与会者统一为静音状态。同一时间，只允许一个与会者被点名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RollcallParticipantResponse> rollcallParticipant(
        RollcallParticipantRequest &request
    );
    // 保存多画面布局
    //
    // 该接口用于保存多画面布局。保存的多画面布局，只能在当前会议使用，会议结束后，保存的多画面布局就会释放。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SaveLayoutResponse> saveLayout(
        SaveLayoutRequest &request
    );
    // 查询历史会议的与会者记录
    //
    // 该接口用于查询指定历史会议的与会者记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchAttendanceRecordsOfHisMeetingResponse> searchAttendanceRecordsOfHisMeeting(
        SearchAttendanceRecordsOfHisMeetingRequest &request
    );
    // SP管理员分页搜索企业
    //
    // SP管理员分页搜索企业。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchCorpResponse> searchCorp(
        SearchCorpRequest &request
    );
    // 分页查询企业管理员
    //
    // 通过该接口分页查询企业管理员。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchCorpAdminsResponse> searchCorpAdmins(
        SearchCorpAdminsRequest &request
    );
    // 查询企业通讯录
    //
    // 企业用户（含管理员）通过该接口查询该企业的通讯录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchCorpDirResponse> searchCorpDir(
        SearchCorpDirRequest &request
    );
    // 查询企业外部联系人
    //
    // 企业用户（含管理员）通过该接口查询该企业的外部联系人或者个人外部联系人。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchCorpExternalDirResponse> searchCorpExternalDir(
        SearchCorpExternalDirRequest &request
    );
    // 企业管理员分页查询企业资源订单列表
    //
    // 企业管理员根据条件查询企业资源订单列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchCorpResourcesResponse> searchCorpResources(
        SearchCorpResourcesRequest &request
    );
    // 企业管理员分页查询企业云会议室
    //
    // 企业管理员通过该接口分页查询企业的云会议室。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchCorpVmrResponse> searchCorpVmr(
        SearchCorpVmrRequest &request
    );
    // 查询历史会议的会控记录
    //
    // 该接口用于查询指定历史会议的会控记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchCtlRecordsOfHisMeetingResponse> searchCtlRecordsOfHisMeeting(
        SearchCtlRecordsOfHisMeetingRequest &request
    );
    // 按名称查询所有的部门
    //
    // 企业管理员通过该接口按名称查询所有的部门。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchDepartmentByNameResponse> searchDepartmentByName(
        SearchDepartmentByNameRequest &request
    );
    // 分页查询终端
    //
    // 企业管理员通过该接口分页查询专业会议终端信息。
    // &gt; 如果需要查询Ideahub、SmartRooms、智慧屏TV请使用[[分页查询用户](https://support.huaweicloud.com/api-meeting/meeting_21_0071.html)](tag:hws)[[分页查询用户](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0071.html)](tag:hk)接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchDevicesResponse> searchDevices(
        SearchDevicesRequest &request
    );
    // 查询历史会议列表
    //
    // 该接口用于查询已经结束的会议。管理员可以查询本企业内所有的历史会议，普通用户仅能查询自己创建或者被邀请的历史会议。不带查询参数时，默认查询权限范围内的历史会议。
    // &gt; * 普通用户如果只是通过会议ID或者会议链接接入会议，不是预定者会前邀请或者会中主持人邀请的，则历史会议中无法查到
    // &gt; * 如果同一个会议召开并结束多次，则会产生多条历史会议（会议ID相同，会议UUID不同）
    // &gt; * 历史会议记录默认保留6个月，最长保留12个月。保留时间管理员可在“会议设置”的“历史会议留存时间”中修改
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchHisMeetingsResponse> searchHisMeetings(
        SearchHisMeetingsRequest &request
    );
    // 分页查询信息窗素材
    //
    // 分页查询信息窗素材。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchMaterialsResponse> searchMaterials(
        SearchMaterialsRequest &request
    );
    // 查询会议纪要列表
    //
    // 用户查询自己的会议纪要列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchMeetingFileListResponse> searchMeetingFileList(
        SearchMeetingFileListRequest &request
    );
    // 查询会议列表
    //
    // 该接口用于查询尚未结束的会议。
    // * 管理员可以查询管理权限域内所有的会议，普通用户仅能查询自己创建或者需要参加的会议。不带查询参数时，默认查询权限范围内正在召开或还未召开的会议。
    // * 只能查询尚未结束的会议（既正在召开的会议和已预约还未召开的会议）。如果需要查询历史会议列表，请参考[[查询历史会议列表](https://support.huaweicloud.com/api-meeting/meeting_21_0051.html)](tag:hws)[[查询历史会议列表](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0051.html)](tag:hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchMeetingsResponse> searchMeetings(
        SearchMeetingsRequest &request
    );
    // 普通用户分页查询云会议室及个人会议ID
    //
    // 企业用户通过该接口查询个人已分配的云会议室及个人会议ID。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchMemberVmrResponse> searchMemberVmr(
        SearchMemberVmrRequest &request
    );
    // 查询在线会议列表
    //
    // 该接口用于查询正在召开的会议列表。管理员可以查询本企业内所有在线会议，普通用户仅能查询当前自己帐号创建或者需要参加的在线会议。不带查询参数时，默认查询权限范围内的在线会议，按开始时间升序排列。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchOnlineMeetingsResponse> searchOnlineMeetings(
        SearchOnlineMeetingsRequest &request
    );
    // 查询信息窗节目
    //
    // 获取信息窗节目。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchProgramsResponse> searchPrograms(
        SearchProgramsRequest &request
    );
    // 查询信息窗发布
    //
    // 获取信息窗发布。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchPublicationsResponse> searchPublications(
        SearchPublicationsRequest &request
    );
    // 查询录制列表
    //
    // 该接口用于查询会议录制列表。管理员可以查询本企业内所有的录制，普通用户仅能查询自己创建的会议的录制。不带查询参数时，默认查询权限范围内的录制。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchRecordingsResponse> searchRecordings(
        SearchRecordingsRequest &request
    );
    // SP管理员根据分页查询企业资源
    //
    // SP根据条件查询企业的资源项。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchResourceResponse> searchResource(
        SearchResourceRequest &request
    );
    // SP管理员分页查询企业资源操作记录
    //
    // SP根据根据条件查询企业的资源操作记录，支持根据resourceId模糊搜索。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchResourceOpRecordResponse> searchResourceOpRecord(
        SearchResourceOpRecordRequest &request
    );
    // 分页查询用户
    //
    // 企业管理员通过该接口分页查询企业用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchUsersResponse> searchUsers(
        SearchUsersRequest &request
    );
    // 企业管理员分页查询激活码
    //
    // 企业管理员分页查询激活码，支持激活码、终端名称模糊查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchVisionActiveCodeResponse> searchVisionActiveCode(
        SearchVisionActiveCodeRequest &request
    );
    // 发送滑块验证码
    //
    // 该接口提供发送滑块验证码。服务器收到请求，返回抠图以及抠图后的原图等结果。需要在前台界面显示出抠图以及抠图后的原图，用户通过滑块操作来匹配图形。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SendSlideVerifyCodeResponse> sendSlideVerifyCode(
        SendSlideVerifyCodeRequest &request
    );
    // 发送验证码
    //
    // 该接口提供发送验证码，服务器收到请求，发送验证码到邮箱或者短信并返回结果。用户在前台界面通过滑块验证后，再进行发送验证码操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SendVeriCodeForChangePwdResponse> sendVeriCodeForChangePwd(
        SendVeriCodeForChangePwdRequest &request
    );
    // 获取验证码
    //
    // 修改用户手机或邮箱时，需要获取验证码。企业用户通过该接口获取验证码，系统会向用户的手机或邮箱发送，验证码1分钟内有效。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SendVeriCodeForUpdateUserInfoResponse> sendVeriCodeForUpdateUserInfo(
        SendVeriCodeForUpdateUserInfoRequest &request
    );
    // 设置普通与会人的语言频道
    //
    // 主持人通过该接口设置某些普通与会者(包括主持人)加入哪个语言频道。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAttendeeLanChannelResponse> setAttendeeLanChannel(
        SetAttendeeLanChannelRequest &request
    );
    // 申请联席主持人
    //
    // 该接口用于设置联席主持人或释放联席主持人。只能将来宾设置为联席主持人。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetCohostResponse> setCohost(
        SetCohostRequest &request
    );
    // 设置自定义多画面
    //
    // 该接口用于设置会中多画面。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetCustomMultiPictureResponse> setCustomMultiPicture(
        SetCustomMultiPictureRequest &request
    );
    // 主持人选看
    //
    // 该接口用于主持人轮询、主持人选看多画面、主持人选看会场操作。只适用于专业会议终端（如TE系列等）为主持人的场景。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetHostViewResponse> setHostView(
        SetHostViewRequest &request
    );
    // 设置传译组
    //
    // 主持人通过该接口设置传译组，每个传译组支持两种语言，传译组内支持多个传译员。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetInterpreterGroupResponse> setInterpreterGroup(
        SetInterpreterGroupRequest &request
    );
    // 启动/停止Mmr会议直播
    //
    // 使用场景：会议主持人可以通过该接口启动/停止Mmr会议直播 功能描述：提供启动/停止会议Mmr直播的能力
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetMmrLiveResponse> setMmrLive(
        SetMmrLiveRequest &request
    );
    // 启动/暂停/停止mmr会议录制
    //
    // 使用场景：管理员或UC账号主席可以通过该接口启动/停止mmr会议录制 功能描述：提供启动/暂停/停止MMR会议录制的能力
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetMmrRecordResponse> setMmrRecord(
        SetMmrRecordRequest &request
    );
    // 设置多画面
    //
    // 设置会议多画面。该接口废弃不用，请使用“[[设置自定义多画面](https://support.huaweicloud.com/api-meeting/meeting_21_0418.html)](tag:hws)[[设置自定义多画面](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0418.html)](tag:hk)”接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetMultiPictureResponse> setMultiPicture(
        SetMultiPictureRequest &request
    );
    // 会场选看
    //
    // 该接口用于专业会议终端（如TE系列等）选看其他与会者。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetParticipantViewResponse> setParticipantView(
        SetParticipantViewRequest &request
    );
    // 用户设置头像
    //
    // 用户设置头像
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetProfileImageResponse> setProfileImage(
        SetProfileImageRequest &request
    );
    // 申请主持人
    //
    // 该接口用于设置主持人或释放主持人。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetRoleResponse> setRole(
        SetRoleRequest &request
    );
    // 设置SSO登录配置
    //
    // 该接口用于设置SSO登录的鉴权配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetSsoConfigResponse> setSsoConfig(
        SetSsoConfigRequest &request
    );
    // 企业管理员设置企业成员头像
    //
    // 为企业内的用户设置头像（只允许管理员调用）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetUserProfileImageResponse> setUserProfileImage(
        SetUserProfileImageRequest &request
    );
    // 设置事件推送
    //
    // 该接口用于管理员设置企业级会议事件订阅配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetWebHookConfigResponse> setWebHookConfig(
        SetWebHookConfigRequest &request
    );
    // SP管理员查询会议归属企业
    //
    // SP管理员根据会议ID查询该会议归属的企业ID。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowConfOrgResponse> showConfOrg(
        ShowConfOrgRequest &request
    );
    // SP管理员查询企业
    //
    // 获取企业。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCorpResponse> showCorp(
        ShowCorpRequest &request
    );
    // 查询企业管理员
    //
    // 通过该接口查询企业管理员。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCorpAdminResponse> showCorpAdmin(
        ShowCorpAdminRequest &request
    );
    // 企业管理员查询企业注册信息
    //
    // 企业管理员通过该接口查询企业注册信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCorpBasicInfoResponse> showCorpBasicInfo(
        ShowCorpBasicInfoRequest &request
    );
    // 企业管理员查询企业内资源及业务权限
    //
    // 企业管理员通过该接口查询企业内资源及业务权限，包括查询已使用的资源情况。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCorpResourceResponse> showCorpResource(
        ShowCorpResourceRequest &request
    );
    // 通过部门编码查询部门信息
    //
    // 通过部门编码查询部门信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDepartmentResponse> showDepartment(
        ShowDepartmentRequest &request
    );
    // 查询部门及其一级子部门列表
    //
    // 企业管理员通过该接口查询部门及其一级子部门列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeptAndChildDeptResponse> showDeptAndChildDept(
        ShowDeptAndChildDeptRequest &request
    );
    // 查询终端详情
    //
    // 企业管理员通过该接口查询专业会议终端详情。
    // &gt; 如果需要查询Ideahub、SmartRooms、智慧屏TV详情请使用[[查询用户详情](https://support.huaweicloud.com/api-meeting/meeting_21_0069.html)](tag:hws)[[查询用户详情](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0069.html)](tag:hk)接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceDetailResponse> showDeviceDetail(
        ShowDeviceDetailRequest &request
    );
    // 查询设备状态
    //
    // 调用本接口可以查询硬终端的状态。
    // 硬终端与发起查询请求的帐号需在同一企业下，否则会鉴权失败。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceStatusResponse> showDeviceStatus(
        ShowDeviceStatusRequest &request
    );
    // 获取所有终端类型
    //
    // 企业管理员通过该接口获取所有的专业会议终端类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceTypesResponse> showDeviceTypes(
        ShowDeviceTypesRequest &request
    );
    // 查询历史会议详情
    //
    // 该接口用户查询指定历史会议的详情。管理员可以查询本企业内所有的历史会议详情，普通用户仅能查询自己创建或者被邀请的历史会议详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHisMeetingDetailResponse> showHisMeetingDetail(
        ShowHisMeetingDetailRequest &request
    );
    // 查询多画面布局
    //
    // 该接口用于查询当前会议已保存的多画面布局。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLayoutResponse> showLayout(
        ShowLayoutRequest &request
    );
    // 查询会议详情
    //
    // 查询偏移量
    // * 管理员可以查询管理权限域内所有会议的详情，普通用户仅能查询自己创建或者需要参加的会议详情。
    // * 只能查询尚未结束的会议（既正在召开的会议和已预约还未召开的会议）。如果需要查询历史会议列详情，请参考[[查询历史会议详情](https://support.huaweicloud.com/api-meeting/meeting_21_0052.html)](tag:hws)[[查询历史会议详情](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0052.html)](tag:hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMeetingDetailResponse> showMeetingDetail(
        ShowMeetingDetailRequest &request
    );
    // 查询会议纪要详情
    //
    // 用户查询单个会议纪要详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMeetingFileResponse> showMeetingFile(
        ShowMeetingFileRequest &request
    );
    // 打开会议纪要文件列表
    //
    // 用户使用手机扫码后，手机端请求服务端,让服务端通知指定IdeaHub打开指定用户的会议纪要文件列表。二维码内容 ：cloudlink://cloudlink.huawei.com/h5page?action&#x3D;OPEN_MEETING_FILE_LIST&amp;key1&#x3D;value1&amp;key2&#x3D;value2 。key/value的个数可能变化，终端解析后，在发起后续请求时，将所有key/value存为map，作为入参即可。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMeetingFileListResponse> showMeetingFileList(
        ShowMeetingFileListRequest &request
    );
    // 查询会管状态
    //
    // 终端通过会控查询会管状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMgmtSiteStatusResponse> showMgmtSiteStatus(
        ShowMgmtSiteStatusRequest &request
    );
    // 用户查询自己的信息
    //
    // 企业用户通过该接口查询自己的信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMyInfoResponse> showMyInfo(
        ShowMyInfoRequest &request
    );
    // 查询在线会议详情
    //
    // 该接口用于查询正在召开的会议详情。管理员可以查询本企业内所有的在线会议详情，普通用户仅能查询自己帐号创建或者需要参加的在线会议详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOnlineMeetingDetailResponse> showOnlineMeetingDetail(
        ShowOnlineMeetingDetailRequest &request
    );
    // 企业管理员查询企业资源使用信息
    //
    // 企业管理员查询所属企业的资源使用信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOrgResResponse> showOrgRes(
        ShowOrgResRequest &request
    );
    // 根据ID查询节目详情
    //
    // 根据ID获取节目详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProgramResponse> showProgram(
        ShowProgramRequest &request
    );
    // 根据ID查询信息窗发布详情
    //
    // 根据ID获取发布详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPublicationResponse> showPublication(
        ShowPublicationRequest &request
    );
    // 查询会议实时信息
    //
    // 该接口用于查询正在召开的会议实时信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRealTimeInfoOfMeetingResponse> showRealTimeInfoOfMeeting(
        ShowRealTimeInfoOfMeetingRequest &request
    );
    // 查询单会议录制文件信息
    //
    // 查询单会议录制文件信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordInfoResponse> showRecordInfo(
        ShowRecordInfoRequest &request
    );
    // 查询录制详情
    //
    // 改接口用于查询某个会议录制的详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordingDetailResponse> showRecordingDetail(
        ShowRecordingDetailRequest &request
    );
    // 查询录制文件下载链接
    //
    // 该接口用户查询指定会议录制文件下载链接。
    // &gt; * 仅企业管理员权限的帐号才能查询录制文件的下载链接
    // &gt; * 这个接口需要在华为云会议后台开通白名单后才能调用。请联系华为销售人员，并提供华为云会议企业ID
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordingFileDownloadUrlsResponse> showRecordingFileDownloadUrls(
        ShowRecordingFileDownloadUrlsRequest &request
    );
    // 查询会议所在区域信息
    //
    // 该接口用于查询会议所在区域的IP和域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRegionInfoOfMeetingResponse> showRegionInfoOfMeeting(
        ShowRegionInfoOfMeetingRequest &request
    );
    // 查询网络研讨会高级设置
    //
    // 该接口用于查询指定网络研讨会的高级设置。管理员可查询企业内的网络研讨会高级设置，非管理员只可查询自己预定的网络研讨会的高级设置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRoomSettingResponse> showRoomSetting(
        ShowRoomSettingRequest &request
    );
    // SP管理员查询SP下资源使用信息
    //
    // SP管理员查询所属SP的共享资源使用信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSpResResponse> showSpRes(
        ShowSpResRequest &request
    );
    // SP管理员查询资源信息
    //
    // SP管理员查询SP的所有资源，包括已使用的资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSpResourceResponse> showSpResource(
        ShowSpResourceRequest &request
    );
    // 查询SSO登录配置
    //
    // 该接口用于查询SSO登录的鉴权配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSsoConfigResponse> showSsoConfig(
        ShowSsoConfigRequest &request
    );
    // 查询用户详情
    //
    // 企业管理员通过该接口查询企业用户详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserDetailResponse> showUserDetail(
        ShowUserDetailRequest &request
    );
    // 查询事件推送
    //
    // 该接口用于管理员查询企业事件订阅配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWebHookConfigResponse> showWebHookConfig(
        ShowWebHookConfigRequest &request
    );
    // 查询网络研讨会详情
    //
    // 该接口用于查询指定网络研讨会的详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWebinarResponse> showWebinar(
        ShowWebinarRequest &request
    );
    // 激活会议
    //
    // 该接口用于通过会议ID和会议密码激活会议。所有的会控接口都需要在会议激活后才能调用，可以通过该接口先激活会议。
    // &gt; 来宾密码是否可以激活会议取决于会议创建时是否设置了“是否允许来宾启动会议”（allowGuestStartConf&#x3D;true）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartMeetingResponse> startMeeting(
        StartMeetingRequest &request
    );
    // 结束会议
    //
    // 该接口用于结束正在召开的会议。
    // &gt; * 如果管理员在企业的会议设置中关闭“结束会议保留预约记录”开关，会议结束后会议列表中将删除该会议，与会者不能再次加入该会议。否则会议预约时间到之前，与会者可以再次加入该会议
    // &gt; * “结束会议保留预约记录”默认是开的
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopMeetingResponse> stopMeeting(
        StopMeetingRequest &request
    );
    // 切换视频显示策略
    //
    // 该接口用于切换会中视频画面显示策略，包括广播多画面，广播单画面，声控多画面。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchModeResponse> switchMode(
        SwitchModeRequest &request
    );
    // 修改企业应用
    //
    // 企业默认管理员修改企业应用
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAppIdResponse> updateAppId(
        UpdateAppIdRequest &request
    );
    // 修改手机或邮箱
    //
    // 企业用户通过该接口修改手机或邮箱，需要先获取验证码，验证多次失败会禁止修改。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateContactResponse> updateContact(
        UpdateContactRequest &request
    );
    // SP管理员修改企业
    //
    // 修改企业，若任一参数为null或者不携带则不修改。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateCorpResponse> updateCorp(
        UpdateCorpRequest &request
    );
    // 企业管理员修改企业注册信息
    //
    // 企业管理员通过该接口修改企业注册信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateCorpBasicInfoResponse> updateCorpBasicInfo(
        UpdateCorpBasicInfoRequest &request
    );
    // 修改部门
    //
    // 企业管理员通过该接口修改部门。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDepartmentResponse> updateDepartment(
        UpdateDepartmentRequest &request
    );
    // 修改终端
    //
    // 企业管理员通过该接口修改专业会议终端。
    // &gt; 如果需要修改Ideahub、SmartRooms、智慧屏TV请使用[[修改用户](https://support.huaweicloud.com/api-meeting/meeting_21_0068.html)](tag:hws)[[修改用户](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0068.html)](tag:hk)接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeviceResponse> updateDevice(
        UpdateDeviceRequest &request
    );
    // 更新信息窗素材
    //
    // 更新信息窗素材。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMaterialResponse> updateMaterial(
        UpdateMaterialRequest &request
    );
    // 编辑预约会议
    //
    // 该接口用于修改已预约的会议。会议开始后，不能被修改。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMeetingResponse> updateMeeting(
        UpdateMeetingRequest &request
    );
    // 修改用会议室及个人会议ID信息
    //
    // 企业用户登录后可以修改分配给用户的云会议室及个人会议ID。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMemberVmrResponse> updateMemberVmr(
        UpdateMemberVmrRequest &request
    );
    // 用户修改自己的信息
    //
    // 企业用户通过该接口修改自己的信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMyInfoResponse> updateMyInfo(
        UpdateMyInfoRequest &request
    );
    // 更新信息窗节目
    //
    // 更新信息窗节目。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProgramResponse> updateProgram(
        UpdateProgramRequest &request
    );
    // 修改信息窗发布
    //
    // 修改信息窗发布。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePublicationResponse> updatePublication(
        UpdatePublicationRequest &request
    );
    // 修改密码
    //
    // 企业成员通过该接口提供用户修改密码功能，服务器收到请求，修改用户密码并返回结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePwdResponse> updatePwd(
        UpdatePwdRequest &request
    );
    // 编辑周期性会议
    //
    // 该接口用于修改已预约的周期性会议。会议开始后，不能被修改。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRecurringMeetingResponse> updateRecurringMeeting(
        UpdateRecurringMeetingRequest &request
    );
    // 编辑周期性会议的子会议
    //
    // 该接口用于修改已预约的周期性会议的子会议。会议开始后，不能被修改。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRecurringSubMeetingResponse> updateRecurringSubMeeting(
        UpdateRecurringSubMeetingRequest &request
    );
    // SP管理员根据修改企业资源
    //
    // 企业修改资源的过期时间、停用状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateResourceResponse> updateResource(
        UpdateResourceRequest &request
    );
    // 修改网络研讨会高级设置
    //
    // 该接口用于设置指定网络研讨会的高级设置。管理员可设置企业内的网络研讨会高级设置，非管理员只可设置自己预定的网络研讨会的高级设置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRoomSettingResponse> updateRoomSetting(
        UpdateRoomSettingRequest &request
    );
    // 会中修改配置
    //
    // 该接口用于修改会议配置，包括会议共享是否锁定，允许呼入范围。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateStartedConfConfigResponse> updateStartedConfConfig(
        UpdateStartedConfConfigRequest &request
    );
    // 刷新Token
    //
    // 该接口提供刷新Token功能，根据传入的Token，刷新Token失效时间并返回结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTokenResponse> updateToken(
        UpdateTokenRequest &request
    );
    // 修改用户
    //
    // 企业管理员通过该接口修改企业用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateUserResponse> updateUser(
        UpdateUserRequest &request
    );
    // 开启事件推送
    //
    // 该接口用于管理员变更订阅配置使用状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWebHookConfigStatusResponse> updateWebHookConfigStatus(
        UpdateWebHookConfigStatusRequest &request
    );
    // 编辑网络研讨会
    //
    // 该接口用于修改已创建的网络研讨会。网络研讨会开始后不能修改。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWebinarResponse> updateWebinar(
        UpdateWebinarRequest &request
    );
    // 上传图片
    //
    // 该接口用户上传网络研讨会高级设置用的图片。图片可用于网络研讨会的封面和Logo。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadFileResponse> uploadFile(
        UploadFileRequest &request
    );

    // 查询QoS历史会议列表
    //
    // 该接口用于查询企业内历史会议的QoS告警。仅旗舰版企业/标准版企业的企业管理员有权限查询。可以查询最近3个月内的数据。
    // &gt; 仪表盘的QoS统计功能需要申请才能开通。请联系华为销售人员，并提供华为云会议企业ID。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchQosHistoryMeetingsResponse> searchQosHistoryMeetings(
        SearchQosHistoryMeetingsRequest &request
    );
    // 查询QoS在线会议列表
    //
    // 该接口用于查询企业内正在召开会议的QoS告警。仅旗舰版企业/标准版企业的企业管理员有权限查询。
    // &gt; 仪表盘的QoS统计功能需要申请才能开通。请联系华为销售人员，并提供华为云会议企业ID。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchQosOnlineMeetingsResponse> searchQosOnlineMeetings(
        SearchQosOnlineMeetingsRequest &request
    );
    // 查询与会者的QoS数据
    //
    // 该接口用于查询企业内在线会议或历史会议的与会者QoS数据。仅旗舰版企业/标准版企业的企业管理员有权限查询。
    // &gt; 仪表盘的QoS统计功能需要申请才能开通。请联系华为销售人员，并提供华为云会议企业ID。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchQosParticipantDetailResponse> searchQosParticipantDetail(
        SearchQosParticipantDetailRequest &request
    );
    // 查询QoS会议与会者列表
    //
    // 该接口用于查询企业内在线会议或历史会议的与会者QoS告警。仅旗舰版企业/标准版企业的企业管理员有权限查询。
    // &gt; 仪表盘的QoS统计功能需要申请才能开通。请联系华为销售人员，并提供华为云会议企业ID。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchQosParticipantsResponse> searchQosParticipants(
        SearchQosParticipantsRequest &request
    );
    // 设置QoS告警阈值
    //
    // 该接口用于设置QoS告警阈值。仅旗舰版企业/标准版企业的企业管理员有权限设置。
    // &gt; 仪表盘的QoS统计功能需要申请才能开通。请联系华为销售人员，并提供华为云会议企业ID。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetQosThresholdResponse> setQosThreshold(
        SetQosThresholdRequest &request
    );
    // 查询QoS告警阈值
    //
    // 该接口用于查询QoS告警阈值。仅旗舰版企业/标准版企业的企业管理员有权限查询。
    // &gt; 该接口用于查询QoS告警阈值。仅旗舰版企业/标准版企业的企业管理员有权限查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQosThresholdResponse> showQosThreshold(
        ShowQosThresholdRequest &request
    );

    // 查询企业级会议总体统计数据
    //
    // 该接口用于查询企业内：
    // * 单日内按小时统计的会议数据。
    // * 指定日期范围内按日/按月统计的会议数据。
    // &gt; 仅旗舰版企业/标准版企业的企业管理员有权限查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchStatisticConferenceInfoResponse> searchStatisticConferenceInfo(
        SearchStatisticConferenceInfoRequest &request
    );
    // 查询企业级会议与会统计数据
    //
    // 该接口用于查询企业内与会者数据统计：
    // * 查询与会用户统计数据，按日/按月统计。
    // * 查询与会硬件终端统计数据，按日/按月统计。
    // * 查询与会设备统计数据，按日/按月统计。
    // &gt; 仅旗舰版企业/标准版企业的企业管理员有权限查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchStatisticConferenceParticipantResponse> searchStatisticConferenceParticipant(
        SearchStatisticConferenceParticipantRequest &request
    );
    // 查询企业级会议已购资源使用统计数据
    //
    // 该接口用于查询企业内已购资源使用状况数据统计：
    // * 查询已购资源使用状况，按日/按月统计。
    // &gt; 仅旗舰版企业/标准版企业的企业管理员有权限查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchStatisticResourceInfoResponse> searchStatisticResourceInfo(
        SearchStatisticResourceInfoRequest &request
    );
    // 查询企业级会议的用户统计数据
    //
    // 该接口用于查询企业内用户数据统计：
    // * 查询会议用户登录数据，按日/按月统计。
    // * 查询会议用户激活数据，按日/按月统计。
    // * 查询会议用户登录设备数据，按日/按月统计。
    // &gt; 仅旗舰版企业/标准版企业的企业管理员有权限查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchStatisticUserInfoResponse> searchStatisticUserInfo(
        SearchStatisticUserInfoRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_MEETING_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Meeting::V1::MeetingClient>;

#endif // HUAWEICLOUD_SDK_MEETING_V1_MeetingClient_H_

