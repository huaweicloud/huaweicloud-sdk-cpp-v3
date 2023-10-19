

#include "huaweicloud/cfw/v1/model/ListIpsProtectModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsProtectModeResponse::ListIpsProtectModeResponse()
{
    dataIsSet_ = false;
}

ListIpsProtectModeResponse::~ListIpsProtectModeResponse() = default;

void ListIpsProtectModeResponse::validate()
{
}

web::json::value ListIpsProtectModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListIpsProtectModeResponse::fromJson(const web::json::value& val)
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


IpsProtectModeObject ListIpsProtectModeResponse::getData() const
{
    return data_;
}

void ListIpsProtectModeResponse::setData(const IpsProtectModeObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListIpsProtectModeResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListIpsProtectModeResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


