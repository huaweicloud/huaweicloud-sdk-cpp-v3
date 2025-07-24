

#include "huaweicloud/cloudtest/v1/model/ListUsageInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListUsageInfosResponse::ListUsageInfosResponse()
{
    valueIsSet_ = false;
}

ListUsageInfosResponse::~ListUsageInfosResponse() = default;

void ListUsageInfosResponse::validate()
{
}

web::json::value ListUsageInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ListUsageInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<UsageInfos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::vector<UsageInfos>& ListUsageInfosResponse::getValue()
{
    return value_;
}

void ListUsageInfosResponse::setValue(const std::vector<UsageInfos>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ListUsageInfosResponse::valueIsSet() const
{
    return valueIsSet_;
}

void ListUsageInfosResponse::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


