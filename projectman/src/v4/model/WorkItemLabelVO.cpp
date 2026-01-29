

#include "huaweicloud/projectman/v4/model/WorkItemLabelVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemLabelVO::WorkItemLabelVO()
{
    id_ = "";
    idIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    labelType_ = "";
    labelTypeIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
}

WorkItemLabelVO::~WorkItemLabelVO() = default;

void WorkItemLabelVO::validate()
{
}

web::json::value WorkItemLabelVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(labelTypeIsSet_) {
        val[utility::conversions::to_string_t("label_type")] = ModelBase::toJson(labelType_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }

    return val;
}
bool WorkItemLabelVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    return ok;
}


std::string WorkItemLabelVO::getId() const
{
    return id_;
}

void WorkItemLabelVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkItemLabelVO::idIsSet() const
{
    return idIsSet_;
}

void WorkItemLabelVO::unsetid()
{
    idIsSet_ = false;
}

std::string WorkItemLabelVO::getCategory() const
{
    return category_;
}

void WorkItemLabelVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool WorkItemLabelVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void WorkItemLabelVO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string WorkItemLabelVO::getLabelType() const
{
    return labelType_;
}

void WorkItemLabelVO::setLabelType(const std::string& value)
{
    labelType_ = value;
    labelTypeIsSet_ = true;
}

bool WorkItemLabelVO::labelTypeIsSet() const
{
    return labelTypeIsSet_;
}

void WorkItemLabelVO::unsetlabelType()
{
    labelTypeIsSet_ = false;
}

std::string WorkItemLabelVO::getColor() const
{
    return color_;
}

void WorkItemLabelVO::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool WorkItemLabelVO::colorIsSet() const
{
    return colorIsSet_;
}

void WorkItemLabelVO::unsetcolor()
{
    colorIsSet_ = false;
}

std::string WorkItemLabelVO::getTitle() const
{
    return title_;
}

void WorkItemLabelVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool WorkItemLabelVO::titleIsSet() const
{
    return titleIsSet_;
}

void WorkItemLabelVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string WorkItemLabelVO::getType() const
{
    return type_;
}

void WorkItemLabelVO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkItemLabelVO::typeIsSet() const
{
    return typeIsSet_;
}

void WorkItemLabelVO::unsettype()
{
    typeIsSet_ = false;
}

std::string WorkItemLabelVO::getState() const
{
    return state_;
}

void WorkItemLabelVO::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool WorkItemLabelVO::stateIsSet() const
{
    return stateIsSet_;
}

void WorkItemLabelVO::unsetstate()
{
    stateIsSet_ = false;
}

std::string WorkItemLabelVO::getModifiedBy() const
{
    return modifiedBy_;
}

void WorkItemLabelVO::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool WorkItemLabelVO::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void WorkItemLabelVO::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

}
}
}
}
}


