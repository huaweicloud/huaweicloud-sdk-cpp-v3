

#include "huaweicloud/cfw/v1/model/ListBlackWhiteListsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListBlackWhiteListsResponse::ListBlackWhiteListsResponse()
{
    dataIsSet_ = false;
}

ListBlackWhiteListsResponse::~ListBlackWhiteListsResponse() = default;

void ListBlackWhiteListsResponse::validate()
{
}

web::json::value ListBlackWhiteListsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListBlackWhiteListsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            BlackWhiteListResponse_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


BlackWhiteListResponse_data ListBlackWhiteListsResponse::getData() const
{
    return data_;
}

void ListBlackWhiteListsResponse::setData(const BlackWhiteListResponse_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListBlackWhiteListsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListBlackWhiteListsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


