

#include "huaweicloud/metastudio/v1/model/VocabularyConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VocabularyConfig::VocabularyConfig()
{
    id_ = "";
    idIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

VocabularyConfig::~VocabularyConfig() = default;

void VocabularyConfig::validate()
{
}

web::json::value VocabularyConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool VocabularyConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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


std::string VocabularyConfig::getId() const
{
    return id_;
}

void VocabularyConfig::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VocabularyConfig::idIsSet() const
{
    return idIsSet_;
}

void VocabularyConfig::unsetid()
{
    idIsSet_ = false;
}

std::string VocabularyConfig::getKey() const
{
    return key_;
}

void VocabularyConfig::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool VocabularyConfig::keyIsSet() const
{
    return keyIsSet_;
}

void VocabularyConfig::unsetkey()
{
    keyIsSet_ = false;
}

std::string VocabularyConfig::getValue() const
{
    return value_;
}

void VocabularyConfig::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool VocabularyConfig::valueIsSet() const
{
    return valueIsSet_;
}

void VocabularyConfig::unsetvalue()
{
    valueIsSet_ = false;
}

std::string VocabularyConfig::getType() const
{
    return type_;
}

void VocabularyConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool VocabularyConfig::typeIsSet() const
{
    return typeIsSet_;
}

void VocabularyConfig::unsettype()
{
    typeIsSet_ = false;
}

std::string VocabularyConfig::getCreateTime() const
{
    return createTime_;
}

void VocabularyConfig::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool VocabularyConfig::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void VocabularyConfig::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string VocabularyConfig::getUpdateTime() const
{
    return updateTime_;
}

void VocabularyConfig::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool VocabularyConfig::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void VocabularyConfig::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


