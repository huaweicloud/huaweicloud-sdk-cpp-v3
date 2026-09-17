

#include "huaweicloud/projectman/v4/model/RelationObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




RelationObject::RelationObject()
{
    objectType_ = "";
    objectTypeIsSet_ = false;
    categoriesIsSet_ = false;
}

RelationObject::~RelationObject() = default;

void RelationObject::validate()
{
}

web::json::value RelationObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(categoriesIsSet_) {
        val[utility::conversions::to_string_t("categories")] = ModelBase::toJson(categories_);
    }

    return val;
}
bool RelationObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
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
    return ok;
}


std::string RelationObject::getObjectType() const
{
    return objectType_;
}

void RelationObject::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool RelationObject::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void RelationObject::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::vector<std::string>& RelationObject::getCategories()
{
    return categories_;
}

void RelationObject::setCategories(const std::vector<std::string>& value)
{
    categories_ = value;
    categoriesIsSet_ = true;
}

bool RelationObject::categoriesIsSet() const
{
    return categoriesIsSet_;
}

void RelationObject::unsetcategories()
{
    categoriesIsSet_ = false;
}

}
}
}
}
}


