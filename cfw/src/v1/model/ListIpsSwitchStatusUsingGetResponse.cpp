

#include "huaweicloud/cfw/v1/model/ListIpsSwitchStatusUsingGetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsSwitchStatusUsingGetResponse::ListIpsSwitchStatusUsingGetResponse()
{
    dataIsSet_ = false;
}

ListIpsSwitchStatusUsingGetResponse::~ListIpsSwitchStatusUsingGetResponse() = default;

void ListIpsSwitchStatusUsingGetResponse::validate()
{
}

web::json::value ListIpsSwitchStatusUsingGetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListIpsSwitchStatusUsingGetResponse::fromJson(const web::json::value& val)
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

IpsSwitchResponseDTO ListIpsSwitchStatusUsingGetResponse::getData() const
{
    return data_;
}

void ListIpsSwitchStatusUsingGetResponse::setData(const IpsSwitchResponseDTO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListIpsSwitchStatusUsingGetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListIpsSwitchStatusUsingGetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


