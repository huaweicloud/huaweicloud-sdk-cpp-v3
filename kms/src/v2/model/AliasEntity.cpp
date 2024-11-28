

#include "huaweicloud/kms/v2/model/AliasEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




AliasEntity::AliasEntity()
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

AliasEntity::~AliasEntity() = default;

void AliasEntity::validate()
{
}

web::json::value AliasEntity::toJson() const
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
bool AliasEntity::fromJson(const web::json::value& val)
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


std::string AliasEntity::getDomainId() const
{
    return domainId_;
}

void AliasEntity::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AliasEntity::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AliasEntity::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string AliasEntity::getKeyId() const
{
    return keyId_;
}

void AliasEntity::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool AliasEntity::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void AliasEntity::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string AliasEntity::getAlias() const
{
    return alias_;
}

void AliasEntity::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool AliasEntity::aliasIsSet() const
{
    return aliasIsSet_;
}

void AliasEntity::unsetalias()
{
    aliasIsSet_ = false;
}

std::string AliasEntity::getAliasUrn() const
{
    return aliasUrn_;
}

void AliasEntity::setAliasUrn(const std::string& value)
{
    aliasUrn_ = value;
    aliasUrnIsSet_ = true;
}

bool AliasEntity::aliasUrnIsSet() const
{
    return aliasUrnIsSet_;
}

void AliasEntity::unsetaliasUrn()
{
    aliasUrnIsSet_ = false;
}

std::string AliasEntity::getCreateTime() const
{
    return createTime_;
}

void AliasEntity::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AliasEntity::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AliasEntity::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AliasEntity::getUpdateTime() const
{
    return updateTime_;
}

void AliasEntity::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AliasEntity::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AliasEntity::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


