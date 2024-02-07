

#include "huaweicloud/geip/v3/model/CreateGlobalEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateGlobalEipResponse::CreateGlobalEipResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    globalEipIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateGlobalEipResponse::~CreateGlobalEipResponse() = default;

void CreateGlobalEipResponse::validate()
{
}

web::json::value CreateGlobalEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(globalEipIsSet_) {
        val[utility::conversions::to_string_t("global_eip")] = ModelBase::toJson(globalEip_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateGlobalEipResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("global_eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip"));
        if(!fieldValue.is_null())
        {
            CreateGlobalEip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEip(refVal);
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


std::string CreateGlobalEipResponse::getJobId() const
{
    return jobId_;
}

void CreateGlobalEipResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateGlobalEipResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateGlobalEipResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

CreateGlobalEip CreateGlobalEipResponse::getGlobalEip() const
{
    return globalEip_;
}

void CreateGlobalEipResponse::setGlobalEip(const CreateGlobalEip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool CreateGlobalEipResponse::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void CreateGlobalEipResponse::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

std::string CreateGlobalEipResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateGlobalEipResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateGlobalEipResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateGlobalEipResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


