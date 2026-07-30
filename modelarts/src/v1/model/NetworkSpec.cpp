

#include "huaweicloud/modelarts/v1/model/NetworkSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkSpec::NetworkSpec()
{
    cidr_ = "";
    cidrIsSet_ = false;
    connectionIsSet_ = false;
}

NetworkSpec::~NetworkSpec() = default;

void NetworkSpec::validate()
{
}

web::json::value NetworkSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(connectionIsSet_) {
        val[utility::conversions::to_string_t("connection")] = ModelBase::toJson(connection_);
    }

    return val;
}
bool NetworkSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
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


std::string NetworkSpec::getCidr() const
{
    return cidr_;
}

void NetworkSpec::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool NetworkSpec::cidrIsSet() const
{
    return cidrIsSet_;
}

void NetworkSpec::unsetcidr()
{
    cidrIsSet_ = false;
}

NetworkConnection NetworkSpec::getConnection() const
{
    return connection_;
}

void NetworkSpec::setConnection(const NetworkConnection& value)
{
    connection_ = value;
    connectionIsSet_ = true;
}

bool NetworkSpec::connectionIsSet() const
{
    return connectionIsSet_;
}

void NetworkSpec::unsetconnection()
{
    connectionIsSet_ = false;
}

}
}
}
}
}


