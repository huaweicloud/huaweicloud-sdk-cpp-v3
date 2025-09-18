

#include "huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_project.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkTableIssuseListResponseBody_project::WorkTableIssuseListResponseBody_project()
{
    id_ = 0;
    idIsSet_ = false;
    identifier_ = "";
    identifierIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

WorkTableIssuseListResponseBody_project::~WorkTableIssuseListResponseBody_project() = default;

void WorkTableIssuseListResponseBody_project::validate()
{
}

web::json::value WorkTableIssuseListResponseBody_project::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool WorkTableIssuseListResponseBody_project::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
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


int32_t WorkTableIssuseListResponseBody_project::getId() const
{
    return id_;
}

void WorkTableIssuseListResponseBody_project::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_project::idIsSet() const
{
    return idIsSet_;
}

void WorkTableIssuseListResponseBody_project::unsetid()
{
    idIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_project::getIdentifier() const
{
    return identifier_;
}

void WorkTableIssuseListResponseBody_project::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_project::identifierIsSet() const
{
    return identifierIsSet_;
}

void WorkTableIssuseListResponseBody_project::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_project::getName() const
{
    return name_;
}

void WorkTableIssuseListResponseBody_project::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_project::nameIsSet() const
{
    return nameIsSet_;
}

void WorkTableIssuseListResponseBody_project::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_project::getType() const
{
    return type_;
}

void WorkTableIssuseListResponseBody_project::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_project::typeIsSet() const
{
    return typeIsSet_;
}

void WorkTableIssuseListResponseBody_project::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


