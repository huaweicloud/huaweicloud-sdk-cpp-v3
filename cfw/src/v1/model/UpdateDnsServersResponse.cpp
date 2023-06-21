

#include "huaweicloud/cfw/v1/model/UpdateDnsServersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateDnsServersResponse::UpdateDnsServersResponse()
{
    dataIsSet_ = false;
}

UpdateDnsServersResponse::~UpdateDnsServersResponse() = default;

void UpdateDnsServersResponse::validate()
{
}

web::json::value UpdateDnsServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool UpdateDnsServersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& UpdateDnsServersResponse::getData()
{
    return data_;
}

void UpdateDnsServersResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateDnsServersResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateDnsServersResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


