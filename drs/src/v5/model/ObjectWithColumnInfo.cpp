

#include "huaweicloud/drs/v5/model/ObjectWithColumnInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ObjectWithColumnInfo::ObjectWithColumnInfo()
{
    id_ = "";
    idIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    aliasName_ = "";
    aliasNameIsSet_ = false;
    noticesIsSet_ = false;
    extendInfo_ = "";
    extendInfoIsSet_ = false;
    isSupportExpand_ = false;
    isSupportExpandIsSet_ = false;
    hasColumnInfo_ = false;
    hasColumnInfoIsSet_ = false;
    isPreset_ = false;
    isPresetIsSet_ = false;
    tokenCount_ = "";
    tokenCountIsSet_ = false;
    isSent_ = false;
    isSentIsSet_ = false;
    sentAliasName_ = "";
    sentAliasNameIsSet_ = false;
}

ObjectWithColumnInfo::~ObjectWithColumnInfo() = default;

void ObjectWithColumnInfo::validate()
{
}

web::json::value ObjectWithColumnInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(aliasNameIsSet_) {
        val[utility::conversions::to_string_t("alias_name")] = ModelBase::toJson(aliasName_);
    }
    if(noticesIsSet_) {
        val[utility::conversions::to_string_t("notices")] = ModelBase::toJson(notices_);
    }
    if(extendInfoIsSet_) {
        val[utility::conversions::to_string_t("extend_info")] = ModelBase::toJson(extendInfo_);
    }
    if(isSupportExpandIsSet_) {
        val[utility::conversions::to_string_t("is_support_expand")] = ModelBase::toJson(isSupportExpand_);
    }
    if(hasColumnInfoIsSet_) {
        val[utility::conversions::to_string_t("has_column_info")] = ModelBase::toJson(hasColumnInfo_);
    }
    if(isPresetIsSet_) {
        val[utility::conversions::to_string_t("is_preset")] = ModelBase::toJson(isPreset_);
    }
    if(tokenCountIsSet_) {
        val[utility::conversions::to_string_t("token_count")] = ModelBase::toJson(tokenCount_);
    }
    if(isSentIsSet_) {
        val[utility::conversions::to_string_t("is_sent")] = ModelBase::toJson(isSent_);
    }
    if(sentAliasNameIsSet_) {
        val[utility::conversions::to_string_t("sent_alias_name")] = ModelBase::toJson(sentAliasName_);
    }

    return val;
}
bool ObjectWithColumnInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliasName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notices"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotices(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_expand"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_expand"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportExpand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_column_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_column_info"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasColumnInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_preset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_preset"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPreset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTokenCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sent_alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sent_alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSentAliasName(refVal);
        }
    }
    return ok;
}


std::string ObjectWithColumnInfo::getId() const
{
    return id_;
}

void ObjectWithColumnInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ObjectWithColumnInfo::idIsSet() const
{
    return idIsSet_;
}

void ObjectWithColumnInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ObjectWithColumnInfo::getParentId() const
{
    return parentId_;
}

void ObjectWithColumnInfo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ObjectWithColumnInfo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ObjectWithColumnInfo::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string ObjectWithColumnInfo::getType() const
{
    return type_;
}

void ObjectWithColumnInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ObjectWithColumnInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ObjectWithColumnInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string ObjectWithColumnInfo::getName() const
{
    return name_;
}

void ObjectWithColumnInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ObjectWithColumnInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ObjectWithColumnInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ObjectWithColumnInfo::getAliasName() const
{
    return aliasName_;
}

void ObjectWithColumnInfo::setAliasName(const std::string& value)
{
    aliasName_ = value;
    aliasNameIsSet_ = true;
}

bool ObjectWithColumnInfo::aliasNameIsSet() const
{
    return aliasNameIsSet_;
}

void ObjectWithColumnInfo::unsetaliasName()
{
    aliasNameIsSet_ = false;
}

