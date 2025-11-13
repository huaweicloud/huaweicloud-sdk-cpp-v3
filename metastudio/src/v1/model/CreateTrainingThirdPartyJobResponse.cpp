

#include "huaweicloud/metastudio/v1/model/CreateTrainingThirdPartyJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTrainingThirdPartyJobResponse::CreateTrainingThirdPartyJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    trainingDataUploadingUrl_ = "";
    trainingDataUploadingUrlIsSet_ = false;
    segmentUploadingUrlIsSet_ = false;
    authorizationLetterUploadingUrl_ = "";
    authorizationLetterUploadingUrlIsSet_ = false;
}

CreateTrainingThirdPartyJobResponse::~CreateTrainingThirdPartyJobResponse() = default;

void CreateTrainingThirdPartyJobResponse::validate()
{
}

web::json::value CreateTrainingThirdPartyJobResponse::toJson() const
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
bool CreateTrainingThirdPartyJobResponse::fromJson(const web::json::value& val)
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


std::string CreateTrainingThirdPartyJobResponse::getJobId() const
{
    return jobId_;
}

void CreateTrainingThirdPartyJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateTrainingThirdPartyJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateTrainingThirdPartyJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateTrainingThirdPartyJobResponse::getTrainingDataUploadingUrl() const
{
    return trainingDataUploadingUrl_;
}

void CreateTrainingThirdPartyJobResponse::setTrainingDataUploadingUrl(const std::string& value)
{
    trainingDataUploadingUrl_ = value;
    trainingDataUploadingUrlIsSet_ = true;
}

bool CreateTrainingThirdPartyJobResponse::trainingDataUploadingUrlIsSet() const
{
    return trainingDataUploadingUrlIsSet_;
}

void CreateTrainingThirdPartyJobResponse::unsettrainingDataUploadingUrl()
{
    trainingDataUploadingUrlIsSet_ = false;
}

CreateTrainingJobRsp_segment_uploading_url CreateTrainingThirdPartyJobResponse::getSegmentUploadingUrl() const
{
    return segmentUploadingUrl_;
}

void CreateTrainingThirdPartyJobResponse::setSegmentUploadingUrl(const CreateTrainingJobRsp_segment_uploading_url& value)
{
    segmentUploadingUrl_ = value;
    segmentUploadingUrlIsSet_ = true;
}

bool CreateTrainingThirdPartyJobResponse::segmentUploadingUrlIsSet() const
{
    return segmentUploadingUrlIsSet_;
}

void CreateTrainingThirdPartyJobResponse::unsetsegmentUploadingUrl()
{
    segmentUploadingUrlIsSet_ = false;
}

std::string CreateTrainingThirdPartyJobResponse::getAuthorizationLetterUploadingUrl() const
{
    return authorizationLetterUploadingUrl_;
}

void CreateTrainingThirdPartyJobResponse::setAuthorizationLetterUploadingUrl(const std::string& value)
{
    authorizationLetterUploadingUrl_ = value;
    authorizationLetterUploadingUrlIsSet_ = true;
}

bool CreateTrainingThirdPartyJobResponse::authorizationLetterUploadingUrlIsSet() const
{
    return authorizationLetterUploadingUrlIsSet_;
}

void CreateTrainingThirdPartyJobResponse::unsetauthorizationLetterUploadingUrl()
{
    authorizationLetterUploadingUrlIsSet_ = false;
}

}
}
}
}
}


