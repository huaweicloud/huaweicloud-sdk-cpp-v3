

#include "huaweicloud/metastudio/v1/model/UpdateDigitalHumanBusinessCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDigitalHumanBusinessCardResponse::UpdateDigitalHumanBusinessCardResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateDigitalHumanBusinessCardResponse::~UpdateDigitalHumanBusinessCardResponse() = default;

void UpdateDigitalHumanBusinessCardResponse::validate()
{
}

web::json::value UpdateDigitalHumanBusinessCardResponse::toJson() const
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
bool UpdateDigitalHumanBusinessCardResponse::fromJson(const web::json::value& val)
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


std::string UpdateDigitalHumanBusinessCardResponse::getJobId() const
{
    return jobId_;
}

void UpdateDigitalHumanBusinessCardResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateDigitalHumanBusinessCardResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateDigitalHumanBusinessCardResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateDigitalHumanBusinessCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateDigitalHumanBusinessCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateDigitalHumanBusinessCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateDigitalHumanBusinessCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


