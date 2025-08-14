

#include "huaweicloud/identitycenter/v1/model/DescribeRegisteredRegionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeRegisteredRegionsResponse::DescribeRegisteredRegionsResponse()
{
    regionsIsSet_ = false;
}

DescribeRegisteredRegionsResponse::~DescribeRegisteredRegionsResponse() = default;

void DescribeRegisteredRegionsResponse::validate()
{
}

web::json::value DescribeRegisteredRegionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionsIsSet_) {
        val[utility::conversions::to_string_t("regions")] = ModelBase::toJson(regions_);
    }

    return val;
}
bool DescribeRegisteredRegionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regions"));
        if(!fieldValue.is_null())
        {
            std::vector<RegionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegions(refVal);
        }
    }
    return ok;
}


std::vector<RegionDto>& DescribeRegisteredRegionsResponse::getRegions()
{
    return regions_;
}

void DescribeRegisteredRegionsResponse::setRegions(const std::vector<RegionDto>& value)
{
    regions_ = value;
    regionsIsSet_ = true;
}

bool DescribeRegisteredRegionsResponse::regionsIsSet() const
{
    return regionsIsSet_;
}

void DescribeRegisteredRegionsResponse::unsetregions()
{
    regionsIsSet_ = false;
}

}
}
}
}
}


