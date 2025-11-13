

#include "huaweicloud/metastudio/v1/model/CreateShortJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateShortJobResponse::CreateShortJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    dataUploadingUrl_ = "";
    dataUploadingUrlIsSet_ = false;
}

CreateShortJobResponse::~CreateShortJobResponse() = default;

void CreateShortJobResponse::validate()
{
}

web::json::value CreateShortJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(dataUploadingUrlIsSet_) {
        val[utility::conversions::to_string_t("data_uploading_url")] = ModelBase::toJson(dataUploadingUrl_);
    }

    return val;
}
bool CreateShortJobResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data_uploading_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_uploading_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataUploadingUrl(refVal);
        }
    }
    return ok;
}


std::string CreateShortJobResponse::getJobId() const
{
    return jobId_;
}

void CreateShortJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateShortJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateShortJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateShortJobResponse::getDataUploadingUrl() const
{
    return dataUploadingUrl_;
}

void CreateShortJobResponse::setDataUploadingUrl(const std::string& value)
{
    dataUploadingUrl_ = value;
    dataUploadingUrlIsSet_ = true;
}

bool CreateShortJobResponse::dataUploadingUrlIsSet() const
{
    return dataUploadingUrlIsSet_;
}

void CreateShortJobResponse::unsetdataUploadingUrl()
{
    dataUploadingUrlIsSet_ = false;
}

}
}
}
}
}


