

#include "huaweicloud/csms/v1/model/ListGrantsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListGrantsResponse::ListGrantsResponse()
{
    dataIsSet_ = false;
}

ListGrantsResponse::~ListGrantsResponse() = default;

void ListGrantsResponse::validate()
{
}

web::json::value ListGrantsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListGrantsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            GrantDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


GrantDTO ListGrantsResponse::getData() const
{
    return data_;
}

void ListGrantsResponse::setData(const GrantDTO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListGrantsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListGrantsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


