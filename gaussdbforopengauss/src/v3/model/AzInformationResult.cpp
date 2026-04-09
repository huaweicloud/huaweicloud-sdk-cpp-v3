

#include "huaweicloud/gaussdbforopengauss/v3/model/AzInformationResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AzInformationResult::AzInformationResult()
{
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

AzInformationResult::~AzInformationResult() = default;

void AzInformationResult::validate()
{
}

web::json::value AzInformationResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool AzInformationResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
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
    return ok;
}


std::string AzInformationResult::getAvailabilityZone() const
{
    return availabilityZone_;
}

void AzInformationResult::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool AzInformationResult::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void AzInformationResult::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string AzInformationResult::getDescription() const
{
    return description_;
}

void AzInformationResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AzInformationResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AzInformationResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


