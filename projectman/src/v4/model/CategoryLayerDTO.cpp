

#include "huaweicloud/projectman/v4/model/CategoryLayerDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CategoryLayerDTO::CategoryLayerDTO()
{
    categoryIsSet_ = false;
    linkParentField_ = "";
    linkParentFieldIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    childrenIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    categoryCode_ = "";
    categoryCodeIsSet_ = false;
    categoryId_ = "";
    categoryIdIsSet_ = false;
    layerType_ = "";
    layerTypeIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    rootId_ = "";
    rootIdIsSet_ = false;
    positionX_ = 0;
    positionXIsSet_ = false;
    positionY_ = 0;
    positionYIsSet_ = false;
}

CategoryLayerDTO::~CategoryLayerDTO() = default;

void CategoryLayerDTO::validate()
{
}

web::json::value CategoryLayerDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(linkParentFieldIsSet_) {
        val[utility::conversions::to_string_t("link_parent_field")] = ModelBase::toJson(linkParentField_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(categoryCodeIsSet_) {
        val[utility::conversions::to_string_t("category_code")] = ModelBase::toJson(categoryCode_);
    }
    if(categoryIdIsSet_) {
        val[utility::conversions::to_string_t("category_id")] = ModelBase::toJson(categoryId_);
    }
    if(layerTypeIsSet_) {
        val[utility::conversions::to_string_t("layer_type")] = ModelBase::toJson(layerType_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(rootIdIsSet_) {
        val[utility::conversions::to_string_t("root_id")] = ModelBase::toJson(rootId_);
    }
    if(positionXIsSet_) {
        val[utility::conversions::to_string_t("position_x")] = ModelBase::toJson(positionX_);
    }
    if(positionYIsSet_) {
        val[utility::conversions::to_string_t("position_y")] = ModelBase::toJson(positionY_);
    }

    return val;
}
bool CategoryLayerDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            BaseCategory refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link_parent_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link_parent_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinkParentField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<CategoryLayerDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("category_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layer_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayerType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position_x"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position_x"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPositionX(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position_y"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position_y"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPositionY(refVal);
        }
    }
    return ok;
}


BaseCategory CategoryLayerDTO::getCategory() const
{
    return category_;
}

void CategoryLayerDTO::setCategory(const BaseCategory& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CategoryLayerDTO::categoryIsSet() const
{
    return categoryIsSet_;
}

void CategoryLayerDTO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CategoryLayerDTO::getLinkParentField() const
{
    return linkParentField_;
}

void CategoryLayerDTO::setLinkParentField(const std::string& value)
{
    linkParentField_ = value;
    linkParentFieldIsSet_ = true;
}

bool CategoryLayerDTO::linkParentFieldIsSet() const
{
    return linkParentFieldIsSet_;
}

void CategoryLayerDTO::unsetlinkParentField()
{
    linkParentFieldIsSet_ = false;
}

std::string CategoryLayerDTO::getId() const
{
    return id_;
}

void CategoryLayerDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CategoryLayerDTO::idIsSet() const
{
    return idIsSet_;
}

void CategoryLayerDTO::unsetid()
{
    idIsSet_ = false;
}

std::vector<CategoryLayerDTO>& CategoryLayerDTO::getChildren()
{
    return *children_;
}

void CategoryLayerDTO::setChildren(const std::vector<CategoryLayerDTO>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool CategoryLayerDTO::childrenIsSet() const
{
    return childrenIsSet_;
}

void CategoryLayerDTO::unsetchildren()
{
    childrenIsSet_ = false;
}

std::string CategoryLayerDTO::getCode() const
{
    return code_;
}

void CategoryLayerDTO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CategoryLayerDTO::codeIsSet() const
{
    return codeIsSet_;
}

void CategoryLayerDTO::unsetcode()
{
    codeIsSet_ = false;
}

std::string CategoryLayerDTO::getCategoryCode() const
{
    return categoryCode_;
}

void CategoryLayerDTO::setCategoryCode(const std::string& value)
{
    categoryCode_ = value;
    categoryCodeIsSet_ = true;
}

bool CategoryLayerDTO::categoryCodeIsSet() const
{
    return categoryCodeIsSet_;
}

void CategoryLayerDTO::unsetcategoryCode()
{
    categoryCodeIsSet_ = false;
}

std::string CategoryLayerDTO::getCategoryId() const
{
    return categoryId_;
}

void CategoryLayerDTO::setCategoryId(const std::string& value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool CategoryLayerDTO::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void CategoryLayerDTO::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string CategoryLayerDTO::getLayerType() const
{
    return layerType_;
}

void CategoryLayerDTO::setLayerType(const std::string& value)
{
    layerType_ = value;
    layerTypeIsSet_ = true;
}

bool CategoryLayerDTO::layerTypeIsSet() const
{
    return layerTypeIsSet_;
}

void CategoryLayerDTO::unsetlayerType()
{
    layerTypeIsSet_ = false;
}

std::string CategoryLayerDTO::getParentId() const
{
    return parentId_;
}

void CategoryLayerDTO::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool CategoryLayerDTO::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void CategoryLayerDTO::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string CategoryLayerDTO::getRootId() const
{
    return rootId_;
}

void CategoryLayerDTO::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool CategoryLayerDTO::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void CategoryLayerDTO::unsetrootId()
{
    rootIdIsSet_ = false;
}

int32_t CategoryLayerDTO::getPositionX() const
{
    return positionX_;
}

void CategoryLayerDTO::setPositionX(int32_t value)
{
    positionX_ = value;
    positionXIsSet_ = true;
}

bool CategoryLayerDTO::positionXIsSet() const
{
    return positionXIsSet_;
}

void CategoryLayerDTO::unsetpositionX()
{
    positionXIsSet_ = false;
}

int32_t CategoryLayerDTO::getPositionY() const
{
    return positionY_;
}

void CategoryLayerDTO::setPositionY(int32_t value)
{
    positionY_ = value;
    positionYIsSet_ = true;
}

bool CategoryLayerDTO::positionYIsSet() const
{
    return positionYIsSet_;
}

void CategoryLayerDTO::unsetpositionY()
{
    positionYIsSet_ = false;
}

}
}
}
}
}


