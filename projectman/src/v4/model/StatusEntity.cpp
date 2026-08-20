

#include "huaweicloud/projectman/v4/model/StatusEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




StatusEntity::StatusEntity()
{
    id_ = "";
    idIsSet_ = false;
    belonging_ = "";
    belongingIsSet_ = false;
    displayValue_ = "";
    displayValueIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    modifiedTime_ = "";
    modifiedTimeIsSet_ = false;
    categoryCodeIsSet_ = false;
}

StatusEntity::~StatusEntity() = default;

void StatusEntity::validate()
{
}

web::json::value StatusEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(belongingIsSet_) {
        val[utility::conversions::to_string_t("belonging")] = ModelBase::toJson(belonging_);
    }
    if(displayValueIsSet_) {
        val[utility::conversions::to_string_t("display_value")] = ModelBase::toJson(displayValue_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(modifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("modified_time")] = ModelBase::toJson(modifiedTime_);
    }
    if(categoryCodeIsSet_) {
        val[utility::conversions::to_string_t("category_code")] = ModelBase::toJson(categoryCode_);
    }

    return val;
}
bool StatusEntity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("belonging"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belonging"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelonging(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_code"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryCode(refVal);
        }
    }
    return ok;
}


std::string StatusEntity::getId() const
{
    return id_;
}

void StatusEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StatusEntity::idIsSet() const
{
    return idIsSet_;
}

void StatusEntity::unsetid()
{
    idIsSet_ = false;
}

std::string StatusEntity::getBelonging() const
{
    return belonging_;
}

void StatusEntity::setBelonging(const std::string& value)
{
    belonging_ = value;
    belongingIsSet_ = true;
}

bool StatusEntity::belongingIsSet() const
{
    return belongingIsSet_;
}

void StatusEntity::unsetbelonging()
{
    belongingIsSet_ = false;
}

std::string StatusEntity::getDisplayValue() const
{
    return displayValue_;
}

void StatusEntity::setDisplayValue(const std::string& value)
{
    displayValue_ = value;
    displayValueIsSet_ = true;
}

bool StatusEntity::displayValueIsSet() const
{
    return displayValueIsSet_;
}

void StatusEntity::unsetdisplayValue()
{
    displayValueIsSet_ = false;
}

std::string StatusEntity::getCode() const
{
    return code_;
}

void StatusEntity::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool StatusEntity::codeIsSet() const
{
    return codeIsSet_;
}

void StatusEntity::unsetcode()
{
    codeIsSet_ = false;
}

std::string StatusEntity::getCreatedBy() const
{
    return createdBy_;
}

void StatusEntity::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool StatusEntity::createdByIsSet() const
{
    return createdByIsSet_;
}

void StatusEntity::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string StatusEntity::getCreatedTime() const
{
    return createdTime_;
}

void StatusEntity::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool StatusEntity::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void StatusEntity::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string StatusEntity::getModifiedBy() const
{
    return modifiedBy_;
}

void StatusEntity::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool StatusEntity::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void StatusEntity::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string StatusEntity::getModifiedTime() const
{
    return modifiedTime_;
}

void StatusEntity::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool StatusEntity::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void StatusEntity::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::vector<std::string>& StatusEntity::getCategoryCode()
{
    return categoryCode_;
}

void StatusEntity::setCategoryCode(const std::vector<std::string>& value)
{
    categoryCode_ = value;
    categoryCodeIsSet_ = true;
}

bool StatusEntity::categoryCodeIsSet() const
{
    return categoryCodeIsSet_;
}

void StatusEntity::unsetcategoryCode()
{
    categoryCodeIsSet_ = false;
}

}
}
}
}
}


