

#include "huaweicloud/gaussdbfornosql/v3/model/ShowInstanceBiactiveRegionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowInstanceBiactiveRegionsResponse::ShowInstanceBiactiveRegionsResponse()
{
    regionCodesIsSet_ = false;
}

ShowInstanceBiactiveRegionsResponse::~ShowInstanceBiactiveRegionsResponse() = default;

void ShowInstanceBiactiveRegionsResponse::validate()
{
}

web::json::value ShowInstanceBiactiveRegionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionCodesIsSet_) {
        val[utility::conversions::to_string_t("region_codes")] = ModelBase::toJson(regionCodes_);
    }

    return val;
}
bool ShowInstanceBiactiveRegionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_codes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionCodes(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowInstanceBiactiveRegionsResponse::getRegionCodes()
{
    return regionCodes_;
}

void ShowInstanceBiactiveRegionsResponse::setRegionCodes(const std::vector<std::string>& value)
{
    regionCodes_ = value;
    regionCodesIsSet_ = true;
}

bool ShowInstanceBiactiveRegionsResponse::regionCodesIsSet() const
{
    return regionCodesIsSet_;
}

void ShowInstanceBiactiveRegionsResponse::unsetregionCodes()
{
    regionCodesIsSet_ = false;
}

}
}
}
}
}


