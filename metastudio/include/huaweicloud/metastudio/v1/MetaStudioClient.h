#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MetaStudioClient_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MetaStudioClient_H_

#include <huaweicloud/metastudio/v1/MetaStudioExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/metastudio/v1/model/CreateActiveCodeReq.h>
#include <huaweicloud/metastudio/v1/model/CreateActiveCodeRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateActiveCodeResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteActiveCodeRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteActiveCodeResponse.h>
#include <huaweicloud/metastudio/v1/model/ListActiveCodeRequest.h>
#include <huaweicloud/metastudio/v1/model/ListActiveCodeResponse.h>
#include <huaweicloud/metastudio/v1/model/ResetActiveCodeReq.h>
#include <huaweicloud/metastudio/v1/model/ResetActiveCodeRequest.h>
#include <huaweicloud/metastudio/v1/model/ResetActiveCodeResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowActiveCodeRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowActiveCodeResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateActiveCodeReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateActiveCodeRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateActiveCodeResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateAgencyWithRoleTypeRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateAgencyWithRoleTypeResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteAgencyWithRoleTypeRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteAgencyWithRoleTypeResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowAgencyRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowAgencyResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateAsrVocabularyReq.h>
#include <huaweicloud/metastudio/v1/model/CreateAsrVocabularyRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateAsrVocabularyResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteAsrVocabularyRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteAsrVocabularyResponse.h>
#include <huaweicloud/metastudio/v1/model/ListAsrVocabularyRequest.h>
#include <huaweicloud/metastudio/v1/model/ListAsrVocabularyResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowAsrVocabularyAssociationRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowAsrVocabularyAssociationResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowAsrVocabularyRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowAsrVocabularyResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateAsrVocabularyReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateAsrVocabularyRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateAsrVocabularyResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/DeleteTaskRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteTaskResponse.h>
#include <huaweicloud/metastudio/v1/model/DownloadResultFileRequest.h>
#include <huaweicloud/metastudio/v1/model/DownloadResultFileResponse.h>
#include <huaweicloud/metastudio/v1/model/DownloadTemplateRequest.h>
#include <huaweicloud/metastudio/v1/model/DownloadTemplateResponse.h>
#include <huaweicloud/metastudio/v1/model/ExportResourceRequest.h>
#include <huaweicloud/metastudio/v1/model/ExportResourceResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/metastudio/v1/model/ImportResourceRequest.h>
#include <huaweicloud/metastudio/v1/model/ImportResourceRequestBody.h>
#include <huaweicloud/metastudio/v1/model/ImportResourceResponse.h>
#include <huaweicloud/metastudio/v1/model/SearchTaskRequest.h>
#include <huaweicloud/metastudio/v1/model/SearchTaskResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowTaskRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowTaskResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateDialogUrlReq.h>
#include <huaweicloud/metastudio/v1/model/CreateDialogUrlRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateDialogUrlResponse.h>
#include <huaweicloud/metastudio/v1/model/ListSmartChatJobRequest.h>
#include <huaweicloud/metastudio/v1/model/ListSmartChatJobResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowSmartChatJobRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowSmartChatJobResponse.h>
#include <huaweicloud/metastudio/v1/model/SmartChatJobsReq.h>
#include <huaweicloud/metastudio/v1/model/StartSmartChatJobRequest.h>
#include <huaweicloud/metastudio/v1/model/StartSmartChatJobResponse.h>
#include <huaweicloud/metastudio/v1/model/StopSmartChatJobRequest.h>
#include <huaweicloud/metastudio/v1/model/StopSmartChatJobResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateDialogReportConfigReq.h>
#include <huaweicloud/metastudio/v1/model/CreateDialogReportConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateDialogReportConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteDialogReportConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteDialogReportConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowDialogReportConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowDialogReportConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateDialogReportConfigReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateDialogReportConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateDialogReportConfigResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/BatchAssetActionReq.h>
#include <huaweicloud/metastudio/v1/model/BatchExecuteAssetActionRequest.h>
#include <huaweicloud/metastudio/v1/model/BatchExecuteAssetActionResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateAssetByReplicationInfoRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateAssetByReplicationInfoResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateDigitalAssetRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateDigitalAssetRequestBody.h>
#include <huaweicloud/metastudio/v1/model/CreateDigitalAssetResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteAssetRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteAssetResponse.h>
#include <huaweicloud/metastudio/v1/model/ListAssetSummaryRequest.h>
#include <huaweicloud/metastudio/v1/model/ListAssetSummaryResponse.h>
#include <huaweicloud/metastudio/v1/model/ListAssetSummarysReq.h>
#include <huaweicloud/metastudio/v1/model/ListAssetsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListAssetsResponse.h>
#include <huaweicloud/metastudio/v1/model/ReplicationAssetInfo.h>
#include <huaweicloud/metastudio/v1/model/RestoreAssetRequest.h>
#include <huaweicloud/metastudio/v1/model/RestoreAssetResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowAssetReplicationInfoRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowAssetReplicationInfoResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowAssetRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowAssetResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateDigitalAssetRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateDigitalAssetRequestBody.h>
#include <huaweicloud/metastudio/v1/model/UpdateDigitalAssetResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateDigitalHumanBusinessCardReq.h>
#include <huaweicloud/metastudio/v1/model/CreateDigitalHumanBusinessCardRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateDigitalHumanBusinessCardResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteDigitalHumanBusinessCardRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteDigitalHumanBusinessCardResponse.h>
#include <huaweicloud/metastudio/v1/model/ListDigitalHumanBusinessCardRequest.h>
#include <huaweicloud/metastudio/v1/model/ListDigitalHumanBusinessCardResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowDigitalHumanBusinessCardRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowDigitalHumanBusinessCardResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateDigitalHumanBusinessCardRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateDigitalHumanBusinessCardResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/ListDigitalHumanVideoRequest.h>
#include <huaweicloud/metastudio/v1/model/ListDigitalHumanVideoResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/Cancel2DDigitalHumanVideoRequest.h>
#include <huaweicloud/metastudio/v1/model/Cancel2DDigitalHumanVideoResponse.h>
#include <huaweicloud/metastudio/v1/model/Create2DDigitalHumanVideoReq.h>
#include <huaweicloud/metastudio/v1/model/Create2DDigitalHumanVideoRequest.h>
#include <huaweicloud/metastudio/v1/model/Create2DDigitalHumanVideoResponse.h>
#include <huaweicloud/metastudio/v1/model/Show2DDigitalHumanVideoRequest.h>
#include <huaweicloud/metastudio/v1/model/Show2DDigitalHumanVideoResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CancelPhotoDigitalHumanVideoRequest.h>
#include <huaweicloud/metastudio/v1/model/CancelPhotoDigitalHumanVideoResponse.h>
#include <huaweicloud/metastudio/v1/model/CreatePhotoDetectionReq.h>
#include <huaweicloud/metastudio/v1/model/CreatePhotoDetectionRequest.h>
#include <huaweicloud/metastudio/v1/model/CreatePhotoDetectionResponse.h>
#include <huaweicloud/metastudio/v1/model/CreatePhotoDigitalHumanVideoReq.h>
#include <huaweicloud/metastudio/v1/model/CreatePhotoDigitalHumanVideoRequest.h>
#include <huaweicloud/metastudio/v1/model/CreatePhotoDigitalHumanVideoResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowPhotoDetectionRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowPhotoDetectionResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowPhotoDigitalHumanVideoRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowPhotoDigitalHumanVideoResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateDocumentRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateDocumentRequestBody.h>
#include <huaweicloud/metastudio/v1/model/CreateDocumentResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteDocumentRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteDocumentResponse.h>
#include <huaweicloud/metastudio/v1/model/DownloadDocumentRequest.h>
#include <huaweicloud/metastudio/v1/model/DownloadDocumentResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/metastudio/v1/model/ListDocumentInfoRequest.h>
#include <huaweicloud/metastudio/v1/model/ListDocumentInfoResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowDocumentInfoRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowDocumentInfoResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateDocumentRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateDocumentRequestBody.h>
#include <huaweicloud/metastudio/v1/model/UpdateDocumentResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/DocumentSegmentInfo.h>
#include <huaweicloud/metastudio/v1/model/DocumentSegmentParam.h>
#include <huaweicloud/metastudio/v1/model/ListDocumentSegmentRequest.h>
#include <huaweicloud/metastudio/v1/model/ListDocumentSegmentResponse.h>
#include <huaweicloud/metastudio/v1/model/PreviewDocumentSegmentRequest.h>
#include <huaweicloud/metastudio/v1/model/PreviewDocumentSegmentResponse.h>
#include <huaweicloud/metastudio/v1/model/StartDocumentSegmentRequest.h>
#include <huaweicloud/metastudio/v1/model/StartDocumentSegmentResponse.h>
#include <huaweicloud/metastudio/v1/model/StartDocumentSegmentTaskReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateDocumentSegmentInfoRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateDocumentSegmentInfoResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateDocumentSegmentParamRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateDocumentSegmentParamResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateDocumentSegmentReq.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/ConfirmFileUploadRequest.h>
#include <huaweicloud/metastudio/v1/model/ConfirmFileUploadRequestBody.h>
#include <huaweicloud/metastudio/v1/model/ConfirmFileUploadResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateFileRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateFileResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateLargeFileRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateLargeFileResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteFileRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteFileResponse.h>
#include <huaweicloud/metastudio/v1/model/FilesCreateReq.h>
#include <huaweicloud/metastudio/v1/model/LargeFilesCreateReq.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateHotQuestionReq.h>
#include <huaweicloud/metastudio/v1/model/CreateHotQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateHotQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteHotQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteHotQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/ListHotQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/ListHotQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowHotQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowHotQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateHotQuestionReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateHotQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateHotQuestionResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateHotWordsReq.h>
#include <huaweicloud/metastudio/v1/model/CreateHotWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateHotWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteHotWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteHotWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/ListHotWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListHotWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowHotWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowHotWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowHotWordsSwitchRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowHotWordsSwitchResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateHotWordsReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateHotWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateHotWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateHotWordsSwitchReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateHotWordsSwitchRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateHotWordsSwitchResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateInstructionLibraryReq.h>
#include <huaweicloud/metastudio/v1/model/CreateInstructionLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateInstructionLibraryResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteInstructionLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteInstructionLibraryResponse.h>
#include <huaweicloud/metastudio/v1/model/ListInstructionLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/ListInstructionLibraryResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowInstructionLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowInstructionLibraryResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateInstructionLibraryReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateInstructionLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateInstructionLibraryResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateInstructionReq.h>
#include <huaweicloud/metastudio/v1/model/CreateInstructionRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateInstructionResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteInstructionRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteInstructionResponse.h>
#include <huaweicloud/metastudio/v1/model/ListInstructionRequest.h>
#include <huaweicloud/metastudio/v1/model/ListInstructionResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowInstructionRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowInstructionResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateInstructionReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateInstructionRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateInstructionResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateInteractionRuleGroupRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateInteractionRuleGroupResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteInteractionRuleGroupRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteInteractionRuleGroupResponse.h>
#include <huaweicloud/metastudio/v1/model/InteractionRuleGroup.h>
#include <huaweicloud/metastudio/v1/model/ListInteractionRuleGroupsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListInteractionRuleGroupsResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateInteractionRuleGroupRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateInteractionRuleGroupResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateInteractiveChatReq.h>
#include <huaweicloud/metastudio/v1/model/CreateInteractiveChatRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateInteractiveChatResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateIntentAndQuestionReq.h>
#include <huaweicloud/metastudio/v1/model/CreateIntentAndQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateIntentAndQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeIntentReq.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeIntentRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeIntentResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteKnowledgeIntentRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteKnowledgeIntentResponse.h>
#include <huaweicloud/metastudio/v1/model/ListKnowledgeIntentRequest.h>
#include <huaweicloud/metastudio/v1/model/ListKnowledgeIntentResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowKnowledgeIntentRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowKnowledgeIntentResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeIntentReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeIntentRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeIntentResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CheckRecallKnowledgeLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/CheckRecallKnowledgeLibraryResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeLibraryReq.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeLibraryResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteKnowledgeLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteKnowledgeLibraryResponse.h>
#include <huaweicloud/metastudio/v1/model/ListKnowledgeLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/ListKnowledgeLibraryResponse.h>
#include <huaweicloud/metastudio/v1/model/RecallKnowledgeLibraryInfo.h>
#include <huaweicloud/metastudio/v1/model/RecallKnowledgeLibraryRequestBody.h>
#include <huaweicloud/metastudio/v1/model/ShowKnowledgeLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowKnowledgeLibraryResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeLibraryReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeLibraryRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeLibraryResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateBatchKnowledgeQuestionReq.h>
#include <huaweicloud/metastudio/v1/model/CreateBatchKnowledgeQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateBatchKnowledgeQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeQuestionReq.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteKnowledgeQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteKnowledgeQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/ListKnowledgeQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/ListKnowledgeQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowKnowledgeQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowKnowledgeQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateBatchKnowledgeQuestionReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateBatchKnowledgeQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateBatchKnowledgeQuestionResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeQuestionReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeQuestionRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeQuestionResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateKnowledgeSkillReq.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeSkillRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateKnowledgeSkillResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteKnowledgeSkillRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteKnowledgeSkillResponse.h>
#include <huaweicloud/metastudio/v1/model/ExportKnowledgeSkillRequest.h>
#include <huaweicloud/metastudio/v1/model/ExportKnowledgeSkillResponse.h>
#include <huaweicloud/metastudio/v1/model/ListKnowledgeSkillRequest.h>
#include <huaweicloud/metastudio/v1/model/ListKnowledgeSkillResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowKnowledgeSkillRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowKnowledgeSkillResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeSkillReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeSkillRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateKnowledgeSkillResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateLivePlatformReq.h>
#include <huaweicloud/metastudio/v1/model/CreateLivePlatformRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateLivePlatformResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteLivePlatformRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteLivePlatformResponse.h>
#include <huaweicloud/metastudio/v1/model/ListLivePlatformProductsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListLivePlatformProductsResponse.h>
#include <huaweicloud/metastudio/v1/model/ListLivePlatformsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListLivePlatformsResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowLivePlatformRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowLivePlatformResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateLivePlatformReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateLivePlatformRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateLivePlatformResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateLlmConfigReq.h>
#include <huaweicloud/metastudio/v1/model/CreateLlmConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateLlmConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteLlmConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteLlmConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/ListLlmConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/ListLlmConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowLlmConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowLlmConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateLlmConfigReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateLlmConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateLlmConfigResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateMcpServerReq.h>
#include <huaweicloud/metastudio/v1/model/CreateMcpServerRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateMcpServerResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteMcpServerRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteMcpServerResponse.h>
#include <huaweicloud/metastudio/v1/model/ListMcpServerRequest.h>
#include <huaweicloud/metastudio/v1/model/ListMcpServerResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowMcpServerRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowMcpServerResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateMcpServerReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateMcpServerRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateMcpServerResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateOnceCodeRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateOnceCodeResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateMetaStudioOrdersReq.h>
#include <huaweicloud/metastudio/v1/model/CreateMetaStudioOrdersRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateMetaStudioOrdersResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/BatchDeletePacifyWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/BatchDeletePacifyWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/CreatePacifyWordsReq.h>
#include <huaweicloud/metastudio/v1/model/CreatePacifyWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/CreatePacifyWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/DeletePacifyWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/DeletePacifyWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/ListPacifyWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListPacifyWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowPacifyWordsIntentRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowPacifyWordsIntentResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowPacifyWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowPacifyWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowPacifyWordsSwitchRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowPacifyWordsSwitchResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowPacifyWordsTriggerTimeRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowPacifyWordsTriggerTimeResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdatePacifyWordsReq.h>
#include <huaweicloud/metastudio/v1/model/UpdatePacifyWordsRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdatePacifyWordsResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdatePacifyWordsSwitchReq.h>
#include <huaweicloud/metastudio/v1/model/UpdatePacifyWordsSwitchRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdatePacifyWordsSwitchResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdatePacifyWordsTriggerTimeReq.h>
#include <huaweicloud/metastudio/v1/model/UpdatePacifyWordsTriggerTimeRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdatePacifyWordsTriggerTimeResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreatePictureModelingByUrlJobRequest.h>
#include <huaweicloud/metastudio/v1/model/CreatePictureModelingByUrlJobResponse.h>
#include <huaweicloud/metastudio/v1/model/CreatePictureModelingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/CreatePictureModelingJobRequestBody.h>
#include <huaweicloud/metastudio/v1/model/CreatePictureModelingJobResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/metastudio/v1/model/ListPictureModelingJobsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListPictureModelingJobsResponse.h>
#include <huaweicloud/metastudio/v1/model/PictureModelingByUrlReq.h>
#include <huaweicloud/metastudio/v1/model/ShowPictureModelingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowPictureModelingJobResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreatePluginConfigReq.h>
#include <huaweicloud/metastudio/v1/model/CreatePluginConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/CreatePluginConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/DeletePluginConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/DeletePluginConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/ListPluginConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/ListPluginConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowPluginConfigDefaultInfoRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowPluginConfigDefaultInfoResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowPluginConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowPluginConfigResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdatePluginConfigReq.h>
#include <huaweicloud/metastudio/v1/model/UpdatePluginConfigRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdatePluginConfigResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateProductRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateProductRequestBody.h>
#include <huaweicloud/metastudio/v1/model/CreateProductResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteProductRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteProductResponse.h>
#include <huaweicloud/metastudio/v1/model/ListProductsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListProductsResponse.h>
#include <huaweicloud/metastudio/v1/model/ProductAssetReleation.h>
#include <huaweicloud/metastudio/v1/model/SetProductAssetRequest.h>
#include <huaweicloud/metastudio/v1/model/SetProductAssetResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowProductRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowProductResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateProductRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateProductRequestBody.h>
#include <huaweicloud/metastudio/v1/model/UpdateProductResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateQuestionAnswerReq.h>
#include <huaweicloud/metastudio/v1/model/CreateQuestionAnswerRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateQuestionAnswerResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteQuestionAnswerRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteQuestionAnswerResponse.h>
#include <huaweicloud/metastudio/v1/model/ListQuestionAnswerRequest.h>
#include <huaweicloud/metastudio/v1/model/ListQuestionAnswerResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowQuestionAnswerRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowQuestionAnswerResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateQuestionAnswerReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateQuestionAnswerRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateQuestionAnswerResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateRobotReq.h>
#include <huaweicloud/metastudio/v1/model/CreateRobotRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateRobotResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteRobotRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteRobotResponse.h>
#include <huaweicloud/metastudio/v1/model/ListRobotRequest.h>
#include <huaweicloud/metastudio/v1/model/ListRobotResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowRobotRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowRobotResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateRobotReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateRobotRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateRobotResponse.h>
#include <huaweicloud/metastudio/v1/model/ValidateRobotReq.h>
#include <huaweicloud/metastudio/v1/model/ValidateRobotRequest.h>
#include <huaweicloud/metastudio/v1/model/ValidateRobotResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateRoleReq.h>
#include <huaweicloud/metastudio/v1/model/CreateRoleRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateRoleResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteRoleRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteRoleResponse.h>
#include <huaweicloud/metastudio/v1/model/ListRoleRequest.h>
#include <huaweicloud/metastudio/v1/model/ListRoleResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowRoleRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowRoleResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateRoleReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateRoleRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateRoleResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/metastudio/v1/model/CreateSmartChatRoomReq.h>
#include <huaweicloud/metastudio/v1/model/CreateSmartChatRoomRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateSmartChatRoomResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteSmartChatRoomRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteSmartChatRoomResponse.h>
#include <huaweicloud/metastudio/v1/model/ListSmartChatRoomsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListSmartChatRoomsResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowSmartChatRoomRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowSmartChatRoomResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateSmartChatRoomRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateSmartChatRoomResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/BatchConfirmLiveCommandsReq.h>
#include <huaweicloud/metastudio/v1/model/BatchConfirmLiveCommandsRequest.h>
#include <huaweicloud/metastudio/v1/model/BatchConfirmLiveCommandsResponse.h>
#include <huaweicloud/metastudio/v1/model/ControlSmartLiveReq.h>
#include <huaweicloud/metastudio/v1/model/ExecuteSmartLiveCommandRequest.h>
#include <huaweicloud/metastudio/v1/model/ExecuteSmartLiveCommandResponse.h>
#include <huaweicloud/metastudio/v1/model/ListSmartLiveJobsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListSmartLiveJobsResponse.h>
#include <huaweicloud/metastudio/v1/model/ListSmartLiveRequest.h>
#include <huaweicloud/metastudio/v1/model/ListSmartLiveResponse.h>
#include <huaweicloud/metastudio/v1/model/ListSmartLiveRuleCommandsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListSmartLiveRuleCommandsResponse.h>
#include <huaweicloud/metastudio/v1/model/ListSmartLiveScriptCommandsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListSmartLiveScriptCommandsResponse.h>
#include <huaweicloud/metastudio/v1/model/LiveEventReportRequest.h>
#include <huaweicloud/metastudio/v1/model/LiveEventReportResponse.h>
#include <huaweicloud/metastudio/v1/model/ReportLiveEventReq.h>
#include <huaweicloud/metastudio/v1/model/ShowSmartLiveRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowSmartLiveResponse.h>
#include <huaweicloud/metastudio/v1/model/StartSmartLiveReq.h>
#include <huaweicloud/metastudio/v1/model/StartSmartLiveRequest.h>
#include <huaweicloud/metastudio/v1/model/StartSmartLiveResponse.h>
#include <huaweicloud/metastudio/v1/model/StopSmartLiveRequest.h>
#include <huaweicloud/metastudio/v1/model/StopSmartLiveResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/ConfirmSmarLiveRoomReq.h>
#include <huaweicloud/metastudio/v1/model/ConfirmSmarLiveRoomRequest.h>
#include <huaweicloud/metastudio/v1/model/ConfirmSmarLiveRoomResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateSmartLiveRoomReq.h>
#include <huaweicloud/metastudio/v1/model/CreateSmartLiveRoomRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateSmartLiveRoomResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteSmartLiveRoomRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteSmartLiveRoomResponse.h>
#include <huaweicloud/metastudio/v1/model/ListSmartLiveRoomsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListSmartLiveRoomsResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowSmartLiveRoomRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowSmartLiveRoomResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateSmartLiveRoomRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateSmartLiveRoomResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/ListStylesRequest.h>
#include <huaweicloud/metastudio/v1/model/ListStylesResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateSubtitleFileReq.h>
#include <huaweicloud/metastudio/v1/model/CreateSubtitleFileRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateSubtitleFileResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowSubtitleFileRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowSubtitleFileResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CountTenantResourcesRequest.h>
#include <huaweicloud/metastudio/v1/model/CountTenantResourcesResponse.h>
#include <huaweicloud/metastudio/v1/model/ListTenantResourcesRequest.h>
#include <huaweicloud/metastudio/v1/model/ListTenantResourcesResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowResourceUsageRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowResourceUsageResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CommitJobReq.h>
#include <huaweicloud/metastudio/v1/model/CommitVoiceTrainingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/CommitVoiceTrainingJobResponse.h>
#include <huaweicloud/metastudio/v1/model/ConfirmTrainingSegmentRequest.h>
#include <huaweicloud/metastudio/v1/model/ConfirmTrainingSegmentResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateTrainingAdvanceJobRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateTrainingAdvanceJobResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateTrainingBasicJobRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateTrainingBasicJobResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateTrainingJobReq.h>
#include <huaweicloud/metastudio/v1/model/CreateTrainingMiddleJobRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateTrainingMiddleJobResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteVoiceTrainingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteVoiceTrainingJobResponse.h>
#include <huaweicloud/metastudio/v1/model/ListJobOperationLogRequest.h>
#include <huaweicloud/metastudio/v1/model/ListJobOperationLogResponse.h>
#include <huaweicloud/metastudio/v1/model/ListVoiceTrainingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/ListVoiceTrainingJobResponse.h>
#include <huaweicloud/metastudio/v1/model/SetJobBatchNameReq.h>
#include <huaweicloud/metastudio/v1/model/SetJobBatchNameRequest.h>
#include <huaweicloud/metastudio/v1/model/SetJobBatchNameResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowJobAuditResultRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowJobAuditResultResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowJobUploadingAddressRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowJobUploadingAddressResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowTenantDurationCfgRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowTenantDurationCfgResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowTrainingSegmentInfoRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowTrainingSegmentInfoResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowVoiceTrainingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowVoiceTrainingJobResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/Create2dModelTrainingJobReq.h>
#include <huaweicloud/metastudio/v1/model/Create2dModelTrainingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/Create2dModelTrainingJobResponse.h>
#include <huaweicloud/metastudio/v1/model/Delete2dModelTrainingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/Delete2dModelTrainingJobResponse.h>
#include <huaweicloud/metastudio/v1/model/Execute2dModelTrainingCommandByUserReq.h>
#include <huaweicloud/metastudio/v1/model/Execute2dModelTrainingCommandByUserRequest.h>
#include <huaweicloud/metastudio/v1/model/Execute2dModelTrainingCommandByUserResponse.h>
#include <huaweicloud/metastudio/v1/model/List2dModelTrainingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/List2dModelTrainingJobResponse.h>
#include <huaweicloud/metastudio/v1/model/Show2dModelTrainingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/Show2dModelTrainingJobResponse.h>
#include <huaweicloud/metastudio/v1/model/Update2dModelTrainingJobReq.h>
#include <huaweicloud/metastudio/v1/model/Update2dModelTrainingJobRequest.h>
#include <huaweicloud/metastudio/v1/model/Update2dModelTrainingJobResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateFASReq.h>
#include <huaweicloud/metastudio/v1/model/CreateFacialAnimationsRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateFacialAnimationsResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateTTSAReq.h>
#include <huaweicloud/metastudio/v1/model/CreateTtsaRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateTtsaResponse.h>
#include <huaweicloud/metastudio/v1/model/ListFacialAnimationsDataRequest.h>
#include <huaweicloud/metastudio/v1/model/ListFacialAnimationsDataResponse.h>
#include <huaweicloud/metastudio/v1/model/ListTtsaDataRequest.h>
#include <huaweicloud/metastudio/v1/model/ListTtsaDataResponse.h>
#include <huaweicloud/metastudio/v1/model/ListTtsaJobsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListTtsaJobsResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CheckVoiceAssetRequest.h>
#include <huaweicloud/metastudio/v1/model/CheckVoiceAssetResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowTtsJobRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowTtsJobResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowTtsPhoneticSymbolRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowTtsPhoneticSymbolResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateAsyncTtsJobRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateAsyncTtsJobRequestBody.h>
#include <huaweicloud/metastudio/v1/model/CreateAsyncTtsJobResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateTtsAuditionRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateTtsAuditionRequestBody.h>
#include <huaweicloud/metastudio/v1/model/CreateTtsAuditionResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowAsyncTtsJobRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowAsyncTtsJobResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowTtsAuditionFileRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowTtsAuditionFileResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateTtscVocabularyConfigsRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateTtscVocabularyConfigsResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateTtscVocabularyGroupsRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateTtscVocabularyGroupsResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteTtscVocabularyConfigsRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteTtscVocabularyConfigsRequestBody.h>
#include <huaweicloud/metastudio/v1/model/DeleteTtscVocabularyConfigsResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteTtscVocabularyGroupsRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteTtscVocabularyGroupsResponse.h>
#include <huaweicloud/metastudio/v1/model/ListTtscVocabularyConfigsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListTtscVocabularyConfigsResponse.h>
#include <huaweicloud/metastudio/v1/model/ListTtscVocabularyGroupsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListTtscVocabularyGroupsResponse.h>
#include <huaweicloud/metastudio/v1/model/SaveTtscTenantConfigsRequest.h>
#include <huaweicloud/metastudio/v1/model/SaveTtscTenantConfigsRequestBody.h>
#include <huaweicloud/metastudio/v1/model/SaveTtscTenantConfigsResponse.h>
#include <huaweicloud/metastudio/v1/model/SaveTtscVocabularyConfigsRequest.h>
#include <huaweicloud/metastudio/v1/model/SaveTtscVocabularyConfigsRequestBody.h>
#include <huaweicloud/metastudio/v1/model/SaveTtscVocabularyConfigsResponse.h>
#include <huaweicloud/metastudio/v1/model/SaveTtscVocabularyGroupsRequestBody.h>
#include <huaweicloud/metastudio/v1/model/SetTtscGroupAssetsRequest.h>
#include <huaweicloud/metastudio/v1/model/SetTtscGroupAssetsRequestBody.h>
#include <huaweicloud/metastudio/v1/model/SetTtscGroupAssetsResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowVocabularySwitchConfigsRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowVocabularySwitchConfigsResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateTtscVocabularyGroupsRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateTtscVocabularyGroupsResponse.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/ControlDigitalHumanLiveReq.h>
#include <huaweicloud/metastudio/v1/model/CreateVideoMotionCaptureJobRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateVideoMotionCaptureJobResponse.h>
#include <huaweicloud/metastudio/v1/model/ExecuteVideoMotionCaptureCommandRequest.h>
#include <huaweicloud/metastudio/v1/model/ExecuteVideoMotionCaptureCommandResponse.h>
#include <huaweicloud/metastudio/v1/model/ListVideoMotionCaptureJobsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListVideoMotionCaptureJobsResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowVideoMotionCaptureJobRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowVideoMotionCaptureJobResponse.h>
#include <huaweicloud/metastudio/v1/model/StopVideoMotionCaptureJobRequest.h>
#include <huaweicloud/metastudio/v1/model/StopVideoMotionCaptureJobResponse.h>
#include <huaweicloud/metastudio/v1/model/VideoMotionCaptureJobReq.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CopyVideoScriptsRequest.h>
#include <huaweicloud/metastudio/v1/model/CopyVideoScriptsResponse.h>
#include <huaweicloud/metastudio/v1/model/CreateVideoScriptsReq.h>
#include <huaweicloud/metastudio/v1/model/CreateVideoScriptsRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateVideoScriptsResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteVideoScriptRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteVideoScriptResponse.h>
#include <huaweicloud/metastudio/v1/model/ListVideoScriptsRequest.h>
#include <huaweicloud/metastudio/v1/model/ListVideoScriptsResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowVideoScriptRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowVideoScriptResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateVideoScriptRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateVideoScriptResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateVideoScriptsReq.h>
#include <string>

