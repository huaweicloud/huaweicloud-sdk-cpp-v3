

#include "huaweicloud/cfw/v1/model/ListLogConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListLogConfigResponse::ListLogConfigResponse()
{
    dataIsSet_ = false;
}

ListLogConfigResponse::~ListLogConfigResponse() = default;

void ListLogConfigResponse::validate()
{
}

web::json::value ListLogConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListLogConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            LogConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


LogConfigDto ListLogConfigResponse::getData() const
{
    return data_;
}

void ListLogConfigResponse::setData(const LogConfigDto& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListLogConfigResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListLogConfigResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


