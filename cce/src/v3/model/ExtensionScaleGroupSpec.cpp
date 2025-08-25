

#include "huaweicloud/cce/v3/model/ExtensionScaleGroupSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ExtensionScaleGroupSpec::ExtensionScaleGroupSpec()
{
    flavor_ = "";
    flavorIsSet_ = false;
    az_ = "";
    azIsSet_ = false;
    capacityReservationSpecificationIsSet_ = false;
    autoscalingIsSet_ = false;
}

ExtensionScaleGroupSpec::~ExtensionScaleGroupSpec() = default;

void ExtensionScaleGroupSpec::validate()
{
}

web::json::value ExtensionScaleGroupSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(azIsSet_) {
        val[utility::conversions::to_string_t("az")] = ModelBase::toJson(az_);
    }
    if(capacityReservationSpecificationIsSet_) {
        val[utility::conversions::to_string_t("capacityReservationSpecification")] = ModelBase::toJson(capacityReservationSpecification_);
    }
    if(autoscalingIsSet_) {
        val[utility::conversions::to_string_t("autoscaling")] = ModelBase::toJson(autoscaling_);
    }

    return val;
}
bool ExtensionScaleGroupSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("capacityReservationSpecification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacityReservationSpecification"));
        if(!fieldValue.is_null())
        {
            CapacityReservationSpecification refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacityReservationSpecification(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("autoscaling"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("autoscaling"));
        if(!fieldValue.is_null())
        {
            ScaleGroupAutoscaling refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoscaling(refVal);
        }
    }
    return ok;
}


std::string ExtensionScaleGroupSpec::getFlavor() const
{
    return flavor_;
}

void ExtensionScaleGroupSpec::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ExtensionScaleGroupSpec::flavorIsSet() const
{
    return flavorIsSet_;
}

void ExtensionScaleGroupSpec::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ExtensionScaleGroupSpec::getAz() const
{
    return az_;
}

void ExtensionScaleGroupSpec::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool ExtensionScaleGroupSpec::azIsSet() const
{
    return azIsSet_;
}

void ExtensionScaleGroupSpec::unsetaz()
{
    azIsSet_ = false;
}

CapacityReservationSpecification ExtensionScaleGroupSpec::getCapacityReservationSpecification() const
{
    return capacityReservationSpecification_;
}

void ExtensionScaleGroupSpec::setCapacityReservationSpecification(const CapacityReservationSpecification& value)
{
    capacityReservationSpecification_ = value;
    capacityReservationSpecificationIsSet_ = true;
}

bool ExtensionScaleGroupSpec::capacityReservationSpecificationIsSet() const
{
    return capacityReservationSpecificationIsSet_;
}

void ExtensionScaleGroupSpec::unsetcapacityReservationSpecification()
{
    capacityReservationSpecificationIsSet_ = false;
}

ScaleGroupAutoscaling ExtensionScaleGroupSpec::getAutoscaling() const
{
    return autoscaling_;
}

void ExtensionScaleGroupSpec::setAutoscaling(const ScaleGroupAutoscaling& value)
{
    autoscaling_ = value;
    autoscalingIsSet_ = true;
}

bool ExtensionScaleGroupSpec::autoscalingIsSet() const
{
    return autoscalingIsSet_;
}

void ExtensionScaleGroupSpec::unsetautoscaling()
{
    autoscalingIsSet_ = false;
}

}
}
}
}
}


