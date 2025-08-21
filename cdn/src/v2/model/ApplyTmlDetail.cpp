

#include "huaweicloud/cdn/v2/model/ApplyTmlDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ApplyTmlDetail::ApplyTmlDetail()
{
    status_ = "";
    statusIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ApplyTmlDetail::~ApplyTmlDetail() = default;

void ApplyTmlDetail::validate()
{
}

web::json::value ApplyTmlDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool ApplyTmlDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string ApplyTmlDetail::getStatus() const
{
    return status_;
}

void ApplyTmlDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ApplyTmlDetail::statusIsSet() const
{
    return statusIsSet_;
}

void ApplyTmlDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ApplyTmlDetail::getDomainName() const
{
    return domainName_;
}

void ApplyTmlDetail::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ApplyTmlDetail::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ApplyTmlDetail::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ApplyTmlDetail::getErrorMsg() const
{
    return errorMsg_;
}

void ApplyTmlDetail::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ApplyTmlDetail::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ApplyTmlDetail::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


