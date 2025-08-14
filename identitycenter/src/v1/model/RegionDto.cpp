

#include "huaweicloud/identitycenter/v1/model/RegionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




RegionDto::RegionDto()
{
    regionId_ = "";
    regionIdIsSet_ = false;
}

RegionDto::~RegionDto() = default;

void RegionDto::validate()
{
}

web::json::value RegionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool RegionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    return ok;
}


std::string RegionDto::getRegionId() const
{
    return regionId_;
}

void RegionDto::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool RegionDto::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void RegionDto::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


