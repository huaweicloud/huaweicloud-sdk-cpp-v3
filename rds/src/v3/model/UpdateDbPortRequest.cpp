

#include "huaweicloud/rds/v3/model/UpdateDbPortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDbPortRequest::UpdateDbPortRequest()
{
    port_ = 0;
    portIsSet_ = false;
}

UpdateDbPortRequest::~UpdateDbPortRequest() = default;

void UpdateDbPortRequest::validate()
{
}

web::json::value UpdateDbPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool UpdateDbPortRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}


int32_t UpdateDbPortRequest::getPort() const
{
    return port_;
}

void UpdateDbPortRequest::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UpdateDbPortRequest::portIsSet() const
{
    return portIsSet_;
}

void UpdateDbPortRequest::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


