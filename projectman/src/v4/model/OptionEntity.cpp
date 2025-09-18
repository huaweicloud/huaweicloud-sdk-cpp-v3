

#include "huaweicloud/projectman/v4/model/OptionEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




OptionEntity::OptionEntity()
{
    id_ = "";
    idIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    displayValue_ = "";
    displayValueIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
}

OptionEntity::~OptionEntity() = default;

void OptionEntity::validate()
{
}

web::json::value OptionEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(displayValueIsSet_) {
        val[utility::conversions::to_string_t("display_value")] = ModelBase::toJson(displayValue_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }

    return val;
}
bool OptionEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
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
    return ok;
}


std::string OptionEntity::getId() const
{
    return id_;
}

void OptionEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OptionEntity::idIsSet() const
{
    return idIsSet_;
}

void OptionEntity::unsetid()
{
    idIsSet_ = false;
}

std::string OptionEntity::getCode() const
{
    return code_;
}

void OptionEntity::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool OptionEntity::codeIsSet() const
{
    return codeIsSet_;
}

void OptionEntity::unsetcode()
{
    codeIsSet_ = false;
}

std::string OptionEntity::getDisplayValue() const
{
    return displayValue_;
}

void OptionEntity::setDisplayValue(const std::string& value)
{
    displayValue_ = value;
    displayValueIsSet_ = true;
}

bool OptionEntity::displayValueIsSet() const
{
    return displayValueIsSet_;
}

void OptionEntity::unsetdisplayValue()
{
    displayValueIsSet_ = false;
}

std::string OptionEntity::getValue() const
{
    return value_;
}

void OptionEntity::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool OptionEntity::valueIsSet() const
{
    return valueIsSet_;
}

void OptionEntity::unsetvalue()
{
    valueIsSet_ = false;
}

int32_t OptionEntity::getLevel() const
{
    return level_;
}

void OptionEntity::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool OptionEntity::levelIsSet() const
{
    return levelIsSet_;
}

void OptionEntity::unsetlevel()
{
    levelIsSet_ = false;
}

int32_t OptionEntity::getSequence() const
{
    return sequence_;
}

void OptionEntity::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool OptionEntity::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void OptionEntity::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string OptionEntity::getParentId() const
{
    return parentId_;
}

void OptionEntity::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool OptionEntity::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void OptionEntity::unsetparentId()
{
    parentIdIsSet_ = false;
}

}
}
}
}
}


