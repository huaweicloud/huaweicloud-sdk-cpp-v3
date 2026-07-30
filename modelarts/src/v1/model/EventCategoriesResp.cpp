

#include "huaweicloud/modelarts/v1/model/EventCategoriesResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




EventCategoriesResp::EventCategoriesResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    notification_ = false;
    notificationIsSet_ = false;
}

EventCategoriesResp::~EventCategoriesResp() = default;

void EventCategoriesResp::validate()
{
}

web::json::value EventCategoriesResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(notificationIsSet_) {
        val[utility::conversions::to_string_t("notification")] = ModelBase::toJson(notification_);
    }

    return val;
}
bool EventCategoriesResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotification(refVal);
        }
    }
    return ok;
}


std::string EventCategoriesResp::getId() const
{
    return id_;
}

void EventCategoriesResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EventCategoriesResp::idIsSet() const
{
    return idIsSet_;
}

void EventCategoriesResp::unsetid()
{
    idIsSet_ = false;
}

std::string EventCategoriesResp::getName() const
{
    return name_;
}

void EventCategoriesResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EventCategoriesResp::nameIsSet() const
{
    return nameIsSet_;
}

void EventCategoriesResp::unsetname()
{
    nameIsSet_ = false;
}

std::string EventCategoriesResp::getDescription() const
{
    return description_;
}

void EventCategoriesResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EventCategoriesResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EventCategoriesResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool EventCategoriesResp::isNotification() const
{
    return notification_;
}

void EventCategoriesResp::setNotification(bool value)
{
    notification_ = value;
    notificationIsSet_ = true;
}

bool EventCategoriesResp::notificationIsSet() const
{
    return notificationIsSet_;
}

void EventCategoriesResp::unsetnotification()
{
    notificationIsSet_ = false;
}

}
}
}
}
}


