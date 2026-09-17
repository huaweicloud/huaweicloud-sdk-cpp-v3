

#include "huaweicloud/projectman/v4/model/Relation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




Relation::Relation()
{
    type_ = "";
    typeIsSet_ = false;
    categoriesIsSet_ = false;
    linkFieldCode_ = "";
    linkFieldCodeIsSet_ = false;
    relationName_ = "";
    relationNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    displayScope_ = "";
    displayScopeIsSet_ = false;
    actionsIsSet_ = false;
    relateType_ = "";
    relateTypeIsSet_ = false;
}

Relation::~Relation() = default;

void Relation::validate()
{
}

web::json::value Relation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(categoriesIsSet_) {
        val[utility::conversions::to_string_t("categories")] = ModelBase::toJson(categories_);
    }
    if(linkFieldCodeIsSet_) {
        val[utility::conversions::to_string_t("link_field_code")] = ModelBase::toJson(linkFieldCode_);
    }
    if(relationNameIsSet_) {
        val[utility::conversions::to_string_t("relation_name")] = ModelBase::toJson(relationName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(displayScopeIsSet_) {
        val[utility::conversions::to_string_t("display_scope")] = ModelBase::toJson(displayScope_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(relateTypeIsSet_) {
        val[utility::conversions::to_string_t("relate_type")] = ModelBase::toJson(relateType_);
    }

    return val;
}
bool Relation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link_field_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link_field_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinkFieldCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relation_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<RelateAction> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelateType(refVal);
        }
    }
    return ok;
}


std::string Relation::getType() const
{
    return type_;
}

void Relation::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Relation::typeIsSet() const
{
    return typeIsSet_;
}

void Relation::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& Relation::getCategories()
{
    return categories_;
}

void Relation::setCategories(const std::vector<std::string>& value)
{
    categories_ = value;
    categoriesIsSet_ = true;
}

bool Relation::categoriesIsSet() const
{
    return categoriesIsSet_;
}

void Relation::unsetcategories()
{
    categoriesIsSet_ = false;
}

std::string Relation::getLinkFieldCode() const
{
    return linkFieldCode_;
}

void Relation::setLinkFieldCode(const std::string& value)
{
    linkFieldCode_ = value;
    linkFieldCodeIsSet_ = true;
}

bool Relation::linkFieldCodeIsSet() const
{
    return linkFieldCodeIsSet_;
}

void Relation::unsetlinkFieldCode()
{
    linkFieldCodeIsSet_ = false;
}

std::string Relation::getRelationName() const
{
    return relationName_;
}

void Relation::setRelationName(const std::string& value)
{
    relationName_ = value;
    relationNameIsSet_ = true;
}

bool Relation::relationNameIsSet() const
{
    return relationNameIsSet_;
}

void Relation::unsetrelationName()
{
    relationNameIsSet_ = false;
}

std::string Relation::getDescription() const
{
    return description_;
}

void Relation::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Relation::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Relation::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Relation::getDisplayScope() const
{
    return displayScope_;
}

void Relation::setDisplayScope(const std::string& value)
{
    displayScope_ = value;
    displayScopeIsSet_ = true;
}

bool Relation::displayScopeIsSet() const
{
    return displayScopeIsSet_;
}

void Relation::unsetdisplayScope()
{
    displayScopeIsSet_ = false;
}

std::vector<RelateAction>& Relation::getActions()
{
    return actions_;
}

void Relation::setActions(const std::vector<RelateAction>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool Relation::actionsIsSet() const
{
    return actionsIsSet_;
}

void Relation::unsetactions()
{
    actionsIsSet_ = false;
}

std::string Relation::getRelateType() const
{
    return relateType_;
}

void Relation::setRelateType(const std::string& value)
{
    relateType_ = value;
    relateTypeIsSet_ = true;
}

bool Relation::relateTypeIsSet() const
{
    return relateTypeIsSet_;
}

void Relation::unsetrelateType()
{
    relateTypeIsSet_ = false;
}

}
}
}
}
}


