

#include "huaweicloud/aad/v2/model/ShowDomainDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowDomainDetailResponse::ShowDomainDetailResponse()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    cname_ = "";
    cnameIsSet_ = false;
    domainStatus_ = "";
    domainStatusIsSet_ = false;
    ppEnable_ = 0;
    ppEnableIsSet_ = false;
}

ShowDomainDetailResponse::~ShowDomainDetailResponse() = default;

void ShowDomainDetailResponse::validate()
{
}

web::json::value ShowDomainDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(cnameIsSet_) {
        val[utility::conversions::to_string_t("cname")] = ModelBase::toJson(cname_);
    }
    if(domainStatusIsSet_) {
        val[utility::conversions::to_string_t("domain_status")] = ModelBase::toJson(domainStatus_);
    }
    if(ppEnableIsSet_) {
        val[utility::conversions::to_string_t("pp_enable")] = ModelBase::toJson(ppEnable_);
    }

    return val;
}
bool ShowDomainDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pp_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pp_enable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPpEnable(refVal);
        }
    }
    return ok;
}


std::string ShowDomainDetailResponse::getDomainId() const
{
    return domainId_;
}

void ShowDomainDetailResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowDomainDetailResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowDomainDetailResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowDomainDetailResponse::getDomainName() const
{
    return domainName_;
}

void ShowDomainDetailResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainDetailResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainDetailResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowDomainDetailResponse::getCname() const
{
    return cname_;
}

void ShowDomainDetailResponse::setCname(const std::string& value)
{
    cname_ = value;
    cnameIsSet_ = true;
}

bool ShowDomainDetailResponse::cnameIsSet() const
{
    return cnameIsSet_;
}

void ShowDomainDetailResponse::unsetcname()
{
    cnameIsSet_ = false;
}

std::string ShowDomainDetailResponse::getDomainStatus() const
{
    return domainStatus_;
}

void ShowDomainDetailResponse::setDomainStatus(const std::string& value)
{
    domainStatus_ = value;
    domainStatusIsSet_ = true;
}

bool ShowDomainDetailResponse::domainStatusIsSet() const
{
    return domainStatusIsSet_;
}

void ShowDomainDetailResponse::unsetdomainStatus()
{
    domainStatusIsSet_ = false;
}

int32_t ShowDomainDetailResponse::getPpEnable() const
{
    return ppEnable_;
}

void ShowDomainDetailResponse::setPpEnable(int32_t value)
{
    ppEnable_ = value;
    ppEnableIsSet_ = true;
}

bool ShowDomainDetailResponse::ppEnableIsSet() const
{
    return ppEnableIsSet_;
}

void ShowDomainDetailResponse::unsetppEnable()
{
    ppEnableIsSet_ = false;
}

}
}
}
}
}


