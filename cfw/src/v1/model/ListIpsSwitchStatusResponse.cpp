

#include "huaweicloud/cfw/v1/model/ListIpsSwitchStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsSwitchStatusResponse::ListIpsSwitchStatusResponse()
{
    dataIsSet_ = false;
}

ListIpsSwitchStatusResponse::~ListIpsSwitchStatusResponse() = default;

void ListIpsSwitchStatusResponse::validate()
{
}

web::json::value ListIpsSwitchStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListIpsSwitchStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IpsSwitchResponseDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IpsSwitchResponseDTO ListIpsSwitchStatusResponse::getData() const
{
    return data_;
}

void ListIpsSwitchStatusResponse::setData(const IpsSwitchResponseDTO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListIpsSwitchStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListIpsSwitchStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


