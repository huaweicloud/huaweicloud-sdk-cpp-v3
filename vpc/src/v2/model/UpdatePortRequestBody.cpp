

#include "huaweicloud/vpc/v2/model/UpdatePortRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdatePortRequestBody::UpdatePortRequestBody()
{
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
            UpdatePortOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}


UpdatePortOption UpdatePortRequestBody::getPort() const
{
    return port_;
}

void UpdatePortRequestBody::setPort(const UpdatePortOption& value)
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


