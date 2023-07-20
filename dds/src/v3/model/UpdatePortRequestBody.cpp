

#include "huaweicloud/dds/v3/model/UpdatePortRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdatePortRequestBody::UpdatePortRequestBody()
{
    port_ = 0;
    portIsSet_ = false;
}

UpdatePortRequestBody::~UpdatePortRequestBody() = default;

void UpdatePortRequestBody::validate()
{
}

web::json::value UpdatePortRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}

bool UpdatePortRequestBody::fromJson(const web::json::value& val)
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

int32_t UpdatePortRequestBody::getPort() const
{
    return port_;
}

void UpdatePortRequestBody::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UpdatePortRequestBody::portIsSet() const
{
    return portIsSet_;
}

void UpdatePortRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


