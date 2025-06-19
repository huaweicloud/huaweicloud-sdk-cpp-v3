

#include "huaweicloud/cfw/v1/model/ListIpBlacklistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpBlacklistResponse::ListIpBlacklistResponse()
{
    dataIsSet_ = false;
}

ListIpBlacklistResponse::~ListIpBlacklistResponse() = default;

void ListIpBlacklistResponse::validate()
{
}

web::json::value ListIpBlacklistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListIpBlacklistResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            PageDataIpBlacklistsVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


PageDataIpBlacklistsVo ListIpBlacklistResponse::getData() const
{
    return data_;
}

void ListIpBlacklistResponse::setData(const PageDataIpBlacklistsVo& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListIpBlacklistResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListIpBlacklistResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


