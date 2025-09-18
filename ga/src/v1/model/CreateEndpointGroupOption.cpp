

#include "huaweicloud/ga/v1/model/CreateEndpointGroupOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateEndpointGroupOption::CreateEndpointGroupOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    trafficDialPercentage_ = 0;
    trafficDialPercentageIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    listenersIsSet_ = false;
}

CreateEndpointGroupOption::~CreateEndpointGroupOption() = default;

void CreateEndpointGroupOption::validate()
{
}

web::json::value CreateEndpointGroupOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(trafficDialPercentageIsSet_) {
        val[utility::conversions::to_string_t("traffic_dial_percentage")] = ModelBase::toJson(trafficDialPercentage_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(listenersIsSet_) {
        val[utility::conversions::to_string_t("listeners")] = ModelBase::toJson(listeners_);
    }

    return val;
}
bool CreateEndpointGroupOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("traffic_dial_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_dial_percentage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficDialPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("listeners"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listeners"));
        if(!fieldValue.is_null())
        {
            std::vector<Id> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListeners(refVal);
        }
    }
    return ok;
}


std::string CreateEndpointGroupOption::getName() const
{
    return name_;
}

void CreateEndpointGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateEndpointGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateEndpointGroupOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateEndpointGroupOption::getDescription() const
{
    return description_;
}

void CreateEndpointGroupOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateEndpointGroupOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateEndpointGroupOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t CreateEndpointGroupOption::getTrafficDialPercentage() const
{
    return trafficDialPercentage_;
}

void CreateEndpointGroupOption::setTrafficDialPercentage(int32_t value)
{
    trafficDialPercentage_ = value;
    trafficDialPercentageIsSet_ = true;
}

bool CreateEndpointGroupOption::trafficDialPercentageIsSet() const
{
    return trafficDialPercentageIsSet_;
}

void CreateEndpointGroupOption::unsettrafficDialPercentage()
{
    trafficDialPercentageIsSet_ = false;
}

std::string CreateEndpointGroupOption::getRegionId() const
{
    return regionId_;
}

void CreateEndpointGroupOption::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool CreateEndpointGroupOption::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void CreateEndpointGroupOption::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::vector<Id>& CreateEndpointGroupOption::getListeners()
{
    return listeners_;
}

void CreateEndpointGroupOption::setListeners(const std::vector<Id>& value)
{
    listeners_ = value;
    listenersIsSet_ = true;
}

bool CreateEndpointGroupOption::listenersIsSet() const
{
    return listenersIsSet_;
}

void CreateEndpointGroupOption::unsetlisteners()
{
    listenersIsSet_ = false;
}

}
}
}
}
}


