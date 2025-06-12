

#include "huaweicloud/metastudio/v1/model/CreatePhotoDigitalHumanVideoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePhotoDigitalHumanVideoResponse::CreatePhotoDigitalHumanVideoResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreatePhotoDigitalHumanVideoResponse::~CreatePhotoDigitalHumanVideoResponse() = default;

void CreatePhotoDigitalHumanVideoResponse::validate()
{
}

web::json::value CreatePhotoDigitalHumanVideoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreatePhotoDigitalHumanVideoResponse::fromJson(const web::json::value& val)
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


std::string CreatePhotoDigitalHumanVideoResponse::getJobId() const
{
    return jobId_;
}

void CreatePhotoDigitalHumanVideoResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreatePhotoDigitalHumanVideoResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreatePhotoDigitalHumanVideoResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreatePhotoDigitalHumanVideoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreatePhotoDigitalHumanVideoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreatePhotoDigitalHumanVideoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


