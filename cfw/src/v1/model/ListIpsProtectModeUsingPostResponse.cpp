

#include "huaweicloud/cfw/v1/model/ListIpsProtectModeUsingPostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsProtectModeUsingPostResponse::ListIpsProtectModeUsingPostResponse()
{
    dataIsSet_ = false;
}

ListIpsProtectModeUsingPostResponse::~ListIpsProtectModeUsingPostResponse() = default;

void ListIpsProtectModeUsingPostResponse::validate()
{
}

web::json::value ListIpsProtectModeUsingPostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListIpsProtectModeUsingPostResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IpsProtectModeObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

IpsProtectModeObject ListIpsProtectModeUsingPostResponse::getData() const
{
    return data_;
}

void ListIpsProtectModeUsingPostResponse::setData(const IpsProtectModeObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListIpsProtectModeUsingPostResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListIpsProtectModeUsingPostResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


