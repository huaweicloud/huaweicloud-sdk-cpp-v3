

#include "huaweicloud/geip/v3/model/UpdateGlobalEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateGlobalEipResponse::UpdateGlobalEipResponse()
{
    globalEipIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateGlobalEipResponse::~UpdateGlobalEipResponse() = default;

void UpdateGlobalEipResponse::validate()
{
}

web::json::value UpdateGlobalEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipIsSet_) {
        val[utility::conversions::to_string_t("global_eip")] = ModelBase::toJson(globalEip_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateGlobalEipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip"));
        if(!fieldValue.is_null())
        {
            UpdateGlobalEip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEip(refVal);
        }
    }
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


UpdateGlobalEip UpdateGlobalEipResponse::getGlobalEip() const
{
    return globalEip_;
}

void UpdateGlobalEipResponse::setGlobalEip(const UpdateGlobalEip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool UpdateGlobalEipResponse::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void UpdateGlobalEipResponse::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

std::string UpdateGlobalEipResponse::getJobId() const
{
    return jobId_;
}

void UpdateGlobalEipResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateGlobalEipResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateGlobalEipResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateGlobalEipResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateGlobalEipResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateGlobalEipResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateGlobalEipResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


