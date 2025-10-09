

#include "huaweicloud/cce/v3/model/AccessPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AccessPolicy::AccessPolicy()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    clustersIsSet_ = false;
    accessScopeIsSet_ = false;
    policyType_ = "";
    policyTypeIsSet_ = false;
    principalIsSet_ = false;
}

AccessPolicy::~AccessPolicy() = default;

void AccessPolicy::validate()
{
}

web::json::value AccessPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(clustersIsSet_) {
        val[utility::conversions::to_string_t("clusters")] = ModelBase::toJson(clusters_);
    }
    if(accessScopeIsSet_) {
        val[utility::conversions::to_string_t("accessScope")] = ModelBase::toJson(accessScope_);
    }
    if(policyTypeIsSet_) {
        val[utility::conversions::to_string_t("policyType")] = ModelBase::toJson(policyType_);
    }
    if(principalIsSet_) {
        val[utility::conversions::to_string_t("principal")] = ModelBase::toJson(principal_);
    }

    return val;
}
bool AccessPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusters"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accessScope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessScope"));
        if(!fieldValue.is_null())
        {
            AccessScope refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policyType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policyType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal"));
        if(!fieldValue.is_null())
        {
            Principal refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipal(refVal);
        }
    }
    return ok;
}


std::string AccessPolicy::getKind() const
{
    return kind_;
}

void AccessPolicy::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool AccessPolicy::kindIsSet() const
{
    return kindIsSet_;
}

void AccessPolicy::unsetkind()
{
    kindIsSet_ = false;
}

std::string AccessPolicy::getApiVersion() const
{
    return apiVersion_;
}

void AccessPolicy::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool AccessPolicy::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void AccessPolicy::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string AccessPolicy::getName() const
{
    return name_;
}

void AccessPolicy::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AccessPolicy::nameIsSet() const
{
    return nameIsSet_;
}

void AccessPolicy::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& AccessPolicy::getClusters()
{
    return clusters_;
}

void AccessPolicy::setClusters(const std::vector<std::string>& value)
{
    clusters_ = value;
    clustersIsSet_ = true;
}

bool AccessPolicy::clustersIsSet() const
{
    return clustersIsSet_;
}

void AccessPolicy::unsetclusters()
{
    clustersIsSet_ = false;
}

AccessScope AccessPolicy::getAccessScope() const
{
    return accessScope_;
}

void AccessPolicy::setAccessScope(const AccessScope& value)
{
    accessScope_ = value;
    accessScopeIsSet_ = true;
}

bool AccessPolicy::accessScopeIsSet() const
{
    return accessScopeIsSet_;
}

void AccessPolicy::unsetaccessScope()
{
    accessScopeIsSet_ = false;
}

std::string AccessPolicy::getPolicyType() const
{
    return policyType_;
}

void AccessPolicy::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool AccessPolicy::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void AccessPolicy::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

Principal AccessPolicy::getPrincipal() const
{
    return principal_;
}

void AccessPolicy::setPrincipal(const Principal& value)
{
    principal_ = value;
    principalIsSet_ = true;
}

bool AccessPolicy::principalIsSet() const
{
    return principalIsSet_;
}

void AccessPolicy::unsetprincipal()
{
    principalIsSet_ = false;
}

}
}
}
}
}


