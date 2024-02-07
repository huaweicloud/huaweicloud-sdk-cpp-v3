

#include "huaweicloud/geip/v3/model/AssociateInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AssociateInstanceResponse::AssociateInstanceResponse()
{
    globalEipIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

AssociateInstanceResponse::~AssociateInstanceResponse() = default;

void AssociateInstanceResponse::validate()
{
}

web::json::value AssociateInstanceResponse::toJson() const
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
bool AssociateInstanceResponse::fromJson(const web::json::value& val)
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


UpdateGlobalEip AssociateInstanceResponse::getGlobalEip() const
{
    return globalEip_;
}

void AssociateInstanceResponse::setGlobalEip(const UpdateGlobalEip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool AssociateInstanceResponse::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void AssociateInstanceResponse::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

std::string AssociateInstanceResponse::getJobId() const
{
    return jobId_;
}

void AssociateInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AssociateInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AssociateInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string AssociateInstanceResponse::getXRequestId() const
{
    return xRequestId_;
}

void AssociateInstanceResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AssociateInstanceResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AssociateInstanceResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


