

#include "huaweicloud/metastudio/v1/model/CreateDigitalHumanBusinessCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDigitalHumanBusinessCardResponse::CreateDigitalHumanBusinessCardResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateDigitalHumanBusinessCardResponse::~CreateDigitalHumanBusinessCardResponse() = default;

void CreateDigitalHumanBusinessCardResponse::validate()
{
}

web::json::value CreateDigitalHumanBusinessCardResponse::toJson() const
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
bool CreateDigitalHumanBusinessCardResponse::fromJson(const web::json::value& val)
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


std::string CreateDigitalHumanBusinessCardResponse::getJobId() const
{
    return jobId_;
}

void CreateDigitalHumanBusinessCardResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDigitalHumanBusinessCardResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateDigitalHumanBusinessCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateDigitalHumanBusinessCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


