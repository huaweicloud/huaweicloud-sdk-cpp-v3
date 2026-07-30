

#include "huaweicloud/modelarts/v1/model/ListDevServerJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListDevServerJobsRequest::ListDevServerJobsRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    visible_ = false;
    visibleIsSet_ = false;
}

ListDevServerJobsRequest::~ListDevServerJobsRequest() = default;

void ListDevServerJobsRequest::validate()
{
}

web::json::value ListDevServerJobsRequest::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(visibleIsSet_) {
        val[utility::conversions::to_string_t("visible")] = ModelBase::toJson(visible_);
    }

    return val;
}
bool ListDevServerJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visible"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisible(refVal);
        }
    }
    return ok;
}


std::string ListDevServerJobsRequest::getId() const
{
    return id_;
}

void ListDevServerJobsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListDevServerJobsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListDevServerJobsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListDevServerJobsRequest::getName() const
{
    return name_;
}

void ListDevServerJobsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDevServerJobsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListDevServerJobsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListDevServerJobsRequest::getType() const
{
    return type_;
}

void ListDevServerJobsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListDevServerJobsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListDevServerJobsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListDevServerJobsRequest::getStatus() const
{
    return status_;
}

void ListDevServerJobsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListDevServerJobsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListDevServerJobsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

bool ListDevServerJobsRequest::isVisible() const
{
    return visible_;
}

void ListDevServerJobsRequest::setVisible(bool value)
{
    visible_ = value;
    visibleIsSet_ = true;
}

bool ListDevServerJobsRequest::visibleIsSet() const
{
    return visibleIsSet_;
}

void ListDevServerJobsRequest::unsetvisible()
{
    visibleIsSet_ = false;
}

}
}
}
}
}


