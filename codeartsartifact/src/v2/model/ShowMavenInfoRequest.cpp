

#include "huaweicloud/codeartsartifact/v2/model/ShowMavenInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowMavenInfoRequest::ShowMavenInfoRequest()
{
    policy_ = "";
    policyIsSet_ = false;
    access_ = "";
    accessIsSet_ = false;
    default_ = "";
    defaultIsSet_ = false;
    ids_ = "";
    idsIsSet_ = false;
}

ShowMavenInfoRequest::~ShowMavenInfoRequest() = default;

void ShowMavenInfoRequest::validate()
{
}

web::json::value ShowMavenInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(accessIsSet_) {
        val[utility::conversions::to_string_t("access")] = ModelBase::toJson(access_);
    }
    if(defaultIsSet_) {
        val[utility::conversions::to_string_t("default")] = ModelBase::toJson(default_);
    }
    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool ShowMavenInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    return ok;
}


std::string ShowMavenInfoRequest::getPolicy() const
{
    return policy_;
}

void ShowMavenInfoRequest::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ShowMavenInfoRequest::policyIsSet() const
{
    return policyIsSet_;
}

void ShowMavenInfoRequest::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string ShowMavenInfoRequest::getAccess() const
{
    return access_;
}

void ShowMavenInfoRequest::setAccess(const std::string& value)
{
    access_ = value;
    accessIsSet_ = true;
}

bool ShowMavenInfoRequest::accessIsSet() const
{
    return accessIsSet_;
}

void ShowMavenInfoRequest::unsetaccess()
{
    accessIsSet_ = false;
}

std::string ShowMavenInfoRequest::getDefault() const
{
    return default_;
}

void ShowMavenInfoRequest::setDefault(const std::string& value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool ShowMavenInfoRequest::defaultIsSet() const
{
    return defaultIsSet_;
}

void ShowMavenInfoRequest::unsetdefault()
{
    defaultIsSet_ = false;
}

std::string ShowMavenInfoRequest::getIds() const
{
    return ids_;
}

void ShowMavenInfoRequest::setIds(const std::string& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool ShowMavenInfoRequest::idsIsSet() const
{
    return idsIsSet_;
}

void ShowMavenInfoRequest::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


