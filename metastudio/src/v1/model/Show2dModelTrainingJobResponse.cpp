

#include "huaweicloud/metastudio/v1/model/Show2dModelTrainingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Show2dModelTrainingJobResponse::Show2dModelTrainingJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    coverDownloadUrl_ = "";
    coverDownloadUrlIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    contact_ = "";
    contactIsSet_ = false;
    batchName_ = "";
    batchNameIsSet_ = false;
    tagsIsSet_ = false;
    modelVersion_ = "";
    modelVersionIsSet_ = false;
    mattingType_ = "";
    mattingTypeIsSet_ = false;
    modelResolution_ = "";
    modelResolutionIsSet_ = false;
    appUserId_ = "";
    appUserIdIsSet_ = false;
    isFlexus_ = false;
    isFlexusIsSet_ = false;
    isOnlyHumanModel_ = false;
    isOnlyHumanModelIsSet_ = false;
    trainingVideoDownloadUrl_ = "";
    trainingVideoDownloadUrlIsSet_ = false;
    idCardImage1DownloadUrl_ = "";
    idCardImage1DownloadUrlIsSet_ = false;
    idCardImage2DownloadUrl_ = "";
    idCardImage2DownloadUrlIsSet_ = false;
    grantFileDownloadUrl_ = "";
    grantFileDownloadUrlIsSet_ = false;
    preBeautyImageDownloadUrl_ = "";
    preBeautyImageDownloadUrlIsSet_ = false;
    actionVideoDownloadUrl_ = "";
    actionVideoDownloadUrlIsSet_ = false;
    postBeautyImageDownloadUrl_ = "";
    postBeautyImageDownloadUrlIsSet_ = false;
    audioFileDownloadUrl_ = "";
    audioFileDownloadUrlIsSet_ = false;
    operationLogsIsSet_ = false;
    verifyVideoMattingInfoIsSet_ = false;
    commentLogsIsSet_ = false;
    samplesIsSet_ = false;
    isMaskFileUploaded_ = false;
    isMaskFileUploadedIsSet_ = false;
    maskFileDownloadUrl_ = "";
    maskFileDownloadUrlIsSet_ = false;
    verifyVideoDownloadUrl_ = "";
    verifyVideoDownloadUrlIsSet_ = false;
    markableVideoDownloadUrl_ = "";
    markableVideoDownloadUrlIsSet_ = false;
    traningVideoMarkInfoIsSet_ = false;
    inferenceDataProcessVideoMarkInfoIsSet_ = false;
    inferenceDataProcessActionMarkInfoIsSet_ = false;
    inferenceDataProcessChatActionMarkInfoIsSet_ = false;
    inferenceDataProcessEyeCorrectionMarkInfoIsSet_ = false;
    isBackgroundReplacement_ = false;
    isBackgroundReplacementIsSet_ = false;
    workerTypeIsSet_ = false;
    voiceTrainJobId_ = "";
    voiceTrainJobIdIsSet_ = false;
    flexusRetryCount_ = 0;
    flexusRetryCountIsSet_ = false;
    audioSourceType_ = "";
    audioSourceTypeIsSet_ = false;
    supportedServiceIsSet_ = false;
    allocatedResourceIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

Show2dModelTrainingJobResponse::~Show2dModelTrainingJobResponse() = default;

void Show2dModelTrainingJobResponse::validate()
{
}

