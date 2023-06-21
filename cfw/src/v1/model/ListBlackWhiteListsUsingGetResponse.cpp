

#include "huaweicloud/cfw/v1/model/ListBlackWhiteListsUsingGetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListBlackWhiteListsUsingGetResponse::ListBlackWhiteListsUsingGetResponse()
{
    dataIsSet_ = false;
}

ListBlackWhiteListsUsingGetResponse::~ListBlackWhiteListsUsingGetResponse() = default;

void ListBlackWhiteListsUsingGetResponse::validate()
{
}

web::json::value ListBlackWhiteListsUsingGetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListBlackWhiteListsUsingGetResponse::fromJson(const web::json::value& val)
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


BlackWhiteListResponse_data ListBlackWhiteListsUsingGetResponse::getData() const
{
    return data_;
}

void ListBlackWhiteListsUsingGetResponse::setData(const BlackWhiteListResponse_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListBlackWhiteListsUsingGetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListBlackWhiteListsUsingGetResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


