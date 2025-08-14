

#include "huaweicloud/iotda/v5/model/ServiceCapability.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ServiceCapability::ServiceCapability()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    propertiesIsSet_ = false;
    commandsIsSet_ = false;
    eventsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    option_ = "";
    optionIsSet_ = false;
}

ServiceCapability::~ServiceCapability() = default;

void ServiceCapability::validate()
{
}

web::json::value ServiceCapability::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(commandsIsSet_) {
        val[utility::conversions::to_string_t("commands")] = ModelBase::toJson(commands_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(optionIsSet_) {
        val[utility::conversions::to_string_t("option")] = ModelBase::toJson(option_);
    }

    return val;
}
bool ServiceCapability::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceProperty> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commands"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commands"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceCommand> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommands(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceEvent> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOption(refVal);
        }
    }
    return ok;
}


std::string ServiceCapability::getServiceId() const
{
    return serviceId_;
}

void ServiceCapability::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ServiceCapability::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ServiceCapability::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ServiceCapability::getServiceType() const
{
    return serviceType_;
}

void ServiceCapability::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ServiceCapability::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ServiceCapability::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::vector<ServiceProperty>& ServiceCapability::getProperties()
{
    return properties_;
}

void ServiceCapability::setProperties(const std::vector<ServiceProperty>& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool ServiceCapability::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void ServiceCapability::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::vector<ServiceCommand>& ServiceCapability::getCommands()
{
    return commands_;
}

void ServiceCapability::setCommands(const std::vector<ServiceCommand>& value)
{
    commands_ = value;
    commandsIsSet_ = true;
}

bool ServiceCapability::commandsIsSet() const
{
    return commandsIsSet_;
}

void ServiceCapability::unsetcommands()
{
    commandsIsSet_ = false;
}

std::vector<ServiceEvent>& ServiceCapability::getEvents()
{
    return events_;
}

void ServiceCapability::setEvents(const std::vector<ServiceEvent>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool ServiceCapability::eventsIsSet() const
{
    return eventsIsSet_;
}

void ServiceCapability::unsetevents()
{
    eventsIsSet_ = false;
}

std::string ServiceCapability::getDescription() const
{
    return description_;
}

void ServiceCapability::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceCapability::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceCapability::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ServiceCapability::getOption() const
{
    return option_;
}

void ServiceCapability::setOption(const std::string& value)
{
    option_ = value;
    optionIsSet_ = true;
}

bool ServiceCapability::optionIsSet() const
{
    return optionIsSet_;
}

void ServiceCapability::unsetoption()
{
    optionIsSet_ = false;
}

}
}
}
}
}


