

#include "huaweicloud/drs/v3/model/ListAvailableZoneResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListAvailableZoneResponse::ListAvailableZoneResponse()
{
    azInfosIsSet_ = false;
}

ListAvailableZoneResponse::~ListAvailableZoneResponse() = default;

void ListAvailableZoneResponse::validate()
{
}

web::json::value ListAvailableZoneResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(azInfosIsSet_) {
        val[utility::conversions::to_string_t("az_infos")] = ModelBase::toJson(azInfos_);
    }

    return val;
}
bool ListAvailableZoneResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("az_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<AzInfoResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzInfos(refVal);
        }
    }
    return ok;
}


std::vector<AzInfoResp>& ListAvailableZoneResponse::getAzInfos()
{
    return azInfos_;
}

void ListAvailableZoneResponse::setAzInfos(const std::vector<AzInfoResp>& value)
{
    azInfos_ = value;
    azInfosIsSet_ = true;
}

bool ListAvailableZoneResponse::azInfosIsSet() const
{
    return azInfosIsSet_;
}

void ListAvailableZoneResponse::unsetazInfos()
{
    azInfosIsSet_ = false;
}

}
}
}
}
}


