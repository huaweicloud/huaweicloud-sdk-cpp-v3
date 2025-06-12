

#include "huaweicloud/metastudio/v1/model/Update2dModelTrainingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Update2dModelTrainingJobResponse::Update2dModelTrainingJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    trainingVideoUploadUrlIsSet_ = false;
    actionVideoUploadUrlIsSet_ = false;
    audioUploadUrl_ = "";
    audioUploadUrlIsSet_ = false;
    coverUploadUrl_ = "";
    coverUploadUrlIsSet_ = false;
    idCardImage1UploadUrl_ = "";
    idCardImage1UploadUrlIsSet_ = false;
    idCardImage2UploadUrl_ = "";
    idCardImage2UploadUrlIsSet_ = false;
    grantFileUploadUrl_ = "";
    grantFileUploadUrlIsSet_ = false;
    preBeautyImageUploadUrl_ = "";
    preBeautyImageUploadUrlIsSet_ = false;
    postBeautyImageUploadUrl_ = "";
    postBeautyImageUploadUrlIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

Update2dModelTrainingJobResponse::~Update2dModelTrainingJobResponse() = default;

void Update2dModelTrainingJobResponse::validate()
{
}

web::json::value Update2dModelTrainingJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(trainingVideoUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("training_video_upload_url")] = ModelBase::toJson(trainingVideoUploadUrl_);
    }
    if(actionVideoUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("action_video_upload_url")] = ModelBase::toJson(actionVideoUploadUrl_);
    }
    if(audioUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_upload_url")] = ModelBase::toJson(audioUploadUrl_);
    }
    if(coverUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_upload_url")] = ModelBase::toJson(coverUploadUrl_);
    }
    if(idCardImage1UploadUrlIsSet_) {
        val[utility::conversions::to_string_t("id_card_image1_upload_url")] = ModelBase::toJson(idCardImage1UploadUrl_);
    }
    if(idCardImage2UploadUrlIsSet_) {
        val[utility::conversions::to_string_t("id_card_image2_upload_url")] = ModelBase::toJson(idCardImage2UploadUrl_);
    }
    if(grantFileUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("grant_file_upload_url")] = ModelBase::toJson(grantFileUploadUrl_);
    }
    if(preBeautyImageUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("pre_beauty_image_upload_url")] = ModelBase::toJson(preBeautyImageUploadUrl_);
    }
    if(postBeautyImageUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("post_beauty_image_upload_url")] = ModelBase::toJson(postBeautyImageUploadUrl_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool Update2dModelTrainingJobResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("training_video_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_video_upload_url"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingVideoUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_video_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_video_upload_url"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionVideoUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_card_image1_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_card_image1_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdCardImage1UploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_card_image2_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_card_image2_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdCardImage2UploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grant_file_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grant_file_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrantFileUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre_beauty_image_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_beauty_image_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreBeautyImageUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("post_beauty_image_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("post_beauty_image_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPostBeautyImageUploadUrl(refVal);
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


std::string Update2dModelTrainingJobResponse::getJobId() const
{
    return jobId_;
}

void Update2dModelTrainingJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void Update2dModelTrainingJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::vector<std::string>& Update2dModelTrainingJobResponse::getTrainingVideoUploadUrl()
{
    return trainingVideoUploadUrl_;
}

void Update2dModelTrainingJobResponse::setTrainingVideoUploadUrl(const std::vector<std::string>& value)
{
    trainingVideoUploadUrl_ = value;
    trainingVideoUploadUrlIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::trainingVideoUploadUrlIsSet() const
{
    return trainingVideoUploadUrlIsSet_;
}

void Update2dModelTrainingJobResponse::unsettrainingVideoUploadUrl()
{
    trainingVideoUploadUrlIsSet_ = false;
}

std::vector<std::string>& Update2dModelTrainingJobResponse::getActionVideoUploadUrl()
{
    return actionVideoUploadUrl_;
}

void Update2dModelTrainingJobResponse::setActionVideoUploadUrl(const std::vector<std::string>& value)
{
    actionVideoUploadUrl_ = value;
    actionVideoUploadUrlIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::actionVideoUploadUrlIsSet() const
{
    return actionVideoUploadUrlIsSet_;
}

void Update2dModelTrainingJobResponse::unsetactionVideoUploadUrl()
{
    actionVideoUploadUrlIsSet_ = false;
}

std::string Update2dModelTrainingJobResponse::getAudioUploadUrl() const
{
    return audioUploadUrl_;
}

void Update2dModelTrainingJobResponse::setAudioUploadUrl(const std::string& value)
{
    audioUploadUrl_ = value;
    audioUploadUrlIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::audioUploadUrlIsSet() const
{
    return audioUploadUrlIsSet_;
}

void Update2dModelTrainingJobResponse::unsetaudioUploadUrl()
{
    audioUploadUrlIsSet_ = false;
}

std::string Update2dModelTrainingJobResponse::getCoverUploadUrl() const
{
    return coverUploadUrl_;
}

void Update2dModelTrainingJobResponse::setCoverUploadUrl(const std::string& value)
{
    coverUploadUrl_ = value;
    coverUploadUrlIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::coverUploadUrlIsSet() const
{
    return coverUploadUrlIsSet_;
}

void Update2dModelTrainingJobResponse::unsetcoverUploadUrl()
{
    coverUploadUrlIsSet_ = false;
}

std::string Update2dModelTrainingJobResponse::getIdCardImage1UploadUrl() const
{
    return idCardImage1UploadUrl_;
}

void Update2dModelTrainingJobResponse::setIdCardImage1UploadUrl(const std::string& value)
{
    idCardImage1UploadUrl_ = value;
    idCardImage1UploadUrlIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::idCardImage1UploadUrlIsSet() const
{
    return idCardImage1UploadUrlIsSet_;
}

void Update2dModelTrainingJobResponse::unsetidCardImage1UploadUrl()
{
    idCardImage1UploadUrlIsSet_ = false;
}

std::string Update2dModelTrainingJobResponse::getIdCardImage2UploadUrl() const
{
    return idCardImage2UploadUrl_;
}

void Update2dModelTrainingJobResponse::setIdCardImage2UploadUrl(const std::string& value)
{
    idCardImage2UploadUrl_ = value;
    idCardImage2UploadUrlIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::idCardImage2UploadUrlIsSet() const
{
    return idCardImage2UploadUrlIsSet_;
}

void Update2dModelTrainingJobResponse::unsetidCardImage2UploadUrl()
{
    idCardImage2UploadUrlIsSet_ = false;
}

std::string Update2dModelTrainingJobResponse::getGrantFileUploadUrl() const
{
    return grantFileUploadUrl_;
}

void Update2dModelTrainingJobResponse::setGrantFileUploadUrl(const std::string& value)
{
    grantFileUploadUrl_ = value;
    grantFileUploadUrlIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::grantFileUploadUrlIsSet() const
{
    return grantFileUploadUrlIsSet_;
}

void Update2dModelTrainingJobResponse::unsetgrantFileUploadUrl()
{
    grantFileUploadUrlIsSet_ = false;
}

std::string Update2dModelTrainingJobResponse::getPreBeautyImageUploadUrl() const
{
    return preBeautyImageUploadUrl_;
}

void Update2dModelTrainingJobResponse::setPreBeautyImageUploadUrl(const std::string& value)
{
    preBeautyImageUploadUrl_ = value;
    preBeautyImageUploadUrlIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::preBeautyImageUploadUrlIsSet() const
{
    return preBeautyImageUploadUrlIsSet_;
}

void Update2dModelTrainingJobResponse::unsetpreBeautyImageUploadUrl()
{
    preBeautyImageUploadUrlIsSet_ = false;
}

std::string Update2dModelTrainingJobResponse::getPostBeautyImageUploadUrl() const
{
    return postBeautyImageUploadUrl_;
}

void Update2dModelTrainingJobResponse::setPostBeautyImageUploadUrl(const std::string& value)
{
    postBeautyImageUploadUrl_ = value;
    postBeautyImageUploadUrlIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::postBeautyImageUploadUrlIsSet() const
{
    return postBeautyImageUploadUrlIsSet_;
}

void Update2dModelTrainingJobResponse::unsetpostBeautyImageUploadUrl()
{
    postBeautyImageUploadUrlIsSet_ = false;
}

std::string Update2dModelTrainingJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void Update2dModelTrainingJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool Update2dModelTrainingJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void Update2dModelTrainingJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