#include <huaweicloud/metastudio/v1/model/CreateWelcomeSpeechReq.h>
#include <huaweicloud/metastudio/v1/model/CreateWelcomeSpeechRequest.h>
#include <huaweicloud/metastudio/v1/model/CreateWelcomeSpeechResponse.h>
#include <huaweicloud/metastudio/v1/model/DeleteWelcomeSpeechRequest.h>
#include <huaweicloud/metastudio/v1/model/DeleteWelcomeSpeechResponse.h>
#include <huaweicloud/metastudio/v1/model/ListWelcomeSpeechRequest.h>
#include <huaweicloud/metastudio/v1/model/ListWelcomeSpeechResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowWelcomeSpeechRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowWelcomeSpeechResponse.h>
#include <huaweicloud/metastudio/v1/model/ShowWelcomeSpeechSwitchRequest.h>
#include <huaweicloud/metastudio/v1/model/ShowWelcomeSpeechSwitchResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechResponse.h>
#include <huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechSwitchReq.h>
#include <huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechSwitchRequest.h>
#include <huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechSwitchResponse.h>
#include <string>
#include <vector>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Metastudio::V1::Model;

class HUAWEICLOUD_METASTUDIO_V1_EXPORT  MetaStudioClient : public Client
{
public:

