

#include "huaweicloud/live/v1/model/ShowRefererChainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowRefererChainResponse::ShowRefererChainResponse()
{
    domain_ = "";
    domainIsSet_ = false;
    guardSwitch_ = "";
    guardSwitchIsSet_ = false;
    refererConfigEmpty_ = "";
    refererConfigEmptyIsSet_ = false;
    refererWhiteList_ = "";
    refererWhiteListIsSet_ = false;
    refererAuthListIsSet_ = false;
}

ShowRefererChainResponse::~ShowRefererChainResponse() = default;

void ShowRefererChainResponse::validate()
{
}

web::json::value ShowRefererChainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(guardSwitchIsSet_) {
        val[utility::conversions::to_string_t("guard_switch")] = ModelBase::toJson(guardSwitch_);
    }
    if(refererConfigEmptyIsSet_) {
        val[utility::conversions::to_string_t("referer_config_empty")] = ModelBase::toJson(refererConfigEmpty_);
    }
    if(refererWhiteListIsSet_) {
        val[utility::conversions::to_string_t("referer_white_list")] = ModelBase::toJson(refererWhiteList_);
    }
    if(refererAuthListIsSet_) {
        val[utility::conversions::to_string_t("referer_auth_list")] = ModelBase::toJson(refererAuthList_);
    }

    return val;
}
bool ShowRefererChainResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guard_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guard_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuardSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("referer_config_empty"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referer_config_empty"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefererConfigEmpty(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("referer_white_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referer_white_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefererWhiteList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("referer_auth_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referer_auth_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefererAuthList(refVal);
        }
    }
    return ok;
}


std::string ShowRefererChainResponse::getDomain() const
{
    return domain_;
}

void ShowRefererChainResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowRefererChainResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ShowRefererChainResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ShowRefererChainResponse::getGuardSwitch() const
{
    return guardSwitch_;
}

void ShowRefererChainResponse::setGuardSwitch(const std::string& value)
{
    guardSwitch_ = value;
    guardSwitchIsSet_ = true;
}

bool ShowRefererChainResponse::guardSwitchIsSet() const
{
    return guardSwitchIsSet_;
}

void ShowRefererChainResponse::unsetguardSwitch()
{
    guardSwitchIsSet_ = false;
}

std::string ShowRefererChainResponse::getRefererConfigEmpty() const
{
    return refererConfigEmpty_;
}

void ShowRefererChainResponse::setRefererConfigEmpty(const std::string& value)
{
    refererConfigEmpty_ = value;
    refererConfigEmptyIsSet_ = true;
}

bool ShowRefererChainResponse::refererConfigEmptyIsSet() const
{
    return refererConfigEmptyIsSet_;
}

void ShowRefererChainResponse::unsetrefererConfigEmpty()
{
    refererConfigEmptyIsSet_ = false;
}

std::string ShowRefererChainResponse::getRefererWhiteList() const
{
    return refererWhiteList_;
}

void ShowRefererChainResponse::setRefererWhiteList(const std::string& value)
{
    refererWhiteList_ = value;
    refererWhiteListIsSet_ = true;
}

bool ShowRefererChainResponse::refererWhiteListIsSet() const
{
    return refererWhiteListIsSet_;
}

void ShowRefererChainResponse::unsetrefererWhiteList()
{
    refererWhiteListIsSet_ = false;
}

std::vector<std::string>& ShowRefererChainResponse::getRefererAuthList()
{
    return refererAuthList_;
}

void ShowRefererChainResponse::setRefererAuthList(const std::vector<std::string>& value)
{
    refererAuthList_ = value;
    refererAuthListIsSet_ = true;
}

bool ShowRefererChainResponse::refererAuthListIsSet() const
{
    return refererAuthListIsSet_;
}

void ShowRefererChainResponse::unsetrefererAuthList()
{
    refererAuthListIsSet_ = false;
}

}
}
}
}
}


