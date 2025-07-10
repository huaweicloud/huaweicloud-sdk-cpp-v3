

#include "huaweicloud/rgc/v1/model/RegionConfigurationList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




RegionConfigurationList::RegionConfigurationList()
{
    region_ = "";
    regionIsSet_ = false;
    regionConfigurationStatus_ = "";
    regionConfigurationStatusIsSet_ = false;
}

RegionConfigurationList::~RegionConfigurationList() = default;

void RegionConfigurationList::validate()
{
}

web::json::value RegionConfigurationList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(regionConfigurationStatusIsSet_) {
        val[utility::conversions::to_string_t("region_configuration_status")] = ModelBase::toJson(regionConfigurationStatus_);
    }

    return val;
}
bool RegionConfigurationList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_configuration_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_configuration_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionConfigurationStatus(refVal);
        }
    }
    return ok;
}


std::string RegionConfigurationList::getRegion() const
{
    return region_;
}

void RegionConfigurationList::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool RegionConfigurationList::regionIsSet() const
{
    return regionIsSet_;
}

void RegionConfigurationList::unsetregion()
{
    regionIsSet_ = false;
}

std::string RegionConfigurationList::getRegionConfigurationStatus() const
{
    return regionConfigurationStatus_;
}

void RegionConfigurationList::setRegionConfigurationStatus(const std::string& value)
{
    regionConfigurationStatus_ = value;
    regionConfigurationStatusIsSet_ = true;
}

bool RegionConfigurationList::regionConfigurationStatusIsSet() const
{
    return regionConfigurationStatusIsSet_;
}

void RegionConfigurationList::unsetregionConfigurationStatus()
{
    regionConfigurationStatusIsSet_ = false;
}

}
}
}
}
}


