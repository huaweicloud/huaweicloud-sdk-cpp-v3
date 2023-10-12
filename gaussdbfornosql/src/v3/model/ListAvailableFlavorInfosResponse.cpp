

#include "huaweicloud/gaussdbfornosql/v3/model/ListAvailableFlavorInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListAvailableFlavorInfosResponse::ListAvailableFlavorInfosResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    currentFlavorIsSet_ = false;
    optionalFlavorsIsSet_ = false;
}

ListAvailableFlavorInfosResponse::~ListAvailableFlavorInfosResponse() = default;

void ListAvailableFlavorInfosResponse::validate()
{
}

web::json::value ListAvailableFlavorInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(currentFlavorIsSet_) {
        val[utility::conversions::to_string_t("current_flavor")] = ModelBase::toJson(currentFlavor_);
    }
    if(optionalFlavorsIsSet_) {
        val[utility::conversions::to_string_t("optional_flavors")] = ModelBase::toJson(optionalFlavors_);
    }

    return val;
}
bool ListAvailableFlavorInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_flavor"));
        if(!fieldValue.is_null())
        {
            ComputeFlavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("optional_flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("optional_flavors"));
        if(!fieldValue.is_null())
        {
            OptionalFlavorsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionalFlavors(refVal);
        }
    }
    return ok;
}


std::string ListAvailableFlavorInfosResponse::getInstanceId() const
{
    return instanceId_;
}

void ListAvailableFlavorInfosResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAvailableFlavorInfosResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAvailableFlavorInfosResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAvailableFlavorInfosResponse::getInstanceName() const
{
    return instanceName_;
}

void ListAvailableFlavorInfosResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListAvailableFlavorInfosResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListAvailableFlavorInfosResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

ComputeFlavor ListAvailableFlavorInfosResponse::getCurrentFlavor() const
{
    return currentFlavor_;
}

void ListAvailableFlavorInfosResponse::setCurrentFlavor(const ComputeFlavor& value)
{
    currentFlavor_ = value;
    currentFlavorIsSet_ = true;
}

bool ListAvailableFlavorInfosResponse::currentFlavorIsSet() const
{
    return currentFlavorIsSet_;
}

void ListAvailableFlavorInfosResponse::unsetcurrentFlavor()
{
    currentFlavorIsSet_ = false;
}

OptionalFlavorsInfo ListAvailableFlavorInfosResponse::getOptionalFlavors() const
{
    return optionalFlavors_;
}

void ListAvailableFlavorInfosResponse::setOptionalFlavors(const OptionalFlavorsInfo& value)
{
    optionalFlavors_ = value;
    optionalFlavorsIsSet_ = true;
}

bool ListAvailableFlavorInfosResponse::optionalFlavorsIsSet() const
{
    return optionalFlavorsIsSet_;
}

void ListAvailableFlavorInfosResponse::unsetoptionalFlavors()
{
    optionalFlavorsIsSet_ = false;
}

}
}
}
}
}


