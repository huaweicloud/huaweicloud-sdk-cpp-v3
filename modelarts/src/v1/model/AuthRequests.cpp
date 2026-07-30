

#include "huaweicloud/modelarts/v1/model/AuthRequests.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AuthRequests::AuthRequests()
{
    actionId_ = "";
    actionIdIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    serviceAttributesIsSet_ = false;
}

AuthRequests::~AuthRequests() = default;

void AuthRequests::validate()
{
}

web::json::value AuthRequests::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIdIsSet_) {
        val[utility::conversions::to_string_t("action_id")] = ModelBase::toJson(actionId_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(serviceAttributesIsSet_) {
        val[utility::conversions::to_string_t("service_attributes")] = ModelBase::toJson(serviceAttributes_);
    }

    return val;
}
bool AuthRequests::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_attributes"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceAttributes(refVal);
        }
    }
    return ok;
}


std::string AuthRequests::getActionId() const
{
    return actionId_;
}

void AuthRequests::setActionId(const std::string& value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool AuthRequests::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void AuthRequests::unsetactionId()
{
    actionIdIsSet_ = false;
}

std::string AuthRequests::getAction() const
{
    return action_;
}

void AuthRequests::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool AuthRequests::actionIsSet() const
{
    return actionIsSet_;
}

void AuthRequests::unsetaction()
{
    actionIsSet_ = false;
}

std::string AuthRequests::getResource() const
{
    return resource_;
}

void AuthRequests::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool AuthRequests::resourceIsSet() const
{
    return resourceIsSet_;
}

void AuthRequests::unsetresource()
{
    resourceIsSet_ = false;
}

std::map<std::string, std::string>& AuthRequests::getServiceAttributes()
{
    return serviceAttributes_;
}

void AuthRequests::setServiceAttributes(const std::map<std::string, std::string>& value)
{
    serviceAttributes_ = value;
    serviceAttributesIsSet_ = true;
}

bool AuthRequests::serviceAttributesIsSet() const
{
    return serviceAttributesIsSet_;
}

void AuthRequests::unsetserviceAttributes()
{
    serviceAttributesIsSet_ = false;
}

}
}
}
}
}


