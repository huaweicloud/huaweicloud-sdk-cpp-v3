

#include "huaweicloud/cdn/v2/model/BatchCopyResultVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BatchCopyResultVo::BatchCopyResultVo()
{
    reason_ = "";
    reasonIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
}

BatchCopyResultVo::~BatchCopyResultVo() = default;

void BatchCopyResultVo::validate()
{
}

web::json::value BatchCopyResultVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool BatchCopyResultVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    return ok;
}


std::string BatchCopyResultVo::getReason() const
{
    return reason_;
}

void BatchCopyResultVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool BatchCopyResultVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void BatchCopyResultVo::unsetreason()
{
    reasonIsSet_ = false;
}

std::string BatchCopyResultVo::getStatus() const
{
    return status_;
}

void BatchCopyResultVo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchCopyResultVo::statusIsSet() const
{
    return statusIsSet_;
}

void BatchCopyResultVo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchCopyResultVo::getDomainName() const
{
    return domainName_;
}

void BatchCopyResultVo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool BatchCopyResultVo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void BatchCopyResultVo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


