

#include "huaweicloud/metastudio/v1/model/CreateTrainingMiddleJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTrainingMiddleJobResponse::CreateTrainingMiddleJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    trainingDataUploadingUrl_ = "";
    trainingDataUploadingUrlIsSet_ = false;
    segmentUploadingUrlIsSet_ = false;
    authorizationLetterUploadingUrl_ = "";
    authorizationLetterUploadingUrlIsSet_ = false;
}

CreateTrainingMiddleJobResponse::~CreateTrainingMiddleJobResponse() = default;

void CreateTrainingMiddleJobResponse::validate()
{
}

web::json::value CreateTrainingMiddleJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(trainingDataUploadingUrlIsSet_) {
        val[utility::conversions::to_string_t("training_data_uploading_url")] = ModelBase::toJson(trainingDataUploadingUrl_);
    }
    if(segmentUploadingUrlIsSet_) {
        val[utility::conversions::to_string_t("segment_uploading_url")] = ModelBase::toJson(segmentUploadingUrl_);
    }
    if(authorizationLetterUploadingUrlIsSet_) {
        val[utility::conversions::to_string_t("authorization_letter_uploading_url")] = ModelBase::toJson(authorizationLetterUploadingUrl_);
    }

    return val;
}
bool CreateTrainingMiddleJobResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("training_data_uploading_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_data_uploading_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingDataUploadingUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segment_uploading_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segment_uploading_url"));
        if(!fieldValue.is_null())
        {
            CreateTrainingJobRsp_segment_uploading_url refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentUploadingUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorization_letter_uploading_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorization_letter_uploading_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizationLetterUploadingUrl(refVal);
        }
    }
    return ok;
}


std::string CreateTrainingMiddleJobResponse::getJobId() const
{
    return jobId_;
}

void CreateTrainingMiddleJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateTrainingMiddleJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateTrainingMiddleJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateTrainingMiddleJobResponse::getTrainingDataUploadingUrl() const
{
    return trainingDataUploadingUrl_;
}

void CreateTrainingMiddleJobResponse::setTrainingDataUploadingUrl(const std::string& value)
{
    trainingDataUploadingUrl_ = value;
    trainingDataUploadingUrlIsSet_ = true;
}

bool CreateTrainingMiddleJobResponse::trainingDataUploadingUrlIsSet() const
{
    return trainingDataUploadingUrlIsSet_;
}

void CreateTrainingMiddleJobResponse::unsettrainingDataUploadingUrl()
{
    trainingDataUploadingUrlIsSet_ = false;
}

CreateTrainingJobRsp_segment_uploading_url CreateTrainingMiddleJobResponse::getSegmentUploadingUrl() const
{
    return segmentUploadingUrl_;
}

void CreateTrainingMiddleJobResponse::setSegmentUploadingUrl(const CreateTrainingJobRsp_segment_uploading_url& value)
{
    segmentUploadingUrl_ = value;
    segmentUploadingUrlIsSet_ = true;
}

bool CreateTrainingMiddleJobResponse::segmentUploadingUrlIsSet() const
{
    return segmentUploadingUrlIsSet_;
}

void CreateTrainingMiddleJobResponse::unsetsegmentUploadingUrl()
{
    segmentUploadingUrlIsSet_ = false;
}

std::string CreateTrainingMiddleJobResponse::getAuthorizationLetterUploadingUrl() const
{
    return authorizationLetterUploadingUrl_;
}

void CreateTrainingMiddleJobResponse::setAuthorizationLetterUploadingUrl(const std::string& value)
{
    authorizationLetterUploadingUrl_ = value;
    authorizationLetterUploadingUrlIsSet_ = true;
}

bool CreateTrainingMiddleJobResponse::authorizationLetterUploadingUrlIsSet() const
{
    return authorizationLetterUploadingUrlIsSet_;
}

void CreateTrainingMiddleJobResponse::unsetauthorizationLetterUploadingUrl()
{
    authorizationLetterUploadingUrlIsSet_ = false;
}

}
}
}
}
}


