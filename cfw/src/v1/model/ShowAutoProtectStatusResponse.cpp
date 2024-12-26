

#include "huaweicloud/cfw/v1/model/ShowAutoProtectStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAutoProtectStatusResponse::ShowAutoProtectStatusResponse()
{
    dataIsSet_ = false;
}

ShowAutoProtectStatusResponse::~ShowAutoProtectStatusResponse() = default;

void ShowAutoProtectStatusResponse::validate()
{
}

web::json::value ShowAutoProtectStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAutoProtectStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            FirewallStatusVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


FirewallStatusVO ShowAutoProtectStatusResponse::getData() const
{
    return data_;
}

void ShowAutoProtectStatusResponse::setData(const FirewallStatusVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAutoProtectStatusResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAutoProtectStatusResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


