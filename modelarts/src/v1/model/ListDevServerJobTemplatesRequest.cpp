

#include "huaweicloud/modelarts/v1/model/ListDevServerJobTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListDevServerJobTemplatesRequest::ListDevServerJobTemplatesRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListDevServerJobTemplatesRequest::~ListDevServerJobTemplatesRequest() = default;

void ListDevServerJobTemplatesRequest::validate()
{
}

web::json::value ListDevServerJobTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListDevServerJobTemplatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListDevServerJobTemplatesRequest::getId() const
{
    return id_;
}

void ListDevServerJobTemplatesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListDevServerJobTemplatesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListDevServerJobTemplatesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListDevServerJobTemplatesRequest::getName() const
{
    return name_;
}

void ListDevServerJobTemplatesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDevServerJobTemplatesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListDevServerJobTemplatesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListDevServerJobTemplatesRequest::getType() const
{
    return type_;
}

void ListDevServerJobTemplatesRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListDevServerJobTemplatesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListDevServerJobTemplatesRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