    MetaStudioClient();

    virtual ~MetaStudioClient();

    static ClientBuilder<MetaStudioClient> newBuilder();

    // 创建激活码
    //
    // 该接口用于创建激活码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateActiveCodeResponse> createActiveCode(
        CreateActiveCodeRequest &request
    );
    // 删除激活码
    //
    // 该接口用于删除激活码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteActiveCodeResponse> deleteActiveCode(
        DeleteActiveCodeRequest &request
    );
    // 查询激活码列表
    //
    // 该接口用于查询激活码列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListActiveCodeResponse> listActiveCode(
        ListActiveCodeRequest &request
    );
    // 重置激活码
    //
    // 该接口用于重置激活码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetActiveCodeResponse> resetActiveCode(
        ResetActiveCodeRequest &request
    );
    // 查询激活码详情
    //
    // 该接口用于查询激活码详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowActiveCodeResponse> showActiveCode(
        ShowActiveCodeRequest &request
    );
    // 修改激活码
    //
    // 该接口用于修改激活码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateActiveCodeResponse> updateActiveCode(
        UpdateActiveCodeRequest &request
    );

    // 创建委托
    //
    // 该接口用于创建委托。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAgencyWithRoleTypeResponse> createAgencyWithRoleType(
        CreateAgencyWithRoleTypeRequest &request
    );
    // 删除委托
    //
    // 该接口用于删除项目下委托。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAgencyWithRoleTypeResponse> deleteAgencyWithRoleType(
        DeleteAgencyWithRoleTypeRequest &request
    );
    // 查询委托
    //
    // 该接口用于查询项目下委托
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAgencyResponse> showAgency(
        ShowAgencyRequest &request
    );

    // 创建热词表
    //
    // 该接口用于创建热词表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAsrVocabularyResponse> createAsrVocabulary(
        CreateAsrVocabularyRequest &request
    );
    // 删除热词表
    //
    // 该接口用于删除热词表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAsrVocabularyResponse> deleteAsrVocabulary(
        DeleteAsrVocabularyRequest &request
    );
    // 查询热词表列表
    //
    // 该接口用于查询热词表列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAsrVocabularyResponse> listAsrVocabulary(
        ListAsrVocabularyRequest &request
    );
    // 查询热词表详情
    //
    // 该接口用于查询热词表详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAsrVocabularyResponse> showAsrVocabulary(
        ShowAsrVocabularyRequest &request
    );
    // 查询热词表关联详情
    //
    // 该接口用于查询热词表关联详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAsrVocabularyAssociationResponse> showAsrVocabularyAssociation(
        ShowAsrVocabularyAssociationRequest &request
    );
    // 修改热词表
    //
    // 该接口用于修改热词表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAsrVocabularyResponse> updateAsrVocabulary(
        UpdateAsrVocabularyRequest &request
    );

    // 删除导入导出任务
    //
    // 删除导入导出任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTaskResponse> deleteTask(
        DeleteTaskRequest &request
    );
    // 下载导入或导出的结果文件
    //
    // 下载导入或者导出结果文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadResultFileResponse> downloadResultFile(
        DownloadResultFileRequest &request
    );
    // 下载信息导入模板
    //
    // 下载导入模板，返回导入模板文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadTemplateResponse> downloadTemplate(
        DownloadTemplateRequest &request
    );
    // 导出文件
    //
    // 导出文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExportResourceResponse> exportResource(
        ExportResourceRequest &request
    );
    // 导入文件
    //
    // 导入文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportResourceResponse> importResource(
        ImportResourceRequest &request
    );
    // 分页查询导入导出任务列表
    //
    // 分页查询导入导出任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchTaskResponse> searchTask(
        SearchTaskRequest &request
    );
    // 查询导入导出任务详情
    //
    // 查询导入导出任务详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTaskResponse> showTask(
        ShowTaskRequest &request
    );

    // 创建对话链接
    //
    // 该接口用于创建对话链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDialogUrlResponse> createDialogUrl(
        CreateDialogUrlRequest &request
    );
    // 查询数字人智能交互任务列表
    //
    // 该接口用于查询数字人智能交互任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSmartChatJobResponse> listSmartChatJob(
        ListSmartChatJobRequest &request
    );
    // 查询数字人智能交互任务
    //
    // 该接口用于查询数字人智能交互任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSmartChatJobResponse> showSmartChatJob(
        ShowSmartChatJobRequest &request
    );
    // 启动数字人智能交互任务
    //
    // 该接口用于启动数字人智能交互任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartSmartChatJobResponse> startSmartChatJob(
        StartSmartChatJobRequest &request
    );
    // 结束数字人智能交互任务
    //
    // 该接口用于结束数字人智能交互任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopSmartChatJobResponse> stopSmartChatJob(
        StopSmartChatJobRequest &request
    );

    // 创建对话结果上报配置
    //
    // 该接口用于创建对话结果上报配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDialogReportConfigResponse> createDialogReportConfig(
        CreateDialogReportConfigRequest &request
    );
    // 删除对话结果上报配置
    //
    // 该接口用于删除对话结果上报配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDialogReportConfigResponse> deleteDialogReportConfig(
        DeleteDialogReportConfigRequest &request
    );
    // 查询对话结果上报配置
    //
    // 该接口用于查询对话结果上报配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDialogReportConfigResponse> showDialogReportConfig(
        ShowDialogReportConfigRequest &request
    );
    // 修改对话结果上报配置
    //
    // 该接口用于修改对话结果上报配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDialogReportConfigResponse> updateDialogReportConfig(
        UpdateDialogReportConfigRequest &request
    );

    // 批量资产操作
    //
    // 该接口用批量资产操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchExecuteAssetActionResponse> batchExecuteAssetAction(
        BatchExecuteAssetActionRequest &request
    );
    // 复制资产
    //
    // 该接口用于在Region B复制Region A的指定资产。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAssetByReplicationInfoResponse> createAssetByReplicationInfo(
        CreateAssetByReplicationInfoRequest &request
    );
    // 创建资产
    //
    // 该接口用于在资产库中添加上传新的媒体资产。可上传的资产类型包括：分身数字人模型、背景图片、素材图片、素材视频、PPT等。
    // &gt; 上传的图片、视频和背景图片，如果需要在视频制作素材中可见，需要设置system_properties。
    // &gt; - 资产类型是IMAGE时，通过system_properties来区分背景图片（BACKGROUND_IMG）、素材图片（MATERIAL_IMG）。
    // &gt; - 资产类型是VIDEO时，通过system_properties来区分素材视频（MATERIAL_VIDEO）、名片视频（BUSSINESS_CARD_VIDEO）。
    // &gt; MetaStudio平台生成的视频，system_properties带CREATED_BY_PLATFORM。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDigitalAssetResponse> createDigitalAsset(
        CreateDigitalAssetRequest &request
    );
    // 删除资产
    //
    // 该接口用于删除资产库中的媒体资产。调用该接口删除媒体资产时，媒体资产会放入回收站中，不会彻底删除。如需彻底删除资产，需增加“mode&#x3D;force”参数配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAssetResponse> deleteAsset(
        DeleteAssetRequest &request
    );
    // 查询资产概要
    //
    // 该接口用于查询媒体资产库中指定的多个资产的概要信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAssetSummaryResponse> listAssetSummary(
        ListAssetSummaryRequest &request
    );
    // 查询资产列表
    //
    // 该接口用于查询资产库中的媒体资产列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAssetsResponse> listAssets(
        ListAssetsRequest &request
    );
    // 恢复被删除的资产
    //
    // 该接口用于恢复被删除至回收站的媒体资产。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreAssetResponse> restoreAsset(
        RestoreAssetRequest &request
    );
    // 查询资产详情
    //
    // 该接口用于查询资产库中指定媒体资产的详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAssetResponse> showAsset(
        ShowAssetRequest &request
    );
    // 查询资产复制信息
    //
    // 当需要将资产从A Region复制到B Region时，先要在A Region调用该接口用于查询资产复制信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAssetReplicationInfoResponse> showAssetReplicationInfo(
        ShowAssetReplicationInfoRequest &request
    );
    // 更新资产
    //
    // 该接口用于更新资产库中的媒体资产信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDigitalAssetResponse> updateDigitalAsset(
        UpdateDigitalAssetRequest &request
    );

    // 创建数字人名片制作
    //
    // 该接口用于数字人名片制作任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDigitalHumanBusinessCardResponse> createDigitalHumanBusinessCard(
        CreateDigitalHumanBusinessCardRequest &request
    );
    // 删除数字人名片制作任务
    //
    // 该接口用于删除数字人名片制作任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDigitalHumanBusinessCardResponse> deleteDigitalHumanBusinessCard(
        DeleteDigitalHumanBusinessCardRequest &request
    );
    // 查询数字人名片制作任务列表
    //
    // 该接口用于查询数字人名片制作任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDigitalHumanBusinessCardResponse> listDigitalHumanBusinessCard(
        ListDigitalHumanBusinessCardRequest &request
    );
    // 查询数字人名片制作任务详情
    //
    // 该接口用于查询数字人名片制作任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDigitalHumanBusinessCardResponse> showDigitalHumanBusinessCard(
        ShowDigitalHumanBusinessCardRequest &request
    );
    // 更新数字人名片制作
    //
    // 该接口用于更新数字人名片制作任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDigitalHumanBusinessCardResponse> updateDigitalHumanBusinessCard(
        UpdateDigitalHumanBusinessCardRequest &request
    );

    // 查询视频制作任务列表
    //
    // 该接口用于查询视频制作任务列表。可查询分身数字人视频制作列表，照片数字人视频制作列表等。
    // &gt; - 默认查询最近一个月任务记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDigitalHumanVideoResponse> listDigitalHumanVideo(
        ListDigitalHumanVideoRequest &request
    );

    // 取消等待中的分身数字人视频制作任务
    //
    // 该接口用于取消等待中的分身数字人视频制作任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<Cancel2DDigitalHumanVideoResponse> cancel2DDigitalHumanVideo(
        Cancel2DDigitalHumanVideoRequest &request
    );
    // 创建分身数字人视频制作任务
    //
    // 该接口用于创建分身数字人视频制作任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<Create2DDigitalHumanVideoResponse> create2DDigitalHumanVideo(
        Create2DDigitalHumanVideoRequest &request
    );
    // 查询分身数字人视频制作任务详情
    //
    // 该接口用于查询分身数字人视频制作任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<Show2DDigitalHumanVideoResponse> show2DDigitalHumanVideo(
        Show2DDigitalHumanVideoRequest &request
    );

    // 取消等待中的照片分身数字人视频制作任务
    //
    // 该接口用于取消等待中的照片分身数字人视频制作任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelPhotoDigitalHumanVideoResponse> cancelPhotoDigitalHumanVideo(
        CancelPhotoDigitalHumanVideoRequest &request
    );
    // 创建照片检测任务
    //
    // 该接口用于创建照片检测任务，检测照片是否满足制作照片数字人的要求。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePhotoDetectionResponse> createPhotoDetection(
        CreatePhotoDetectionRequest &request
    );
    // 创建照片分身数字人视频制作任务
    //
    // 该接口用于创建照片分身数字人视频制作任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePhotoDigitalHumanVideoResponse> createPhotoDigitalHumanVideo(
        CreatePhotoDigitalHumanVideoRequest &request
    );
    // 查询照片检测任务详情
    //
    // 该接口用于查询照片检测任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPhotoDetectionResponse> showPhotoDetection(
        ShowPhotoDetectionRequest &request
    );
    // 查询照片分身数字人视频制作任务详情
    //
    // 该接口用于查询照片分身数字人视频制作任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPhotoDigitalHumanVideoResponse> showPhotoDigitalHumanVideo(
        ShowPhotoDigitalHumanVideoRequest &request
    );

    // 上传文档
    //
    // 该接口用于上传文档。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDocumentResponse> createDocument(
        CreateDocumentRequest &request
    );
    // 批量删除文档
    //
    // 该接口用于批量删除文档。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDocumentResponse> deleteDocument(
        DeleteDocumentRequest &request
    );
    // 下载文档
    //
    // 该接口用于下载文档。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadDocumentResponse> downloadDocument(
        DownloadDocumentRequest &request
    );
    // 查询文档列表
    //
    // 该接口用于分页查询文档列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDocumentInfoResponse> listDocumentInfo(
        ListDocumentInfoRequest &request
    );
    // 查询文档详情
    //
    // 该接口用于查询文档详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDocumentInfoResponse> showDocumentInfo(
        ShowDocumentInfoRequest &request
    );
    // 修改文档
    //
    // 该接口用于修改文档
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDocumentResponse> updateDocument(
        UpdateDocumentRequest &request
    );

    // 分页查询文档分段信息
    //
    // 该接口用于分页查询文档分段信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDocumentSegmentResponse> listDocumentSegment(
        ListDocumentSegmentRequest &request
    );
    // 文档分段效果预览
    //
    // 该接口用于文档分段效果预览。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PreviewDocumentSegmentResponse> previewDocumentSegment(
        PreviewDocumentSegmentRequest &request
    );
    // 开始文档分段
    //
    // 该接口用于开始文档分段任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartDocumentSegmentResponse> startDocumentSegment(
        StartDocumentSegmentRequest &request
    );
    // 修改文档分段内容
    //
    // 该接口用于文档分段内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDocumentSegmentInfoResponse> updateDocumentSegmentInfo(
        UpdateDocumentSegmentInfoRequest &request
    );
    // 更新文档分段配置
    //
    // 该接口用于更新文档分段配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDocumentSegmentParamResponse> updateDocumentSegmentParam(
        UpdateDocumentSegmentParamRequest &request
    );

    // 确认文件已上传
    //
    // 资产文件上传完毕后，通过该接口确认上传完成。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ConfirmFileUploadResponse> confirmFileUpload(
        ConfirmFileUploadRequest &request
    );
    // 创建文件并获取上传URL
    //
    // 该接口用于创建文件并获取上传URL。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFileResponse> createFile(
        CreateFileRequest &request
    );
    // 创建大文件
    //
    // 该接口用于创建大文件（超过5G），获取分段上传URL。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLargeFileResponse> createLargeFile(
        CreateLargeFileRequest &request
    );
    // 删除文件
    //
    // 该接口用于删除媒体资产库中指定的文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFileResponse> deleteFile(
        DeleteFileRequest &request
    );

    // 创建热点问题
    //
    // 该接口用于创建热点问题。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateHotQuestionResponse> createHotQuestion(
        CreateHotQuestionRequest &request
    );
    // 删除热点问题
    //
    // 该接口用于删除热点问题。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHotQuestionResponse> deleteHotQuestion(
        DeleteHotQuestionRequest &request
    );
    // 查询热点问题列表
    //
    // 该接口用于查询热点问题列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHotQuestionResponse> listHotQuestion(
        ListHotQuestionRequest &request
    );
    // 查询热点问题详情
    //
    // 该接口用于查询热点问题详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHotQuestionResponse> showHotQuestion(
        ShowHotQuestionRequest &request
    );
    // 修改热点问题
    //
    // 该接口用于修改热点问题。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHotQuestionResponse> updateHotQuestion(
        UpdateHotQuestionRequest &request
    );

    // 创建热词记录
    //
    // 该接口用于创建热词记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateHotWordsResponse> createHotWords(
        CreateHotWordsRequest &request
    );
    // 删除热词记录
    //
    // 该接口用于删除热词记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHotWordsResponse> deleteHotWords(
        DeleteHotWordsRequest &request
    );
    // 查询热词记录列表
    //
    // 该接口用于查询热词记录列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHotWordsResponse> listHotWords(
        ListHotWordsRequest &request
    );
    // 查询配置热词记录详情
    //
    // 该接口用于查询热词记录详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHotWordsResponse> showHotWords(
        ShowHotWordsRequest &request
    );
    // 查询热词功能开关
    //
    // 该接口用于查询热词功能开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHotWordsSwitchResponse> showHotWordsSwitch(
        ShowHotWordsSwitchRequest &request
    );
    // 修改热词记录
    //
    // 该接口用于修改热词记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHotWordsResponse> updateHotWords(
        UpdateHotWordsRequest &request
    );
    // 修改热词功能开关
    //
    // 该接口用于修改热词功能开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHotWordsSwitchResponse> updateHotWordsSwitch(
        UpdateHotWordsSwitchRequest &request
    );

    // 创建指令集
    //
    // 该接口用于创建指令集。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstructionLibraryResponse> createInstructionLibrary(
        CreateInstructionLibraryRequest &request
    );
    // 删除指令集
    //
    // 该接口用于删除指令集。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstructionLibraryResponse> deleteInstructionLibrary(
        DeleteInstructionLibraryRequest &request
    );
    // 查询指令集列表
    //
    // 该接口用于查询指令集列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstructionLibraryResponse> listInstructionLibrary(
        ListInstructionLibraryRequest &request
    );
    // 查询指令集详情
    //
    // 该接口用于查询指令集详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstructionLibraryResponse> showInstructionLibrary(
        ShowInstructionLibraryRequest &request
    );
    // 修改指令集
    //
    // 该接口用于修改指令集。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstructionLibraryResponse> updateInstructionLibrary(
        UpdateInstructionLibraryRequest &request
    );

    // 创建指令
    //
    // 该接口用于创建指令。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstructionResponse> createInstruction(
        CreateInstructionRequest &request
    );
    // 删除指令
    //
    // 该接口用于删除指令。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstructionResponse> deleteInstruction(
        DeleteInstructionRequest &request
    );
    // 查询指令列表
    //
    // 该接口用于查询指令列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstructionResponse> listInstruction(
        ListInstructionRequest &request
    );
    // 查询指令详情
    //
    // 该接口用于查询指令详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstructionResponse> showInstruction(
        ShowInstructionRequest &request
    );
    // 修改指令
    //
    // 该接口用于修改指令。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstructionResponse> updateInstruction(
        UpdateInstructionRequest &request
    );

    // 创建智能直播间互动规则库
    //
    // 该接口用于创建智能直播间互动规则库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInteractionRuleGroupResponse> createInteractionRuleGroup(
        CreateInteractionRuleGroupRequest &request
    );
    // 删除智能直播间互动规则库
    //
    // 该接口用于删除智能直播间互动规则库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInteractionRuleGroupResponse> deleteInteractionRuleGroup(
        DeleteInteractionRuleGroupRequest &request
    );
    // 查询智能直播间互动规则库列表
    //
    // 该接口用于智能直播间互动规则库列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInteractionRuleGroupsResponse> listInteractionRuleGroups(
        ListInteractionRuleGroupsRequest &request
    );
    // 更新智能直播间互动规则库
    //
    // 该接口用于更新智能直播间互动规则库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInteractionRuleGroupResponse> updateInteractionRuleGroup(
        UpdateInteractionRuleGroupRequest &request
    );

    // 交互助手对话
    //
    // 该接口用于交互助手对话。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInteractiveChatResponse> createInteractiveChat(
        CreateInteractiveChatRequest &request
    );

    // 创建知识库意图和问法
    //
    // 该接口用于创建知识库意图和问法。一个意图包含一个主题，一个答案，若干个问法等。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateIntentAndQuestionResponse> createIntentAndQuestion(
        CreateIntentAndQuestionRequest &request
    );
    // 创建知识库意图
    //
    // 该接口用于创建知识库意图。一个意图包含一个主题，一个答案，若干个问法等。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateKnowledgeIntentResponse> createKnowledgeIntent(
        CreateKnowledgeIntentRequest &request
    );
    // 删除知识库意图
    //
    // 该接口用于删除知识库意图。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKnowledgeIntentResponse> deleteKnowledgeIntent(
        DeleteKnowledgeIntentRequest &request
    );
    // 查询知识库意图列表
    //
    // 该接口用于查询知识库意图列表。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKnowledgeIntentResponse> listKnowledgeIntent(
        ListKnowledgeIntentRequest &request
    );
    // 查询知识库意图详情
    //
    // 该接口用于查询知识库意图详情。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowKnowledgeIntentResponse> showKnowledgeIntent(
        ShowKnowledgeIntentRequest &request
    );
    // 修改知识库意图
    //
    // 该接口用于修改知识库意图。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKnowledgeIntentResponse> updateKnowledgeIntent(
        UpdateKnowledgeIntentRequest &request
    );

    // 知识库召回测试
    //
    // 该接口用于知识库召回测试。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckRecallKnowledgeLibraryResponse> checkRecallKnowledgeLibrary(
        CheckRecallKnowledgeLibraryRequest &request
    );
    // 创建知识库
    //
    // 该接口用于创建知识库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateKnowledgeLibraryResponse> createKnowledgeLibrary(
        CreateKnowledgeLibraryRequest &request
    );
    // 删除知识库
    //
    // 该接口用于删除知识库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKnowledgeLibraryResponse> deleteKnowledgeLibrary(
        DeleteKnowledgeLibraryRequest &request
    );
    // 查询知识库列表
    //
    // 该接口用于查询知识库列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKnowledgeLibraryResponse> listKnowledgeLibrary(
        ListKnowledgeLibraryRequest &request
    );
    // 查询知识库详情
    //
    // 该接口用于查询知识库详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowKnowledgeLibraryResponse> showKnowledgeLibrary(
        ShowKnowledgeLibraryRequest &request
    );
    // 修改知识库
    //
    // 该接口用于修改知识库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKnowledgeLibraryResponse> updateKnowledgeLibrary(
        UpdateKnowledgeLibraryRequest &request
    );

    // 批量创建知识库问法
    //
    // 该接口用于批量创建知识库问法。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateBatchKnowledgeQuestionResponse> createBatchKnowledgeQuestion(
        CreateBatchKnowledgeQuestionRequest &request
    );
    // 创建知识库问法
    //
    // 该接口用于创建知识库问法。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateKnowledgeQuestionResponse> createKnowledgeQuestion(
        CreateKnowledgeQuestionRequest &request
    );
    // 删除知识库问法
    //
    // 该接口用于删除知识库问法。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKnowledgeQuestionResponse> deleteKnowledgeQuestion(
        DeleteKnowledgeQuestionRequest &request
    );
    // 查询知识库问法列表
    //
    // 该接口用于查询知识库问法列表。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKnowledgeQuestionResponse> listKnowledgeQuestion(
        ListKnowledgeQuestionRequest &request
    );
    // 查询知识库问法详情
    //
    // 该接口用于查询知识库问法详情。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowKnowledgeQuestionResponse> showKnowledgeQuestion(
        ShowKnowledgeQuestionRequest &request
    );
    // 批量修改知识库问法
    //
    // 该接口用于批量修改知识库问法。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBatchKnowledgeQuestionResponse> updateBatchKnowledgeQuestion(
        UpdateBatchKnowledgeQuestionRequest &request
    );
    // 修改知识库问法
    //
    // 该接口用于修改知识库问法。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKnowledgeQuestionResponse> updateKnowledgeQuestion(
        UpdateKnowledgeQuestionRequest &request
    );

    // 创建知识库技能
    //
    // 该接口用于创建知识库技能。一个技能用于特定场景的交互问答，包含若干个意图等。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateKnowledgeSkillResponse> createKnowledgeSkill(
        CreateKnowledgeSkillRequest &request
    );
    // 删除知识库技能
    //
    // 该接口用于删除知识库技能。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKnowledgeSkillResponse> deleteKnowledgeSkill(
        DeleteKnowledgeSkillRequest &request
    );
    // 导出知识库技能
    //
    // 该接口用于导出知识库技能。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExportKnowledgeSkillResponse> exportKnowledgeSkill(
        ExportKnowledgeSkillRequest &request
    );
    // 查询知识库技能列表
    //
    // 该接口用于查询知识库技能列表。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKnowledgeSkillResponse> listKnowledgeSkill(
        ListKnowledgeSkillRequest &request
    );
    // 查询知识库技能详情
    //
    // 该接口用于查询知识库技能详情。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowKnowledgeSkillResponse> showKnowledgeSkill(
        ShowKnowledgeSkillRequest &request
    );
    // 修改知识库技能
    //
    // 该接口用于修改知识库技能。接口使用限制详见[API使用限制](metastudio_02_0000.xml)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKnowledgeSkillResponse> updateKnowledgeSkill(
        UpdateKnowledgeSkillRequest &request
    );

    // 创建第三方直播平台
    //
    // 该接口用于创建第三方直播平台。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLivePlatformResponse> createLivePlatform(
        CreateLivePlatformRequest &request
    );
    // 删除第三方直播平台信息
    //
    // 该接口用于删除第三方直播平台信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLivePlatformResponse> deleteLivePlatform(
        DeleteLivePlatformRequest &request
    );
    // 查询第三方直播平台商品列表
    //
    // 该接口用于查询第三方直播平台商品列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLivePlatformProductsResponse> listLivePlatformProducts(
        ListLivePlatformProductsRequest &request
    );
    // 查询直播平台列表
    //
    // 该接口用于查询直播平台列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLivePlatformsResponse> listLivePlatforms(
        ListLivePlatformsRequest &request
    );
    // 查询第三方直播平台信息
    //
    // 该接口用于查询第三方直播平台信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLivePlatformResponse> showLivePlatform(
        ShowLivePlatformRequest &request
    );
    // 更新第三方直播平台信息
    //
    // 该接口用于更新第三方直播平台信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLivePlatformResponse> updateLivePlatform(
        UpdateLivePlatformRequest &request
    );

    // 创建大语言模型配置
    //
    // 该接口用于创建大语言模型配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLlmConfigResponse> createLlmConfig(
        CreateLlmConfigRequest &request
    );
    // 删除大语言模型配置
    //
    // 该接口用于删除大语言模型配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLlmConfigResponse> deleteLlmConfig(
        DeleteLlmConfigRequest &request
    );
    // 查询大语言模型配置列表
    //
    // 该接口用于查询大语言模型配置列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLlmConfigResponse> listLlmConfig(
        ListLlmConfigRequest &request
    );
    // 查询大语言模型配置详情
    //
    // 该接口用于查询大语言模型配置详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLlmConfigResponse> showLlmConfig(
        ShowLlmConfigRequest &request
    );
    // 修改大语言模型配置
    //
    // 该接口用于修改大语言模型配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLlmConfigResponse> updateLlmConfig(
        UpdateLlmConfigRequest &request
    );

    // 创建MCP服务端对接配置
    //
    // 该接口用于创建MCP服务端对接配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMcpServerResponse> createMcpServer(
        CreateMcpServerRequest &request
    );
    // 删除MCP服务端对接配置
    //
    // 该接口用于删除MCP服务端对接配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMcpServerResponse> deleteMcpServer(
        DeleteMcpServerRequest &request
    );
    // 查询MCP服务端对接配置列表
    //
    // 该接口用于查询MCP服务端对接配置列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMcpServerResponse> listMcpServer(
        ListMcpServerRequest &request
    );
    // 查询MCP服务端对接配置详情
    //
    // 该接口用于查询MCP服务端对接配置详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMcpServerResponse> showMcpServer(
        ShowMcpServerRequest &request
    );
    // 修改MCP服务端对接配置
    //
    // 该接口用于修改MCP服务端对接配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMcpServerResponse> updateMcpServer(
        UpdateMcpServerRequest &request
    );

    // 创建一次性鉴权码
    //
    // 该接口用于创建一次性鉴权码，有效期5分钟，鉴权码只能使用一次，每次使用后需要重新获取。
    // &gt; 接口只能通过第三方后台调用，不能在浏览器前台直接调用，否则会有跨域问题。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateOnceCodeResponse> createOnceCode(
        CreateOnceCodeRequest &request
    );

    // 订购metastudio云服务产品
    //
    // 该接口用于订购MetaStudio服务的包周期,一次性,按需套餐包产品
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMetaStudioOrdersResponse> createMetaStudioOrders(
        CreateMetaStudioOrdersRequest &request
    );

    // 批量删除安抚话术
    //
    // 该接口用于批量删除安抚话术。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeletePacifyWordsResponse> batchDeletePacifyWords(
        BatchDeletePacifyWordsRequest &request
    );
    // 创建安抚话术
    //
    // 该接口用于创建安抚话术。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePacifyWordsResponse> createPacifyWords(
        CreatePacifyWordsRequest &request
    );
    // 删除安抚话术
    //
    // 该接口用于删除安抚话术。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePacifyWordsResponse> deletePacifyWords(
        DeletePacifyWordsRequest &request
    );
    // 查询安抚话术列表
    //
    // 该接口用于查询安抚话术列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPacifyWordsResponse> listPacifyWords(
        ListPacifyWordsRequest &request
    );
    // 查询安抚话术详情
    //
    // 该接口用于查询安抚话术详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPacifyWordsResponse> showPacifyWords(
        ShowPacifyWordsRequest &request
    );
    // 查询安抚话术意图
    //
    // 该接口用于查询安抚话术意图。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPacifyWordsIntentResponse> showPacifyWordsIntent(
        ShowPacifyWordsIntentRequest &request
    );
    // 查询安抚话术功能开关
    //
    // 该接口用于查询安抚话术功能开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPacifyWordsSwitchResponse> showPacifyWordsSwitch(
        ShowPacifyWordsSwitchRequest &request
    );
    // 查询安抚话术等待触发时长
    //
    // 该接口用于查询等待触发时长。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPacifyWordsTriggerTimeResponse> showPacifyWordsTriggerTime(
        ShowPacifyWordsTriggerTimeRequest &request
    );
    // 修改安抚话术
    //
    // 该接口用于修改安抚话术。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePacifyWordsResponse> updatePacifyWords(
        UpdatePacifyWordsRequest &request
    );
    // 修改安抚话术功能开关
    //
    // 该接口用于修改安抚话术功能开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePacifyWordsSwitchResponse> updatePacifyWordsSwitch(
        UpdatePacifyWordsSwitchRequest &request
    );
    // 修改安抚话术等待触发时长
    //
    // 该接口用于修改安抚话术等待触发时长。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePacifyWordsTriggerTimeResponse> updatePacifyWordsTriggerTime(
        UpdatePacifyWordsTriggerTimeRequest &request
    );

    // 基于图片URL创建照片建模任务
    //
    // 该接口用于从URL中获取图片进行照片建模任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePictureModelingByUrlJobResponse> createPictureModelingByUrlJob(
        CreatePictureModelingByUrlJobRequest &request
    );
    // 创建照片建模任务
    //
    // 该接口用于创建风格化照片建模任务。通过上传照片，生成风格化数字人模型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePictureModelingJobResponse> createPictureModelingJob(
        CreatePictureModelingJobRequest &request
    );
    // 照片建模任务列表查询
    //
    // 该接口用于查询风格化照片建模任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPictureModelingJobsResponse> listPictureModelingJobs(
        ListPictureModelingJobsRequest &request
    );
    // 照片建模任务详情查询
    //
    // 该接口用于风格化查询照片建模任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPictureModelingJobResponse> showPictureModelingJob(
        ShowPictureModelingJobRequest &request
    );

    // 创建插件配置
    //
    // 该接口用于创建插件配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePluginConfigResponse> createPluginConfig(
        CreatePluginConfigRequest &request
    );
    // 删除插件配置
    //
    // 该接口用于删除插件配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePluginConfigResponse> deletePluginConfig(
        DeletePluginConfigRequest &request
    );
    // 查询插件配置列表
    //
    // 该接口用于查询插件配置列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPluginConfigResponse> listPluginConfig(
        ListPluginConfigRequest &request
    );
    // 查询插件配置详情
    //
    // 该接口用于查询插件配置详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPluginConfigResponse> showPluginConfig(
        ShowPluginConfigRequest &request
    );
    // 查询插件配置默认信息
    //
    // 该接口用于查询插件配置默认信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPluginConfigDefaultInfoResponse> showPluginConfigDefaultInfo(
        ShowPluginConfigDefaultInfoRequest &request
    );
    // 修改插件配置
    //
    // 该接口用于修改插件配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePluginConfigResponse> updatePluginConfig(
        UpdatePluginConfigRequest &request
    );

    // 创建商品
    //
    // Create product
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProductResponse> createProduct(
        CreateProductRequest &request
    );
    // 删除商品
    //
    // 删除商品
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProductResponse> deleteProduct(
        DeleteProductRequest &request
    );
    // 查询商品列表
    //
    // 查询商品列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProductsResponse> listProducts(
        ListProductsRequest &request
    );
    // 商品资产组合配置
    //
    // 商品资产组合配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetProductAssetResponse> setProductAsset(
        SetProductAssetRequest &request
    );
    // 查询商品详情
    //
    // Show product
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProductResponse> showProduct(
        ShowProductRequest &request
    );
    // 更新商品
    //
    // Update product
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProductResponse> updateProduct(
        UpdateProductRequest &request
    );

    // 创建问答对
    //
    // 该接口用于创建问答对。一个问答对包含一个标准问题，一个答案，若干个相似问题等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateQuestionAnswerResponse> createQuestionAnswer(
        CreateQuestionAnswerRequest &request
    );
    // 删除问答对
    //
    // 该接口用于删除问答对。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteQuestionAnswerResponse> deleteQuestionAnswer(
        DeleteQuestionAnswerRequest &request
    );
    // 查询问答对列表
    //
    // 该接口用于查询问答对列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQuestionAnswerResponse> listQuestionAnswer(
        ListQuestionAnswerRequest &request
    );
    // 查询问答对详情
    //
    // 该接口用于查询问答对详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQuestionAnswerResponse> showQuestionAnswer(
        ShowQuestionAnswerRequest &request
    );
    // 修改问答对
    //
    // 该接口用于修改问答对。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateQuestionAnswerResponse> updateQuestionAnswer(
        UpdateQuestionAnswerRequest &request
    );

    // 创建应用
    //
    // 该接口用于创建应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRobotResponse> createRobot(
        CreateRobotRequest &request
    );
    // 删除应用
    //
    // 该接口用于删除应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRobotResponse> deleteRobot(
        DeleteRobotRequest &request
    );
    // 查询应用列表
    //
    // 该接口用于查询应用列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRobotResponse> listRobot(
        ListRobotRequest &request
    );
    // 查询应用详情
    //
    // 该接口用于查询应用详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRobotResponse> showRobot(
        ShowRobotRequest &request
    );
    // 修改应用
    //
    // 该接口用于修改应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRobotResponse> updateRobot(
        UpdateRobotRequest &request
    );
    // 校验应用
    //
    // 该接口用于校验应用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ValidateRobotResponse> validateRobot(
        ValidateRobotRequest &request
    );

    // 创建角色
    //
    // 该接口用于创建角色。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRoleResponse> createRole(
        CreateRoleRequest &request
    );
    // 删除角色
    //
    // 该接口用于删除角色。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRoleResponse> deleteRole(
        DeleteRoleRequest &request
    );
    // 查询角色列表
    //
    // 该接口用于查询角色列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRoleResponse> listRole(
        ListRoleRequest &request
    );
    // 查询角色详情
    //
    // 该接口用于查询角色详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRoleResponse> showRole(
        ShowRoleRequest &request
    );
    // 修改角色
    //
    // 该接口用于修改角色。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRoleResponse> updateRole(
        UpdateRoleRequest &request
    );

    // 创建智能交互对话
    //
    // 该接口用于创建智能交互对话。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSmartChatRoomResponse> createSmartChatRoom(
        CreateSmartChatRoomRequest &request
    );
    // 删除智能交互对话
    //
    // 该接口用于删除智能交互对话。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSmartChatRoomResponse> deleteSmartChatRoom(
        DeleteSmartChatRoomRequest &request
    );
    // 查询智能交互对话列表
    //
    // 该接口用于智能交互对话列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSmartChatRoomsResponse> listSmartChatRooms(
        ListSmartChatRoomsRequest &request
    );
    // 查询智能交互对话详情
    //
    // 该接口用于查询智能交互对话详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSmartChatRoomResponse> showSmartChatRoom(
        ShowSmartChatRoomRequest &request
    );
    // 更新智能交互对话信息
    //
    // 该接口用于智能交互对话信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSmartChatRoomResponse> updateSmartChatRoom(
        UpdateSmartChatRoomRequest &request
    );

    // 批量确认命令
    //
    // 该接口用于批量确认命令列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchConfirmLiveCommandsResponse> batchConfirmLiveCommands(
        BatchConfirmLiveCommandsRequest &request
    );
    // 控制数字人直播过程
    //
    // 该接口用于控制数字人直播过程。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteSmartLiveCommandResponse> executeSmartLiveCommand(
        ExecuteSmartLiveCommandRequest &request
    );
    // 查询某个智能直播间下直播任务列表
    //
    // 该接口用于查询某个智能直播间的直播任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSmartLiveResponse> listSmartLive(
        ListSmartLiveRequest &request
    );
    // 查询租户所有数字人直播任务列表
    //
    // 该接口用于查询租户所有数字人智能直播任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSmartLiveJobsResponse> listSmartLiveJobs(
        ListSmartLiveJobsRequest &request
    );
    // 查询租户未确认的互动规则命令列表
    //
    // 该接口用于查询租户未确认的互动规则命令列表，仅限于需要做二次确认的特定用户使用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSmartLiveRuleCommandsResponse> listSmartLiveRuleCommands(
        ListSmartLiveRuleCommandsRequest &request
    );
    // 查询租户未确认的剧本命令列表
    //
    // 该接口用于查询租户未确认的剧本命令列表，仅限于需要做二次确认的特定用户使用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSmartLiveScriptCommandsResponse> listSmartLiveScriptCommands(
        ListSmartLiveScriptCommandsRequest &request
    );
    // 上报直播间事件
    //
    // 该接口用于上报直播间事件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<LiveEventReportResponse> liveEventReport(
        LiveEventReportRequest &request
    );
    // 查询数字人智能直播任务详情
    //
    // 该接口用于查询数字人智能直播任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSmartLiveResponse> showSmartLive(
        ShowSmartLiveRequest &request
    );
    // 启动数字人智能直播任务
    //
    // 该接口用于启动数字人智能直播任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartSmartLiveResponse> startSmartLive(
        StartSmartLiveRequest &request
    );
    // 结束数字人智能直播任务
    //
    // 该接口用于结束数字人智能直播任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopSmartLiveResponse> stopSmartLive(
        StopSmartLiveRequest &request
    );

    // 直播间确认
    //
    // 该接口用直播间二次确认
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ConfirmSmarLiveRoomResponse> confirmSmarLiveRoom(
        ConfirmSmarLiveRoomRequest &request
    );
    // 创建智能直播间
    //
    // 该接口用于创建智能直播间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSmartLiveRoomResponse> createSmartLiveRoom(
        CreateSmartLiveRoomRequest &request
    );
    // 删除智能直播间
    //
    // 该接口用于删除智能直播间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSmartLiveRoomResponse> deleteSmartLiveRoom(
        DeleteSmartLiveRoomRequest &request
    );
    // 查询智能直播间列表
    //
    // 该接口用于智能直播间列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSmartLiveRoomsResponse> listSmartLiveRooms(
        ListSmartLiveRoomsRequest &request
    );
    // 查询智能直播间剧本详情
    //
    // 该接口用于查询智能直播间剧本详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSmartLiveRoomResponse> showSmartLiveRoom(
        ShowSmartLiveRoomRequest &request
    );
    // 更新智能直播间信息
    //
    // 该接口用于智能直播间信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSmartLiveRoomResponse> updateSmartLiveRoom(
        UpdateSmartLiveRoomRequest &request
    );

    // 查询数字人风格列表
    //
    // 查询数字人风格列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStylesResponse> listStyles(
        ListStylesRequest &request
    );

    // 创建分身数字人视频字幕文件
    //
    // 该接口用于创建分身数字人视频字幕文件任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSubtitleFileResponse> createSubtitleFile(
        CreateSubtitleFileRequest &request
    );
    // 查询分身数字人视频字幕文件任务详情
    //
    // 该接口用于查询分身数字人视频字幕文件任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSubtitleFileResponse> showSubtitleFile(
        ShowSubtitleFileRequest &request
    );

    // 统计时间段内过期的资源数量
    //
    // 统计指定时间段内即将过期的包周期与一次性资源数量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountTenantResourcesResponse> countTenantResources(
        CountTenantResourcesRequest &request
    );
    // 查看租户资源列表
    //
    // 查看租户资源列表。
    //  &gt; 按需套餐包用量本接口无法查询，需要调用CBC接口查询，详见[按需套餐包用量查询](https://cbc.huaweicloud.com/bm/support/api-apidt/CBCInterface_0001239.html)和[查询资源包信息](https://cbc.huaweicloud.com/bm/support/api-apidt/CBCInterface_0000511.html)。
    // &gt; 各种资源的计费方式请参考[计费说明](https://support.huaweicloud.com/productdesc-metastudio/metastudio_01_0006.html)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTenantResourcesResponse> listTenantResources(
        ListTenantResourcesRequest &request
    );
    // 查看租户资源用量信息
    //
    // 查询租户一次性和包周期（包年/包月）资源用量信息。
    // &gt; 按需套餐包用量本接口无法查询，需要调用CBC接口查询，详见[按需套餐包用量查询](https://cbc.huaweicloud.com/bm/support/api-apidt/CBCInterface_0001239.html)和[查询资源包信息](https://cbc.huaweicloud.com/bm/support/api-apidt/CBCInterface_0000511.html)。
    // &gt; 各种资源的计费方式请参考[计费说明](https://support.huaweicloud.com/productdesc-metastudio/metastudio_01_0006.html)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowResourceUsageResponse> showResourceUsage(
        ShowResourceUsageRequest &request
    );

    // 提交语音训练任务
    //
    // 提交训练任务,执行该接口后,任务会进入审核状态,审核完成后会等待训练。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CommitVoiceTrainingJobResponse> commitVoiceTrainingJob(
        CommitVoiceTrainingJobRequest &request
    );
    // 确认在线录音结果
    //
    // 确认在线录音结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ConfirmTrainingSegmentResponse> confirmTrainingSegment(
        ConfirmTrainingSegmentRequest &request
    );
    // 创建高级版语音训练任务
    //
    // 用户创建语音训练高级版任务，该接口会返回一个obs上传地址，用于上传语音文件。
    // 
    // 语音文件为一段WAV格式的长音频文件，仅支持将语音文件打包成zip压缩格式上传。
    // 
    // 文件上传后，调用“提交语音训练任务”接口，启动审核和训练。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTrainingAdvanceJobResponse> createTrainingAdvanceJob(
        CreateTrainingAdvanceJobRequest &request
    );
    // 创建基础版语音训练任务
    //
    // 用户创建语音训练基础版任务，该接口会返回一个obs上传地址，用于上传语音文件。
    // 
    // 支持2种方式上传语音文件：
    // * 语音文件和文本文件打包成zip上传：语音文件已经切分成20个wav文件，每个语音文件对应一个txt文本文件，所有文件打包成zip文件。语音文件命名规则：0.wav~19.wav；文本文件命名规则：0.txt~19.txt。
    // * 语音文件和文本文件逐句上传：每次上传一句语料的语音文件和文本文件，再调用“确认在线录音结果”接口确认语音和文本内容是否一致。确认成功后再上传和确认下一句。
    // 
    // 文件上传后，调用“提交语音训练任务”接口，启动审核和训练。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTrainingBasicJobResponse> createTrainingBasicJob(
        CreateTrainingBasicJobRequest &request
    );
    // 创建进阶版语音训练任务
    //
    // 用户创建语音训练进阶版任务，该接口会返回一个obs上传地址，用于上传语音文件。
    // 
    // 支持2种方式上传语音文件：
    // * 语音文件和文本文件打包成zip上传：语音文件已经切分成100个wav文件，每个语音文件对应一个txt文本文件，所有文件打包成zip文件。语音文件命名规则：0.wav~99.wav；文本文件命名规则：0.txt~99.txt。
    // * 语音文件和文本文件逐句上传：每次上传一句语料的语音文件和文本文件，再调用“确认在线录音结果”接口确认语音和文本内容是否一致。确认成功后再上传和确认下一句。
    // 
    // 文件上传后，调用“提交语音训练任务”接口，启动审核和训练。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTrainingMiddleJobResponse> createTrainingMiddleJob(
        CreateTrainingMiddleJobRequest &request
    );
    // 删除语音训练任务
    //
    // 删除语音训练任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVoiceTrainingJobResponse> deleteVoiceTrainingJob(
        DeleteVoiceTrainingJobRequest &request
    );
    // 查询任务操作日志
    //
    // 查询任务操作日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobOperationLogResponse> listJobOperationLog(
        ListJobOperationLogRequest &request
    );
    // 查询语音训练任务列表
    //
    // 查询语音训练任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVoiceTrainingJobResponse> listVoiceTrainingJob(
        ListVoiceTrainingJobRequest &request
    );
    // 设置任务批次
    //
    // 用户设置任务批次，该接口用于批量任务管理场景，设置任务的批次
    // * 需要开通NA租户权限后才能正常调用
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetJobBatchNameResponse> setJobBatchName(
        SetJobBatchNameRequest &request
    );
    // 获取语音训练任务审核结果
    //
    // 获取语音训练任务审核结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobAuditResultResponse> showJobAuditResult(
        ShowJobAuditResultRequest &request
    );
    // 获取语音文件上传地址
    //
    // 获取语音文件上传地址
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobUploadingAddressResponse> showJobUploadingAddress(
        ShowJobUploadingAddressRequest &request
    );
    // 查询用户配置的个性化音频时长
    //
    // 查询用户配置的个性化音频时长
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTenantDurationCfgResponse> showTenantDurationCfg(
        ShowTenantDurationCfgRequest &request
    );
    // 获取在线录音确认结果
    //
    // 获取在线录音确认结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTrainingSegmentInfoResponse> showTrainingSegmentInfo(
        ShowTrainingSegmentInfoRequest &request
    );
    // 查询语音训练任务详情
    //
    // 查询语音训练任务详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVoiceTrainingJobResponse> showVoiceTrainingJob(
        ShowVoiceTrainingJobRequest &request
    );

    // 创建分身数字人模型训练任务
    //
    // 该接口用于创建分身数字人模型训练任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<Create2dModelTrainingJobResponse> create2dModelTrainingJob(
        Create2dModelTrainingJobRequest &request
    );
    // 删除分身数字人模型训练任务
    //
    // 该接口用于删除分身数字人模型训练任务。同时需要删除训练任务相关的训练视频、身份证照片、授权文件、模型资产等。
    // &gt; * 该接口应当在任务处于以下状态时调用：WAIT_FILE_UPLOAD、AUTO_VERIFY_FAILED、MANUAL_VERIFYING、MANUAL_VERIFY_FAILED、TRAINING_DATA_PREPROCESS_FAILED、TRAIN_FAILED、INFERENCE_DATA_PREPROCESS_FAILED、JOB_SUCCESS、WAIT_USER_CONFIRM、JOB_REJECT、JOB_FINISH
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<Delete2dModelTrainingJobResponse> delete2dModelTrainingJob(
        Delete2dModelTrainingJobRequest &request
    );
    // 租户执行分身数字人模型训练任务命令
    //
    // 该接口用于租户执行分身数字人模型训练任务命令，如提交训练审核等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<Execute2dModelTrainingCommandByUserResponse> execute2dModelTrainingCommandByUser(
        Execute2dModelTrainingCommandByUserRequest &request
    );
    // 查询分身数字人模型训练任务列表
    //
    // 该接口用于查询分身数字人模型训练任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<List2dModelTrainingJobResponse> list2dModelTrainingJob(
        List2dModelTrainingJobRequest &request
    );
    // 查询分身数字人模型训练任务详情
    //
    // 该接口用于查询分身数字人模型训练任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<Show2dModelTrainingJobResponse> show2dModelTrainingJob(
        Show2dModelTrainingJobRequest &request
    );
    // 更新分身数字人模型训练任务
    //
    // 该接口用于更新分身数字人模型训练任务。用于在自动审核或者人工审核不通过情况下，更新训练视频、身份证照片等。
    // &gt; * 该接口只能在AUTO_VERIFY_FAILED或者MANUAL_VERIFY_FAILED状态下调用
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<Update2dModelTrainingJobResponse> update2dModelTrainingJob(
        Update2dModelTrainingJobRequest &request
    );

    // 创建语音驱动表情动画任务
    //
    // 该接口用于创建驱动数字人表情的任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFacialAnimationsResponse> createFacialAnimations(
        CreateFacialAnimationsRequest &request
    );
    // 创建语音驱动任务
    //
    // 该接口用于创建驱动数字人表情、动作及语音的任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTtsaResponse> createTtsa(
        CreateTtsaRequest &request
    );
    // 获取语音驱动表情数据
    //
    // 该接口用于获取生成的数字人表情驱动数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFacialAnimationsDataResponse> listFacialAnimationsData(
        ListFacialAnimationsDataRequest &request
    );
    // 获取语音驱动数据
    //
    // 该接口用于获取生成的数字人驱动数据，包括语音、表情、动作等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTtsaDataResponse> listTtsaData(
        ListTtsaDataRequest &request
    );
    // 获取语音驱动任务列表
    //
    // 该接口用于查询驱动数字人表情、动作及语音的任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTtsaJobsResponse> listTtsaJobs(
        ListTtsaJobsRequest &request
    );

    // 校验音色模型是否可用（自研和第三方音色）
    //
    // 该接口用于校验音色模型是否可用，模型可用返回模型信息，不可用返回具体不可用的原因
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckVoiceAssetResponse> checkVoiceAsset(
        CheckVoiceAssetRequest &request
    );
    // 获取TTS语音合成任务记录
    //
    // 该接口用于获取TTS语音合成任务记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTtsJobResponse> showTtsJob(
        ShowTtsJobRequest &request
    );
    // 获取英文单词音标
    //
    // 根据英文单词返回对应音标列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTtsPhoneticSymbolResponse> showTtsPhoneticSymbol(
        ShowTtsPhoneticSymbolRequest &request
    );

    // 创建TTS异步任务
    //
    // 该接口用于对外生成音频文件。每个预置音色的计费标准详见[预置音色计费标准](metastudio_02_0060.xml)。
    // 
    // &gt; 使用本接口前，需要在MetaStudio控制台服务概览页面，开通“声音合成”的按需计费。
    // &gt; 详细操作为：单击“声音合成”卡片中的“去开通”，在弹出的“开通按需计费服务提示”对话框中，勾选同意协议。单击“确定”，开通按需计费。
    // &gt; 如需使用第三方声音进行语音合成，请购买出门问问声音套餐，操作请参考《用户指南》的“购买出门问问声音套餐”章节。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAsyncTtsJobResponse> createAsyncTtsJob(
        CreateAsyncTtsJobRequest &request
    );
    // 创建TTS试听任务
    //
    // 该接口用于创建生成播报内容的语音试听文件任务。
    // 
    // [第三方音色试听需要收费，收费标准参考：https://marketplace.huaweicloud.com/product/OFFI919400645308506112#productid&#x3D;OFFI919400645308506112](tag:hc)
    // 
    // [第三方音色试听需要收费，收费标准参考：https://marketplace.huaweicloud.com/intl/contents/939bf377-3005-472b-a4e2-383911e6102f](tag:hk)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTtsAuditionResponse> createTtsAudition(
        CreateTtsAuditionRequest &request
    );
    // 获取TTS异步任务
    //
    // 该接口用于获取TTS音频文件下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAsyncTtsJobResponse> showAsyncTtsJob(
        ShowAsyncTtsJobRequest &request
    );
    // 获取TTS试听文件
    //
    // 该接口用于获取TTS试听文件下载链接，返回List中包含当前已生产的试听文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTtsAuditionFileResponse> showTtsAuditionFile(
        ShowTtsAuditionFileRequest &request
    );

    // 设置TTS租户级自定义读法配置
    //
    // 该接口用于设置TTS租户级自定义读法配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTtscVocabularyConfigsResponse> createTtscVocabularyConfigs(
        CreateTtscVocabularyConfigsRequest &request
    );
    // 设置TTS租户级词表分组配置
    //
    // 该接口用于设置TTS租户级词表分组配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTtscVocabularyGroupsResponse> createTtscVocabularyGroups(
        CreateTtscVocabularyGroupsRequest &request
    );
    // 删除TTS租户级自定义读法配置
    //
    // 该接口用于删除TTS租户级自定义读法配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTtscVocabularyConfigsResponse> deleteTtscVocabularyConfigs(
        DeleteTtscVocabularyConfigsRequest &request
    );
    // 删除TTS租户级词表分组
    //
    // 该接口用于删除TTS租户级词表分组配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTtscVocabularyGroupsResponse> deleteTtscVocabularyGroups(
        DeleteTtscVocabularyGroupsRequest &request
    );
    // 获取TTS租户级自定义读法配置
    //
    // 该接口用于获取TTS租户级自定义读法配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTtscVocabularyConfigsResponse> listTtscVocabularyConfigs(
        ListTtscVocabularyConfigsRequest &request
    );
    // 获取TTS租户级词表分组列表
    //
    // 该接口用于获取TTS租户级词表分组列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTtscVocabularyGroupsResponse> listTtscVocabularyGroups(
        ListTtscVocabularyGroupsRequest &request
    );
    // 设置租户级配置
    //
    // 该接口用于设置租户级配置，当前用于租户级自定义读法配置的全局开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SaveTtscTenantConfigsResponse> saveTtscTenantConfigs(
        SaveTtscTenantConfigsRequest &request
    );
    // 修改TTS租户级自定义读法配置
    //
    // 该接口用于修改TTS租户级自定义读法配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SaveTtscVocabularyConfigsResponse> saveTtscVocabularyConfigs(
        SaveTtscVocabularyConfigsRequest &request
    );
    // 设置TTS租户级词表分组的资产列表
    //
    // 该接口用于设置TTS租户级词表分组的资产列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetTtscGroupAssetsResponse> setTtscGroupAssets(
        SetTtscGroupAssetsRequest &request
    );
    // 获取租户级全局配置
    //
    // 该接口用于获取租户级全局配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVocabularySwitchConfigsResponse> showVocabularySwitchConfigs(
        ShowVocabularySwitchConfigsRequest &request
    );
    // TTS租户级词表分组重命名
    //
    // 该接口用于对TTS租户级词表分组重命名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTtscVocabularyGroupsResponse> updateTtscVocabularyGroups(
        UpdateTtscVocabularyGroupsRequest &request
    );

    // 创建视频驱动任务
    //
    // 该接口用于创建视频驱动任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVideoMotionCaptureJobResponse> createVideoMotionCaptureJob(
        CreateVideoMotionCaptureJobRequest &request
    );
    // 控制数字人驱动
    //
    // 该接口用于控制数字人驱动。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteVideoMotionCaptureCommandResponse> executeVideoMotionCaptureCommand(
        ExecuteVideoMotionCaptureCommandRequest &request
    );
    // 查询视频驱动任务列表
    //
    // 该接口用于查询视频驱动任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVideoMotionCaptureJobsResponse> listVideoMotionCaptureJobs(
        ListVideoMotionCaptureJobsRequest &request
    );
    // 查询视频驱动任务详情
    //
    // 该接口用于查询视频驱动任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVideoMotionCaptureJobResponse> showVideoMotionCaptureJob(
        ShowVideoMotionCaptureJobRequest &request
    );
    // 停止视频驱动任务
    //
    // 该接口用于停止视频驱动任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopVideoMotionCaptureJobResponse> stopVideoMotionCaptureJob(
        StopVideoMotionCaptureJobRequest &request
    );

    // 复制视频制作剧本
    //
    // 该接口用于复制视频制作剧本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyVideoScriptsResponse> copyVideoScripts(
        CopyVideoScriptsRequest &request
    );
    // 创建视频制作剧本
    //
    // 该接口用于创建视频制作剧本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVideoScriptsResponse> createVideoScripts(
        CreateVideoScriptsRequest &request
    );
    // 删除视频制作剧本
    //
    // 该接口用于删除视频制作剧本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVideoScriptResponse> deleteVideoScript(
        DeleteVideoScriptRequest &request
    );
    // 查询视频制作剧本列表
    //
    // 该接口用于查询视频制作剧本列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVideoScriptsResponse> listVideoScripts(
        ListVideoScriptsRequest &request
    );
    // 查询视频制作剧本详情
    //
    // 该接口用于查询视频制作剧本详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVideoScriptResponse> showVideoScript(
        ShowVideoScriptRequest &request
    );
    // 更新视频制作剧本
    //
    // 该接口用于更新视频制作剧本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateVideoScriptResponse> updateVideoScript(
        UpdateVideoScriptRequest &request
    );

    // 创建欢迎词
    //
    // 该接口用于创建欢迎词。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWelcomeSpeechResponse> createWelcomeSpeech(
        CreateWelcomeSpeechRequest &request
    );
    // 删除欢迎词
    //
    // 该接口用于删除欢迎词。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWelcomeSpeechResponse> deleteWelcomeSpeech(
        DeleteWelcomeSpeechRequest &request
    );
    // 查询欢迎词列表
    //
    // 该接口用于查询欢迎词列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWelcomeSpeechResponse> listWelcomeSpeech(
        ListWelcomeSpeechRequest &request
    );
    // 查询欢迎词详情
    //
    // 该接口用于查询欢迎词详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWelcomeSpeechResponse> showWelcomeSpeech(
        ShowWelcomeSpeechRequest &request
    );
    // 查询欢迎词功能开关
    //
    // 该接口用于查询欢迎词功能开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWelcomeSpeechSwitchResponse> showWelcomeSpeechSwitch(
        ShowWelcomeSpeechSwitchRequest &request
    );
    // 修改欢迎词
    //
    // 该接口用于修改欢迎词。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWelcomeSpeechResponse> updateWelcomeSpeech(
        UpdateWelcomeSpeechRequest &request
    );
    // 修改欢迎词功能开关
    //
    // 该接口用于修改欢迎词功能开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWelcomeSpeechSwitchResponse> updateWelcomeSpeechSwitch(
        UpdateWelcomeSpeechSwitchRequest &request
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

template class HUAWEICLOUD_METASTUDIO_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Metastudio::V1::MetaStudioClient>;

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MetaStudioClient_H_

