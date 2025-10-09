

#include "huaweicloud/cce/v3/model/CreateAccessPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAccessPolicyResponse::CreateAccessPolicyResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    clustersIsSet_ = false;
    accessScopeIsSet_ = false;
    policyType_ = "";
    policyTypeIsSet_ = false;
    principalIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
}

CreateAccessPolicyResponse::~CreateAccessPolicyResponse() = default;

void CreateAccessPolicyResponse::validate()
{
}

web::json::value CreateAccessPolicyResponse::toJson() const
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
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policyId")] = ModelBase::toJson(policyId_);
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("updateTime")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool CreateAccessPolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("policyId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policyId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTime"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string CreateAccessPolicyResponse::getKind() const
{
    return kind_;
}

void CreateAccessPolicyResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateAccessPolicyResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateAccessPolicyResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string CreateAccessPolicyResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateAccessPolicyResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateAccessPolicyResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateAccessPolicyResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreateAccessPolicyResponse::getName() const
{
    return name_;
}

void CreateAccessPolicyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateAccessPolicyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateAccessPolicyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateAccessPolicyResponse::getPolicyId() const
{
    return policyId_;
}

void CreateAccessPolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool CreateAccessPolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void CreateAccessPolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::vector<std::string>& CreateAccessPolicyResponse::getClusters()
{
    return clusters_;
}

void CreateAccessPolicyResponse::setClusters(const std::vector<std::string>& value)
{
    clusters_ = value;
    clustersIsSet_ = true;
}

bool CreateAccessPolicyResponse::clustersIsSet() const
{
    return clustersIsSet_;
}

void CreateAccessPolicyResponse::unsetclusters()
{
    clustersIsSet_ = false;
}

AccessScope CreateAccessPolicyResponse::getAccessScope() const
{
    return accessScope_;
}

void CreateAccessPolicyResponse::setAccessScope(const AccessScope& value)
{
    accessScope_ = value;
    accessScopeIsSet_ = true;
}

bool CreateAccessPolicyResponse::accessScopeIsSet() const
{
    return accessScopeIsSet_;
}

void CreateAccessPolicyResponse::unsetaccessScope()
{
    accessScopeIsSet_ = false;
}

std::string CreateAccessPolicyResponse::getPolicyType() const
{
    return policyType_;
}

void CreateAccessPolicyResponse::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool CreateAccessPolicyResponse::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void CreateAccessPolicyResponse::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

Principal CreateAccessPolicyResponse::getPrincipal() const
{
    return principal_;
}

void CreateAccessPolicyResponse::setPrincipal(const Principal& value)
{
    principal_ = value;
    principalIsSet_ = true;
}

bool CreateAccessPolicyResponse::principalIsSet() const
{
    return principalIsSet_;
}

void CreateAccessPolicyResponse::unsetprincipal()
{
    principalIsSet_ = false;
}

utility::datetime CreateAccessPolicyResponse::getCreateTime() const
{
    return createTime_;
}

void CreateAccessPolicyResponse::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateAccessPolicyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateAccessPolicyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime CreateAccessPolicyResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateAccessPolicyResponse::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateAccessPolicyResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateAccessPolicyResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


