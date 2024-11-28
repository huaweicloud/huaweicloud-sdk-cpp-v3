

#include "huaweicloud/kms/v2/model/AssociateAliasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




AssociateAliasResponse::AssociateAliasResponse()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    aliasUrn_ = "";
    aliasUrnIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

AssociateAliasResponse::~AssociateAliasResponse() = default;

void AssociateAliasResponse::validate()
{
}

web::json::value AssociateAliasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(aliasUrnIsSet_) {
        val[utility::conversions::to_string_t("alias_urn")] = ModelBase::toJson(aliasUrn_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool AssociateAliasResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliasUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string AssociateAliasResponse::getDomainId() const
{
    return domainId_;
}

void AssociateAliasResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AssociateAliasResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AssociateAliasResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string AssociateAliasResponse::getKeyId() const
{
    return keyId_;
}

void AssociateAliasResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool AssociateAliasResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void AssociateAliasResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string AssociateAliasResponse::getAlias() const
{
    return alias_;
}

void AssociateAliasResponse::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool AssociateAliasResponse::aliasIsSet() const
{
    return aliasIsSet_;
}

void AssociateAliasResponse::unsetalias()
{
    aliasIsSet_ = false;
}

std::string AssociateAliasResponse::getAliasUrn() const
{
    return aliasUrn_;
}

void AssociateAliasResponse::setAliasUrn(const std::string& value)
{
    aliasUrn_ = value;
    aliasUrnIsSet_ = true;
}

bool AssociateAliasResponse::aliasUrnIsSet() const
{
    return aliasUrnIsSet_;
}

void AssociateAliasResponse::unsetaliasUrn()
{
    aliasUrnIsSet_ = false;
}

std::string AssociateAliasResponse::getCreateTime() const
{
    return createTime_;
}

void AssociateAliasResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AssociateAliasResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AssociateAliasResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AssociateAliasResponse::getUpdateTime() const
{
    return updateTime_;
}

void AssociateAliasResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AssociateAliasResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AssociateAliasResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


