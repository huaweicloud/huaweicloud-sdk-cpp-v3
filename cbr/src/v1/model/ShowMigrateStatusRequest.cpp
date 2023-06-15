

#include "huaweicloud/cbr/v1/model/ShowMigrateStatusRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowMigrateStatusRequest::ShowMigrateStatusRequest()
{
    allRegions_ = false;
    allRegionsIsSet_ = false;
}

ShowMigrateStatusRequest::~ShowMigrateStatusRequest() = default;

void ShowMigrateStatusRequest::validate()
{
}

web::json::value ShowMigrateStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allRegionsIsSet_) {
        val[utility::conversions::to_string_t("all_regions")] = ModelBase::toJson(allRegions_);
    }

    return val;
}

bool ShowMigrateStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_regions"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllRegions(refVal);
        }
    }
    return ok;
}


bool ShowMigrateStatusRequest::isAllRegions() const
{
    return allRegions_;
}

void ShowMigrateStatusRequest::setAllRegions(bool value)
{
    allRegions_ = value;
    allRegionsIsSet_ = true;
}

bool ShowMigrateStatusRequest::allRegionsIsSet() const
{
    return allRegionsIsSet_;
}

void ShowMigrateStatusRequest::unsetallRegions()
{
    allRegionsIsSet_ = false;
}

}
}
}
}
}


