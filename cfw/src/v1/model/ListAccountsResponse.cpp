

#include "huaweicloud/cfw/v1/model/ListAccountsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAccountsResponse::ListAccountsResponse()
{
    dataIsSet_ = false;
}

ListAccountsResponse::~ListAccountsResponse() = default;

void ListAccountsResponse::validate()
{
}

web::json::value ListAccountsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAccountsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            PageDataAccountVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


PageDataAccountVO ListAccountsResponse::getData() const
{
    return data_;
}

void ListAccountsResponse::setData(const PageDataAccountVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAccountsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAccountsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


