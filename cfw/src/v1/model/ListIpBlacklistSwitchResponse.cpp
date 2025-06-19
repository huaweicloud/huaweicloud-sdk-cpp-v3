

#include "huaweicloud/cfw/v1/model/ListIpBlacklistSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpBlacklistSwitchResponse::ListIpBlacklistSwitchResponse()
{
    dataIsSet_ = false;
}

ListIpBlacklistSwitchResponse::~ListIpBlacklistSwitchResponse() = default;

void ListIpBlacklistSwitchResponse::validate()
{
}

web::json::value ListIpBlacklistSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListIpBlacklistSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IpBlacklistSwitchInfoVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IpBlacklistSwitchInfoVo ListIpBlacklistSwitchResponse::getData() const
{
    return data_;
}

void ListIpBlacklistSwitchResponse::setData(const IpBlacklistSwitchInfoVo& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListIpBlacklistSwitchResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListIpBlacklistSwitchResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


