

#include "huaweicloud/functiongraph/v2/model/ListAppTemplatesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListAppTemplatesResult::ListAppTemplatesResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    image_ = "";
    imageIsSet_ = false;
}

ListAppTemplatesResult::~ListAppTemplatesResult() = default;

void ListAppTemplatesResult::validate()
{
}

web::json::value ListAppTemplatesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }

    return val;
}
bool ListAppTemplatesResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    return ok;
}


std::string ListAppTemplatesResult::getId() const
{
    return id_;
}

void ListAppTemplatesResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListAppTemplatesResult::idIsSet() const
{
    return idIsSet_;
}

void ListAppTemplatesResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListAppTemplatesResult::getName() const
{
    return name_;
}

void ListAppTemplatesResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAppTemplatesResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListAppTemplatesResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListAppTemplatesResult::getRuntime() const
{
    return runtime_;
}

void ListAppTemplatesResult::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ListAppTemplatesResult::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ListAppTemplatesResult::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ListAppTemplatesResult::getCategory() const
{
    return category_;
}

void ListAppTemplatesResult::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ListAppTemplatesResult::categoryIsSet() const
{
    return categoryIsSet_;
}

void ListAppTemplatesResult::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ListAppTemplatesResult::getDescription() const
{
    return description_;
}

void ListAppTemplatesResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListAppTemplatesResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListAppTemplatesResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListAppTemplatesResult::getImage() const
{
    return image_;
}

void ListAppTemplatesResult::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ListAppTemplatesResult::imageIsSet() const
{
    return imageIsSet_;
}

void ListAppTemplatesResult::unsetimage()
{
    imageIsSet_ = false;
}

}
}
}
}
}


