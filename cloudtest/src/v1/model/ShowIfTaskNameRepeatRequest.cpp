

#include "huaweicloud/cloudtest/v1/model/ShowIfTaskNameRepeatRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIfTaskNameRepeatRequest::ShowIfTaskNameRepeatRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ShowIfTaskNameRepeatRequest::~ShowIfTaskNameRepeatRequest() = default;

void ShowIfTaskNameRepeatRequest::validate()
{
}

web::json::value ShowIfTaskNameRepeatRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ShowIfTaskNameRepeatRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ShowIfTaskNameRepeatRequest::getServiceId() const
{
    return serviceId_;
}

void ShowIfTaskNameRepeatRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowIfTaskNameRepeatRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowIfTaskNameRepeatRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowIfTaskNameRepeatRequest::getId() const
{
    return id_;
}

void ShowIfTaskNameRepeatRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowIfTaskNameRepeatRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowIfTaskNameRepeatRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ShowIfTaskNameRepeatRequest::getName() const
{
    return name_;
}

void ShowIfTaskNameRepeatRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowIfTaskNameRepeatRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowIfTaskNameRepeatRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


