

#include "huaweicloud/modelarts/v1/model/NetworkSpecUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkSpecUpdate::NetworkSpecUpdate()
{
    connectionIsSet_ = false;
}

NetworkSpecUpdate::~NetworkSpecUpdate() = default;

void NetworkSpecUpdate::validate()
{
}

web::json::value NetworkSpecUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(connectionIsSet_) {
        val[utility::conversions::to_string_t("connection")] = ModelBase::toJson(connection_);
    }

    return val;
}
bool NetworkSpecUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("connection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection"));
        if(!fieldValue.is_null())
        {
            NetworkConnection refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnection(refVal);
        }
    }
    return ok;
}


NetworkConnection NetworkSpecUpdate::getConnection() const
{
    return connection_;
}

void NetworkSpecUpdate::setConnection(const NetworkConnection& value)
{
    connection_ = value;
    connectionIsSet_ = true;
}

bool NetworkSpecUpdate::connectionIsSet() const
{
    return connectionIsSet_;
}

void NetworkSpecUpdate::unsetconnection()
{
    connectionIsSet_ = false;
}

}
}
}
}
}


