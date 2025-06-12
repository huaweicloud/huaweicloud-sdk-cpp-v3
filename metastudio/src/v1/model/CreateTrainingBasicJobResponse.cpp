

#include "huaweicloud/metastudio/v1/model/CreateTrainingBasicJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTrainingBasicJobResponse::CreateTrainingBasicJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    trainingDataUploadingUrl_ = "";
    trainingDataUploadingUrlIsSet_ = false;
    segmentUploadingUrlIsSet_ = false;
    authorizationLetterUploadingUrl_ = "";
    authorizationLetterUploadingUrlIsSet_ = false;
}

CreateTrainingBasicJobResponse::~CreateTrainingBasicJobResponse() = default;

void CreateTrainingBasicJobResponse::validate()
{
}

web::json::value CreateTrainingBasicJobResponse::toJson() const
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
bool CreateTrainingBasicJobResponse::fromJson(const web::json::value& val)
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


std::string CreateTrainingBasicJobResponse::getJobId() const
{
    return jobId_;
}

void CreateTrainingBasicJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateTrainingBasicJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateTrainingBasicJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateTrainingBasicJobResponse::getTrainingDataUploadingUrl() const
{
    return trainingDataUploadingUrl_;
}

void CreateTrainingBasicJobResponse::setTrainingDataUploadingUrl(const std::string& value)
{
    trainingDataUploadingUrl_ = value;
    trainingDataUploadingUrlIsSet_ = true;
}

bool CreateTrainingBasicJobResponse::trainingDataUploadingUrlIsSet() const
{
    return trainingDataUploadingUrlIsSet_;
}

void CreateTrainingBasicJobResponse::unsettrainingDataUploadingUrl()
{
    trainingDataUploadingUrlIsSet_ = false;
}

CreateTrainingJobRsp_segment_uploading_url CreateTrainingBasicJobResponse::getSegmentUploadingUrl() const
{
    return segmentUploadingUrl_;
}

void CreateTrainingBasicJobResponse::setSegmentUploadingUrl(const CreateTrainingJobRsp_segment_uploading_url& value)
{
    segmentUploadingUrl_ = value;
    segmentUploadingUrlIsSet_ = true;
}

bool CreateTrainingBasicJobResponse::segmentUploadingUrlIsSet() const
{
    return segmentUploadingUrlIsSet_;
}

void CreateTrainingBasicJobResponse::unsetsegmentUploadingUrl()
{
    segmentUploadingUrlIsSet_ = false;
}

std::string CreateTrainingBasicJobResponse::getAuthorizationLetterUploadingUrl() const
{
    return authorizationLetterUploadingUrl_;
}

void CreateTrainingBasicJobResponse::setAuthorizationLetterUploadingUrl(const std::string& value)
{
    authorizationLetterUploadingUrl_ = value;
    authorizationLetterUploadingUrlIsSet_ = true;
}

bool CreateTrainingBasicJobResponse::authorizationLetterUploadingUrlIsSet() const
{
    return authorizationLetterUploadingUrlIsSet_;
}

void CreateTrainingBasicJobResponse::unsetauthorizationLetterUploadingUrl()
{
    authorizationLetterUploadingUrlIsSet_ = false;
}

}
}
}
}
}