std::vector<std::string>& ObjectWithColumnInfo::getNotices()
{
    return notices_;
}

void ObjectWithColumnInfo::setNotices(const std::vector<std::string>& value)
{
    notices_ = value;
    noticesIsSet_ = true;
}

bool ObjectWithColumnInfo::noticesIsSet() const
{
    return noticesIsSet_;
}

void ObjectWithColumnInfo::unsetnotices()
{
    noticesIsSet_ = false;
}

std::string ObjectWithColumnInfo::getExtendInfo() const
{
    return extendInfo_;
}

void ObjectWithColumnInfo::setExtendInfo(const std::string& value)
{
    extendInfo_ = value;
    extendInfoIsSet_ = true;
}

bool ObjectWithColumnInfo::extendInfoIsSet() const
{
    return extendInfoIsSet_;
}

void ObjectWithColumnInfo::unsetextendInfo()
{
    extendInfoIsSet_ = false;
}

bool ObjectWithColumnInfo::isIsSupportExpand() const
{
    return isSupportExpand_;
}

void ObjectWithColumnInfo::setIsSupportExpand(bool value)
{
    isSupportExpand_ = value;
    isSupportExpandIsSet_ = true;
}

bool ObjectWithColumnInfo::isSupportExpandIsSet() const
{
    return isSupportExpandIsSet_;
}

void ObjectWithColumnInfo::unsetisSupportExpand()
{
    isSupportExpandIsSet_ = false;
}

bool ObjectWithColumnInfo::isHasColumnInfo() const
{
    return hasColumnInfo_;
}

void ObjectWithColumnInfo::setHasColumnInfo(bool value)
{
    hasColumnInfo_ = value;
    hasColumnInfoIsSet_ = true;
}

bool ObjectWithColumnInfo::hasColumnInfoIsSet() const
{
    return hasColumnInfoIsSet_;
}

void ObjectWithColumnInfo::unsethasColumnInfo()
{
    hasColumnInfoIsSet_ = false;
}

bool ObjectWithColumnInfo::isIsPreset() const
{
    return isPreset_;
}

void ObjectWithColumnInfo::setIsPreset(bool value)
{
    isPreset_ = value;
    isPresetIsSet_ = true;
}

bool ObjectWithColumnInfo::isPresetIsSet() const
{
    return isPresetIsSet_;
}

void ObjectWithColumnInfo::unsetisPreset()
{
    isPresetIsSet_ = false;
}

std::string ObjectWithColumnInfo::getTokenCount() const
{
    return tokenCount_;
}

void ObjectWithColumnInfo::setTokenCount(const std::string& value)
{
    tokenCount_ = value;
    tokenCountIsSet_ = true;
}

bool ObjectWithColumnInfo::tokenCountIsSet() const
{
    return tokenCountIsSet_;
}

void ObjectWithColumnInfo::unsettokenCount()
{
    tokenCountIsSet_ = false;
}

bool ObjectWithColumnInfo::isIsSent() const
{
    return isSent_;
}

void ObjectWithColumnInfo::setIsSent(bool value)
{
    isSent_ = value;
    isSentIsSet_ = true;
}

bool ObjectWithColumnInfo::isSentIsSet() const
{
    return isSentIsSet_;
}

void ObjectWithColumnInfo::unsetisSent()
{
    isSentIsSet_ = false;
}

std::string ObjectWithColumnInfo::getSentAliasName() const
{
    return sentAliasName_;
}

void ObjectWithColumnInfo::setSentAliasName(const std::string& value)
{
    sentAliasName_ = value;
    sentAliasNameIsSet_ = true;
}

bool ObjectWithColumnInfo::sentAliasNameIsSet() const
{
    return sentAliasNameIsSet_;
}

void ObjectWithColumnInfo::unsetsentAliasName()
{
    sentAliasNameIsSet_ = false;
}

}
}
}
}
}


