

#include "huaweicloud/geip/v3/model/DisassociateInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DisassociateInstanceResponse::DisassociateInstanceResponse()
{
    globalEipIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DisassociateInstanceResponse::~DisassociateInstanceResponse() = default;

void DisassociateInstanceResponse::validate()
{
}

web::json::value DisassociateInstanceResponse::toJson() const
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
bool DisassociateInstanceResponse::fromJson(const web::json::value& val)
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


UpdateGlobalEip DisassociateInstanceResponse::getGlobalEip() const
{
    return globalEip_;
}

void DisassociateInstanceResponse::setGlobalEip(const UpdateGlobalEip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool DisassociateInstanceResponse::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void DisassociateInstanceResponse::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

std::string DisassociateInstanceResponse::getJobId() const
{
    return jobId_;
}

void DisassociateInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DisassociateInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DisassociateInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DisassociateInstanceResponse::getXRequestId() const
{
    return xRequestId_;
}

void DisassociateInstanceResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DisassociateInstanceResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DisassociateInstanceResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


