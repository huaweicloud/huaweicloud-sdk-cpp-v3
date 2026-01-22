

#include "huaweicloud/cfw/v1/model/ListPrivateNetworkSegmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListPrivateNetworkSegmentsResponse::ListPrivateNetworkSegmentsResponse()
{
    dataIsSet_ = false;
}

ListPrivateNetworkSegmentsResponse::~ListPrivateNetworkSegmentsResponse() = default;

void ListPrivateNetworkSegmentsResponse::validate()
{
}

web::json::value ListPrivateNetworkSegmentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListPrivateNetworkSegmentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ListPrivateNetworkSegmentsVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ListPrivateNetworkSegmentsVO ListPrivateNetworkSegmentsResponse::getData() const
{
    return data_;
}

void ListPrivateNetworkSegmentsResponse::setData(const ListPrivateNetworkSegmentsVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListPrivateNetworkSegmentsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListPrivateNetworkSegmentsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


