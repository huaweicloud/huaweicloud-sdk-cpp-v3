

#include "huaweicloud/kms/v2/model/ListSupportRegionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListSupportRegionsResponse::ListSupportRegionsResponse()
{
    regionsIsSet_ = false;
}

ListSupportRegionsResponse::~ListSupportRegionsResponse() = default;

void ListSupportRegionsResponse::validate()
{
}

web::json::value ListSupportRegionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionsIsSet_) {
        val[utility::conversions::to_string_t("regions")] = ModelBase::toJson(regions_);
    }

    return val;
}
bool ListSupportRegionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegions(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListSupportRegionsResponse::getRegions()
{
    return regions_;
}

void ListSupportRegionsResponse::setRegions(const std::vector<std::string>& value)
{
    regions_ = value;
    regionsIsSet_ = true;
}

bool ListSupportRegionsResponse::regionsIsSet() const
{
    return regionsIsSet_;
}

void ListSupportRegionsResponse::unsetregions()
{
    regionsIsSet_ = false;
}

}
}
}
}
}


