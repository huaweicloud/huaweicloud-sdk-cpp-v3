

#include "huaweicloud/ga/v1/model/UpdateEndpointGroupOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateEndpointGroupOption::UpdateEndpointGroupOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    trafficDialPercentage_ = 0;
    trafficDialPercentageIsSet_ = false;
}

UpdateEndpointGroupOption::~UpdateEndpointGroupOption() = default;

void UpdateEndpointGroupOption::validate()
{
}

web::json::value UpdateEndpointGroupOption::toJson() const
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

    return val;
}
bool UpdateEndpointGroupOption::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UpdateEndpointGroupOption::getName() const
{
    return name_;
}

void UpdateEndpointGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateEndpointGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateEndpointGroupOption::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateEndpointGroupOption::getDescription() const
{
    return description_;
}

void UpdateEndpointGroupOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateEndpointGroupOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateEndpointGroupOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t UpdateEndpointGroupOption::getTrafficDialPercentage() const
{
    return trafficDialPercentage_;
}

void UpdateEndpointGroupOption::setTrafficDialPercentage(int32_t value)
{
    trafficDialPercentage_ = value;
    trafficDialPercentageIsSet_ = true;
}

bool UpdateEndpointGroupOption::trafficDialPercentageIsSet() const
{
    return trafficDialPercentageIsSet_;
}

void UpdateEndpointGroupOption::unsettrafficDialPercentage()
{
    trafficDialPercentageIsSet_ = false;
}

}
}
}
}
}


