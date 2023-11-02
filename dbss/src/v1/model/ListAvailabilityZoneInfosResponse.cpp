

#include "huaweicloud/dbss/v1/model/ListAvailabilityZoneInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAvailabilityZoneInfosResponse::ListAvailabilityZoneInfosResponse()
{
    azsIsSet_ = false;
}

ListAvailabilityZoneInfosResponse::~ListAvailabilityZoneInfosResponse() = default;

void ListAvailabilityZoneInfosResponse::validate()
{
}

web::json::value ListAvailabilityZoneInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(azsIsSet_) {
        val[utility::conversions::to_string_t("azs")] = ModelBase::toJson(azs_);
    }

    return val;
}
bool ListAvailabilityZoneInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("azs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("azs"));
        if(!fieldValue.is_null())
        {
            std::vector<AzInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzs(refVal);
        }
    }
    return ok;
}


std::vector<AzInfo>& ListAvailabilityZoneInfosResponse::getAzs()
{
    return azs_;
}

void ListAvailabilityZoneInfosResponse::setAzs(const std::vector<AzInfo>& value)
{
    azs_ = value;
    azsIsSet_ = true;
}

bool ListAvailabilityZoneInfosResponse::azsIsSet() const
{
    return azsIsSet_;
}

void ListAvailabilityZoneInfosResponse::unsetazs()
{
    azsIsSet_ = false;
}

}
}
}
}
}


