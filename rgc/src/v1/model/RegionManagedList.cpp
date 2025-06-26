

#include "huaweicloud/rgc/v1/model/RegionManagedList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




RegionManagedList::RegionManagedList()
{
    region_ = "";
    regionIsSet_ = false;
    regionStatus_ = "";
    regionStatusIsSet_ = false;
}

RegionManagedList::~RegionManagedList() = default;

void RegionManagedList::validate()
{
}

web::json::value RegionManagedList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(regionStatusIsSet_) {
        val[utility::conversions::to_string_t("region_status")] = ModelBase::toJson(regionStatus_);
    }

    return val;
}
bool RegionManagedList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("region_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionStatus(refVal);
        }
    }
    return ok;
}


std::string RegionManagedList::getRegion() const
{
    return region_;
}

void RegionManagedList::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool RegionManagedList::regionIsSet() const
{
    return regionIsSet_;
}

void RegionManagedList::unsetregion()
{
    regionIsSet_ = false;
}

std::string RegionManagedList::getRegionStatus() const
{
    return regionStatus_;
}

void RegionManagedList::setRegionStatus(const std::string& value)
{
    regionStatus_ = value;
    regionStatusIsSet_ = true;
}

bool RegionManagedList::regionStatusIsSet() const
{
    return regionStatusIsSet_;
}

void RegionManagedList::unsetregionStatus()
{
    regionStatusIsSet_ = false;
}

}
}
}
}
}


