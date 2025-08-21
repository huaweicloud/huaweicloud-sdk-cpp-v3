

#include "huaweicloud/cdn/v2/model/Resource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Resource::Resource()
{
    status_ = "";
    statusIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

Resource::~Resource() = default;

void Resource::validate()
{
}

web::json::value Resource::toJson() const
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
bool Resource::fromJson(const web::json::value& val)
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


std::string Resource::getStatus() const
{
    return status_;
}

void Resource::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Resource::statusIsSet() const
{
    return statusIsSet_;
}

void Resource::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Resource::getDomainName() const
{
    return domainName_;
}

void Resource::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool Resource::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void Resource::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string Resource::getErrorMsg() const
{
    return errorMsg_;
}

void Resource::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool Resource::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void Resource::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