web::json::value Show2dModelTrainingJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(coverDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_download_url")] = ModelBase::toJson(coverDownloadUrl_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("last_update_time")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(contactIsSet_) {
        val[utility::conversions::to_string_t("contact")] = ModelBase::toJson(contact_);
    }
    if(batchNameIsSet_) {
        val[utility::conversions::to_string_t("batch_name")] = ModelBase::toJson(batchName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(modelVersionIsSet_) {
        val[utility::conversions::to_string_t("model_version")] = ModelBase::toJson(modelVersion_);
    }
    if(mattingTypeIsSet_) {
        val[utility::conversions::to_string_t("matting_type")] = ModelBase::toJson(mattingType_);
    }
    if(modelResolutionIsSet_) {
        val[utility::conversions::to_string_t("model_resolution")] = ModelBase::toJson(modelResolution_);
    }
    if(appUserIdIsSet_) {
        val[utility::conversions::to_string_t("app_user_id")] = ModelBase::toJson(appUserId_);
    }
    if(isFlexusIsSet_) {
        val[utility::conversions::to_string_t("is_flexus")] = ModelBase::toJson(isFlexus_);
    }
    if(isOnlyHumanModelIsSet_) {
        val[utility::conversions::to_string_t("is_only_human_model")] = ModelBase::toJson(isOnlyHumanModel_);
    }
    if(trainingVideoDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("training_video_download_url")] = ModelBase::toJson(trainingVideoDownloadUrl_);
    }
    if(idCardImage1DownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("id_card_image1_download_url")] = ModelBase::toJson(idCardImage1DownloadUrl_);
    }
    if(idCardImage2DownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("id_card_image2_download_url")] = ModelBase::toJson(idCardImage2DownloadUrl_);
    }
    if(grantFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("grant_file_download_url")] = ModelBase::toJson(grantFileDownloadUrl_);
    }
    if(preBeautyImageDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("pre_beauty_image_download_url")] = ModelBase::toJson(preBeautyImageDownloadUrl_);
    }
    if(actionVideoDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("action_video_download_url")] = ModelBase::toJson(actionVideoDownloadUrl_);
    }
    if(postBeautyImageDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("post_beauty_image_download_url")] = ModelBase::toJson(postBeautyImageDownloadUrl_);
    }
    if(audioFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_file_download_url")] = ModelBase::toJson(audioFileDownloadUrl_);
    }
    if(operationLogsIsSet_) {
        val[utility::conversions::to_string_t("operation_logs")] = ModelBase::toJson(operationLogs_);
    }
    if(verifyVideoMattingInfoIsSet_) {
        val[utility::conversions::to_string_t("verify_video_matting_info")] = ModelBase::toJson(verifyVideoMattingInfo_);
    }
    if(commentLogsIsSet_) {
        val[utility::conversions::to_string_t("comment_logs")] = ModelBase::toJson(commentLogs_);
    }
    if(samplesIsSet_) {
        val[utility::conversions::to_string_t("samples")] = ModelBase::toJson(samples_);
    }
    if(isMaskFileUploadedIsSet_) {
        val[utility::conversions::to_string_t("is_mask_file_uploaded")] = ModelBase::toJson(isMaskFileUploaded_);
    }
    if(maskFileDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("mask_file_download_url")] = ModelBase::toJson(maskFileDownloadUrl_);
    }
    if(verifyVideoDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("verify_video_download_url")] = ModelBase::toJson(verifyVideoDownloadUrl_);
    }
    if(markableVideoDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("markable_video_download_url")] = ModelBase::toJson(markableVideoDownloadUrl_);
    }
    if(traningVideoMarkInfoIsSet_) {
        val[utility::conversions::to_string_t("traning_video_mark_info")] = ModelBase::toJson(traningVideoMarkInfo_);
    }
    if(inferenceDataProcessVideoMarkInfoIsSet_) {
        val[utility::conversions::to_string_t("inference_data_process_video_mark_info")] = ModelBase::toJson(inferenceDataProcessVideoMarkInfo_);
    }
    if(inferenceDataProcessActionMarkInfoIsSet_) {
        val[utility::conversions::to_string_t("inference_data_process_action_mark_info")] = ModelBase::toJson(inferenceDataProcessActionMarkInfo_);
    }
    if(inferenceDataProcessChatActionMarkInfoIsSet_) {
        val[utility::conversions::to_string_t("inference_data_process_chat_action_mark_info")] = ModelBase::toJson(inferenceDataProcessChatActionMarkInfo_);
    }
    if(inferenceDataProcessEyeCorrectionMarkInfoIsSet_) {
        val[utility::conversions::to_string_t("inference_data_process_eye_correction_mark_info")] = ModelBase::toJson(inferenceDataProcessEyeCorrectionMarkInfo_);
    }
    if(isBackgroundReplacementIsSet_) {
        val[utility::conversions::to_string_t("is_background_replacement")] = ModelBase::toJson(isBackgroundReplacement_);
    }
    if(workerTypeIsSet_) {
        val[utility::conversions::to_string_t("worker_type")] = ModelBase::toJson(workerType_);
    }
    if(voiceTrainJobIdIsSet_) {
        val[utility::conversions::to_string_t("voice_train_job_id")] = ModelBase::toJson(voiceTrainJobId_);
    }
    if(flexusRetryCountIsSet_) {
        val[utility::conversions::to_string_t("flexus_retry_count")] = ModelBase::toJson(flexusRetryCount_);
    }
    if(audioSourceTypeIsSet_) {
        val[utility::conversions::to_string_t("audio_source_type")] = ModelBase::toJson(audioSourceType_);
    }
    if(supportedServiceIsSet_) {
        val[utility::conversions::to_string_t("supported_service")] = ModelBase::toJson(supportedService_);
    }
    if(allocatedResourceIsSet_) {
        val[utility::conversions::to_string_t("allocated_resource")] = ModelBase::toJson(allocatedResource_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool Show2dModelTrainingJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contact"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contact"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContact(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("batch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matting_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matting_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMattingType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_resolution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_resolution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelResolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_flexus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_flexus"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFlexus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_only_human_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_only_human_model"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOnlyHumanModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("training_video_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_video_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingVideoDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_card_image1_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_card_image1_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdCardImage1DownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_card_image2_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_card_image2_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdCardImage2DownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grant_file_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grant_file_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrantFileDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre_beauty_image_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_beauty_image_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreBeautyImageDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_video_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_video_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionVideoDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("post_beauty_image_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("post_beauty_image_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPostBeautyImageDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_file_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_file_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFileDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<OperationLogInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationLogs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verify_video_matting_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_video_matting_info"));
        if(!fieldValue.is_null())
        {
            std::vector<VerifyVideoMattingInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyVideoMattingInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<CommentLogInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommentLogs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("samples"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("samples"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionSampleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSamples(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_mask_file_uploaded"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_mask_file_uploaded"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMaskFileUploaded(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mask_file_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mask_file_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaskFileDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verify_video_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_video_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyVideoDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("markable_video_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("markable_video_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarkableVideoDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traning_video_mark_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traning_video_mark_info"));
        if(!fieldValue.is_null())
        {
            TrainingVideoMarkInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraningVideoMarkInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inference_data_process_video_mark_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inference_data_process_video_mark_info"));
        if(!fieldValue.is_null())
        {
            InferenceVideoMarkInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInferenceDataProcessVideoMarkInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inference_data_process_action_mark_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inference_data_process_action_mark_info"));
        if(!fieldValue.is_null())
        {
            InferenceActionMarkInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInferenceDataProcessActionMarkInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inference_data_process_chat_action_mark_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inference_data_process_chat_action_mark_info"));
        if(!fieldValue.is_null())
        {
            InferenceActionMarkInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInferenceDataProcessChatActionMarkInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inference_data_process_eye_correction_mark_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inference_data_process_eye_correction_mark_info"));
        if(!fieldValue.is_null())
        {
            InferenceEyeCorrectionMarkInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInferenceDataProcessEyeCorrectionMarkInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_background_replacement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_background_replacement"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBackgroundReplacement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("worker_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("worker_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_train_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_train_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceTrainJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flexus_retry_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flexus_retry_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlexusRetryCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supported_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_service"));
        if(!fieldValue.is_null())
        {
            std::vector<SupportedServiceEnum> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allocated_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allocated_resource"));
        if(!fieldValue.is_null())
        {
            TrainingAllocatedResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocatedResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string Show2dModelTrainingJobResponse::getJobId() const
{
    return jobId_;
}

void Show2dModelTrainingJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void Show2dModelTrainingJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getName() const
{
    return name_;
}

void Show2dModelTrainingJobResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::nameIsSet() const
{
    return nameIsSet_;
}

void Show2dModelTrainingJobResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getState() const
{
    return state_;
}

void Show2dModelTrainingJobResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::stateIsSet() const
{
    return stateIsSet_;
}

void Show2dModelTrainingJobResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getAssetId() const
{
    return assetId_;
}

void Show2dModelTrainingJobResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void Show2dModelTrainingJobResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getProjectId() const
{
    return projectId_;
}

void Show2dModelTrainingJobResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Show2dModelTrainingJobResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getCoverDownloadUrl() const
{
    return coverDownloadUrl_;
}

void Show2dModelTrainingJobResponse::setCoverDownloadUrl(const std::string& value)
{
    coverDownloadUrl_ = value;
    coverDownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::coverDownloadUrlIsSet() const
{
    return coverDownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetcoverDownloadUrl()
{
    coverDownloadUrlIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void Show2dModelTrainingJobResponse::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void Show2dModelTrainingJobResponse::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getCreateTime() const
{
    return createTime_;
}

void Show2dModelTrainingJobResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Show2dModelTrainingJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getContact() const
{
    return contact_;
}

void Show2dModelTrainingJobResponse::setContact(const std::string& value)
{
    contact_ = value;
    contactIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::contactIsSet() const
{
    return contactIsSet_;
}

void Show2dModelTrainingJobResponse::unsetcontact()
{
    contactIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getBatchName() const
{
    return batchName_;
}

void Show2dModelTrainingJobResponse::setBatchName(const std::string& value)
{
    batchName_ = value;
    batchNameIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::batchNameIsSet() const
{
    return batchNameIsSet_;
}

void Show2dModelTrainingJobResponse::unsetbatchName()
{
    batchNameIsSet_ = false;
}

std::vector<std::string>& Show2dModelTrainingJobResponse::getTags()
{
    return tags_;
}

void Show2dModelTrainingJobResponse::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void Show2dModelTrainingJobResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getModelVersion() const
{
    return modelVersion_;
}

void Show2dModelTrainingJobResponse::setModelVersion(const std::string& value)
{
    modelVersion_ = value;
    modelVersionIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::modelVersionIsSet() const
{
    return modelVersionIsSet_;
}

void Show2dModelTrainingJobResponse::unsetmodelVersion()
{
    modelVersionIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getMattingType() const
{
    return mattingType_;
}

void Show2dModelTrainingJobResponse::setMattingType(const std::string& value)
{
    mattingType_ = value;
    mattingTypeIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::mattingTypeIsSet() const
{
    return mattingTypeIsSet_;
}

void Show2dModelTrainingJobResponse::unsetmattingType()
{
    mattingTypeIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getModelResolution() const
{
    return modelResolution_;
}

void Show2dModelTrainingJobResponse::setModelResolution(const std::string& value)
{
    modelResolution_ = value;
    modelResolutionIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::modelResolutionIsSet() const
{
    return modelResolutionIsSet_;
}

void Show2dModelTrainingJobResponse::unsetmodelResolution()
{
    modelResolutionIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getAppUserId() const
{
    return appUserId_;
}

void Show2dModelTrainingJobResponse::setAppUserId(const std::string& value)
{
    appUserId_ = value;
    appUserIdIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::appUserIdIsSet() const
{
    return appUserIdIsSet_;
}

void Show2dModelTrainingJobResponse::unsetappUserId()
{
    appUserIdIsSet_ = false;
}

bool Show2dModelTrainingJobResponse::isIsFlexus() const
{
    return isFlexus_;
}

void Show2dModelTrainingJobResponse::setIsFlexus(bool value)
{
    isFlexus_ = value;
    isFlexusIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::isFlexusIsSet() const
{
    return isFlexusIsSet_;
}

void Show2dModelTrainingJobResponse::unsetisFlexus()
{
    isFlexusIsSet_ = false;
}

bool Show2dModelTrainingJobResponse::isIsOnlyHumanModel() const
{
    return isOnlyHumanModel_;
}

void Show2dModelTrainingJobResponse::setIsOnlyHumanModel(bool value)
{
    isOnlyHumanModel_ = value;
    isOnlyHumanModelIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::isOnlyHumanModelIsSet() const
{
    return isOnlyHumanModelIsSet_;
}

void Show2dModelTrainingJobResponse::unsetisOnlyHumanModel()
{
    isOnlyHumanModelIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getTrainingVideoDownloadUrl() const
{
    return trainingVideoDownloadUrl_;
}

void Show2dModelTrainingJobResponse::setTrainingVideoDownloadUrl(const std::string& value)
{
    trainingVideoDownloadUrl_ = value;
    trainingVideoDownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::trainingVideoDownloadUrlIsSet() const
{
    return trainingVideoDownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsettrainingVideoDownloadUrl()
{
    trainingVideoDownloadUrlIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getIdCardImage1DownloadUrl() const
{
    return idCardImage1DownloadUrl_;
}

void Show2dModelTrainingJobResponse::setIdCardImage1DownloadUrl(const std::string& value)
{
    idCardImage1DownloadUrl_ = value;
    idCardImage1DownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::idCardImage1DownloadUrlIsSet() const
{
    return idCardImage1DownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetidCardImage1DownloadUrl()
{
    idCardImage1DownloadUrlIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getIdCardImage2DownloadUrl() const
{
    return idCardImage2DownloadUrl_;
}

void Show2dModelTrainingJobResponse::setIdCardImage2DownloadUrl(const std::string& value)
{
    idCardImage2DownloadUrl_ = value;
    idCardImage2DownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::idCardImage2DownloadUrlIsSet() const
{
    return idCardImage2DownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetidCardImage2DownloadUrl()
{
    idCardImage2DownloadUrlIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getGrantFileDownloadUrl() const
{
    return grantFileDownloadUrl_;
}

void Show2dModelTrainingJobResponse::setGrantFileDownloadUrl(const std::string& value)
{
    grantFileDownloadUrl_ = value;
    grantFileDownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::grantFileDownloadUrlIsSet() const
{
    return grantFileDownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetgrantFileDownloadUrl()
{
    grantFileDownloadUrlIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getPreBeautyImageDownloadUrl() const
{
    return preBeautyImageDownloadUrl_;
}

void Show2dModelTrainingJobResponse::setPreBeautyImageDownloadUrl(const std::string& value)
{
    preBeautyImageDownloadUrl_ = value;
    preBeautyImageDownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::preBeautyImageDownloadUrlIsSet() const
{
    return preBeautyImageDownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetpreBeautyImageDownloadUrl()
{
    preBeautyImageDownloadUrlIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getActionVideoDownloadUrl() const
{
    return actionVideoDownloadUrl_;
}

void Show2dModelTrainingJobResponse::setActionVideoDownloadUrl(const std::string& value)
{
    actionVideoDownloadUrl_ = value;
    actionVideoDownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::actionVideoDownloadUrlIsSet() const
{
    return actionVideoDownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetactionVideoDownloadUrl()
{
    actionVideoDownloadUrlIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getPostBeautyImageDownloadUrl() const
{
    return postBeautyImageDownloadUrl_;
}

void Show2dModelTrainingJobResponse::setPostBeautyImageDownloadUrl(const std::string& value)
{
    postBeautyImageDownloadUrl_ = value;
    postBeautyImageDownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::postBeautyImageDownloadUrlIsSet() const
{
    return postBeautyImageDownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetpostBeautyImageDownloadUrl()
{
    postBeautyImageDownloadUrlIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getAudioFileDownloadUrl() const
{
    return audioFileDownloadUrl_;
}

void Show2dModelTrainingJobResponse::setAudioFileDownloadUrl(const std::string& value)
{
    audioFileDownloadUrl_ = value;
    audioFileDownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::audioFileDownloadUrlIsSet() const
{
    return audioFileDownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetaudioFileDownloadUrl()
{
    audioFileDownloadUrlIsSet_ = false;
}

std::vector<OperationLogInfo>& Show2dModelTrainingJobResponse::getOperationLogs()
{
    return operationLogs_;
}

void Show2dModelTrainingJobResponse::setOperationLogs(const std::vector<OperationLogInfo>& value)
{
    operationLogs_ = value;
    operationLogsIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::operationLogsIsSet() const
{
    return operationLogsIsSet_;
}

void Show2dModelTrainingJobResponse::unsetoperationLogs()
{
    operationLogsIsSet_ = false;
}

std::vector<VerifyVideoMattingInfo>& Show2dModelTrainingJobResponse::getVerifyVideoMattingInfo()
{
    return verifyVideoMattingInfo_;
}

void Show2dModelTrainingJobResponse::setVerifyVideoMattingInfo(const std::vector<VerifyVideoMattingInfo>& value)
{
    verifyVideoMattingInfo_ = value;
    verifyVideoMattingInfoIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::verifyVideoMattingInfoIsSet() const
{
    return verifyVideoMattingInfoIsSet_;
}

void Show2dModelTrainingJobResponse::unsetverifyVideoMattingInfo()
{
    verifyVideoMattingInfoIsSet_ = false;
}

std::vector<CommentLogInfo>& Show2dModelTrainingJobResponse::getCommentLogs()
{
    return commentLogs_;
}

void Show2dModelTrainingJobResponse::setCommentLogs(const std::vector<CommentLogInfo>& value)
{
    commentLogs_ = value;
    commentLogsIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::commentLogsIsSet() const
{
    return commentLogsIsSet_;
}

void Show2dModelTrainingJobResponse::unsetcommentLogs()
{
    commentLogsIsSet_ = false;
}

std::vector<ActionSampleInfo>& Show2dModelTrainingJobResponse::getSamples()
{
    return samples_;
}

void Show2dModelTrainingJobResponse::setSamples(const std::vector<ActionSampleInfo>& value)
{
    samples_ = value;
    samplesIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::samplesIsSet() const
{
    return samplesIsSet_;
}

void Show2dModelTrainingJobResponse::unsetsamples()
{
    samplesIsSet_ = false;
}

bool Show2dModelTrainingJobResponse::isIsMaskFileUploaded() const
{
    return isMaskFileUploaded_;
}

void Show2dModelTrainingJobResponse::setIsMaskFileUploaded(bool value)
{
    isMaskFileUploaded_ = value;
    isMaskFileUploadedIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::isMaskFileUploadedIsSet() const
{
    return isMaskFileUploadedIsSet_;
}

void Show2dModelTrainingJobResponse::unsetisMaskFileUploaded()
{
    isMaskFileUploadedIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getMaskFileDownloadUrl() const
{
    return maskFileDownloadUrl_;
}

void Show2dModelTrainingJobResponse::setMaskFileDownloadUrl(const std::string& value)
{
    maskFileDownloadUrl_ = value;
    maskFileDownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::maskFileDownloadUrlIsSet() const
{
    return maskFileDownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetmaskFileDownloadUrl()
{
    maskFileDownloadUrlIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getVerifyVideoDownloadUrl() const
{
    return verifyVideoDownloadUrl_;
}

void Show2dModelTrainingJobResponse::setVerifyVideoDownloadUrl(const std::string& value)
{
    verifyVideoDownloadUrl_ = value;
    verifyVideoDownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::verifyVideoDownloadUrlIsSet() const
{
    return verifyVideoDownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetverifyVideoDownloadUrl()
{
    verifyVideoDownloadUrlIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getMarkableVideoDownloadUrl() const
{
    return markableVideoDownloadUrl_;
}

void Show2dModelTrainingJobResponse::setMarkableVideoDownloadUrl(const std::string& value)
{
    markableVideoDownloadUrl_ = value;
    markableVideoDownloadUrlIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::markableVideoDownloadUrlIsSet() const
{
    return markableVideoDownloadUrlIsSet_;
}

void Show2dModelTrainingJobResponse::unsetmarkableVideoDownloadUrl()
{
    markableVideoDownloadUrlIsSet_ = false;
}

TrainingVideoMarkInfo Show2dModelTrainingJobResponse::getTraningVideoMarkInfo() const
{
    return traningVideoMarkInfo_;
}

void Show2dModelTrainingJobResponse::setTraningVideoMarkInfo(const TrainingVideoMarkInfo& value)
{
    traningVideoMarkInfo_ = value;
    traningVideoMarkInfoIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::traningVideoMarkInfoIsSet() const
{
    return traningVideoMarkInfoIsSet_;
}

void Show2dModelTrainingJobResponse::unsettraningVideoMarkInfo()
{
    traningVideoMarkInfoIsSet_ = false;
}

InferenceVideoMarkInfo Show2dModelTrainingJobResponse::getInferenceDataProcessVideoMarkInfo() const
{
    return inferenceDataProcessVideoMarkInfo_;
}

void Show2dModelTrainingJobResponse::setInferenceDataProcessVideoMarkInfo(const InferenceVideoMarkInfo& value)
{
    inferenceDataProcessVideoMarkInfo_ = value;
    inferenceDataProcessVideoMarkInfoIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::inferenceDataProcessVideoMarkInfoIsSet() const
{
    return inferenceDataProcessVideoMarkInfoIsSet_;
}

void Show2dModelTrainingJobResponse::unsetinferenceDataProcessVideoMarkInfo()
{
    inferenceDataProcessVideoMarkInfoIsSet_ = false;
}

InferenceActionMarkInfo Show2dModelTrainingJobResponse::getInferenceDataProcessActionMarkInfo() const
{
    return inferenceDataProcessActionMarkInfo_;
}

void Show2dModelTrainingJobResponse::setInferenceDataProcessActionMarkInfo(const InferenceActionMarkInfo& value)
{
    inferenceDataProcessActionMarkInfo_ = value;
    inferenceDataProcessActionMarkInfoIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::inferenceDataProcessActionMarkInfoIsSet() const
{
    return inferenceDataProcessActionMarkInfoIsSet_;
}

void Show2dModelTrainingJobResponse::unsetinferenceDataProcessActionMarkInfo()
{
    inferenceDataProcessActionMarkInfoIsSet_ = false;
}

InferenceActionMarkInfo Show2dModelTrainingJobResponse::getInferenceDataProcessChatActionMarkInfo() const
{
    return inferenceDataProcessChatActionMarkInfo_;
}

void Show2dModelTrainingJobResponse::setInferenceDataProcessChatActionMarkInfo(const InferenceActionMarkInfo& value)
{
    inferenceDataProcessChatActionMarkInfo_ = value;
    inferenceDataProcessChatActionMarkInfoIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::inferenceDataProcessChatActionMarkInfoIsSet() const
{
    return inferenceDataProcessChatActionMarkInfoIsSet_;
}

void Show2dModelTrainingJobResponse::unsetinferenceDataProcessChatActionMarkInfo()
{
    inferenceDataProcessChatActionMarkInfoIsSet_ = false;
}

InferenceEyeCorrectionMarkInfo Show2dModelTrainingJobResponse::getInferenceDataProcessEyeCorrectionMarkInfo() const
{
    return inferenceDataProcessEyeCorrectionMarkInfo_;
}

void Show2dModelTrainingJobResponse::setInferenceDataProcessEyeCorrectionMarkInfo(const InferenceEyeCorrectionMarkInfo& value)
{
    inferenceDataProcessEyeCorrectionMarkInfo_ = value;
    inferenceDataProcessEyeCorrectionMarkInfoIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::inferenceDataProcessEyeCorrectionMarkInfoIsSet() const
{
    return inferenceDataProcessEyeCorrectionMarkInfoIsSet_;
}

void Show2dModelTrainingJobResponse::unsetinferenceDataProcessEyeCorrectionMarkInfo()
{
    inferenceDataProcessEyeCorrectionMarkInfoIsSet_ = false;
}

bool Show2dModelTrainingJobResponse::isIsBackgroundReplacement() const
{
    return isBackgroundReplacement_;
}

void Show2dModelTrainingJobResponse::setIsBackgroundReplacement(bool value)
{
    isBackgroundReplacement_ = value;
    isBackgroundReplacementIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::isBackgroundReplacementIsSet() const
{
    return isBackgroundReplacementIsSet_;
}

void Show2dModelTrainingJobResponse::unsetisBackgroundReplacement()
{
    isBackgroundReplacementIsSet_ = false;
}

std::vector<std::string>& Show2dModelTrainingJobResponse::getWorkerType()
{
    return workerType_;
}

void Show2dModelTrainingJobResponse::setWorkerType(const std::vector<std::string>& value)
{
    workerType_ = value;
    workerTypeIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::workerTypeIsSet() const
{
    return workerTypeIsSet_;
}

void Show2dModelTrainingJobResponse::unsetworkerType()
{
    workerTypeIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getVoiceTrainJobId() const
{
    return voiceTrainJobId_;
}

void Show2dModelTrainingJobResponse::setVoiceTrainJobId(const std::string& value)
{
    voiceTrainJobId_ = value;
    voiceTrainJobIdIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::voiceTrainJobIdIsSet() const
{
    return voiceTrainJobIdIsSet_;
}

void Show2dModelTrainingJobResponse::unsetvoiceTrainJobId()
{
    voiceTrainJobIdIsSet_ = false;
}

int32_t Show2dModelTrainingJobResponse::getFlexusRetryCount() const
{
    return flexusRetryCount_;
}

void Show2dModelTrainingJobResponse::setFlexusRetryCount(int32_t value)
{
    flexusRetryCount_ = value;
    flexusRetryCountIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::flexusRetryCountIsSet() const
{
    return flexusRetryCountIsSet_;
}

void Show2dModelTrainingJobResponse::unsetflexusRetryCount()
{
    flexusRetryCountIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getAudioSourceType() const
{
    return audioSourceType_;
}

void Show2dModelTrainingJobResponse::setAudioSourceType(const std::string& value)
{
    audioSourceType_ = value;
    audioSourceTypeIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::audioSourceTypeIsSet() const
{
    return audioSourceTypeIsSet_;
}

void Show2dModelTrainingJobResponse::unsetaudioSourceType()
{
    audioSourceTypeIsSet_ = false;
}

std::vector<SupportedServiceEnum>& Show2dModelTrainingJobResponse::getSupportedService()
{
    return supportedService_;
}

void Show2dModelTrainingJobResponse::setSupportedService(const std::vector<SupportedServiceEnum>& value)
{
    supportedService_ = value;
    supportedServiceIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::supportedServiceIsSet() const
{
    return supportedServiceIsSet_;
}

void Show2dModelTrainingJobResponse::unsetsupportedService()
{
    supportedServiceIsSet_ = false;
}

TrainingAllocatedResource Show2dModelTrainingJobResponse::getAllocatedResource() const
{
    return allocatedResource_;
}

void Show2dModelTrainingJobResponse::setAllocatedResource(const TrainingAllocatedResource& value)
{
    allocatedResource_ = value;
    allocatedResourceIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::allocatedResourceIsSet() const
{
    return allocatedResourceIsSet_;
}

void Show2dModelTrainingJobResponse::unsetallocatedResource()
{
    allocatedResourceIsSet_ = false;
}

std::string Show2dModelTrainingJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void Show2dModelTrainingJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool Show2dModelTrainingJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void Show2dModelTrainingJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


