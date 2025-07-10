

#include "huaweicloud/ecs/v2/model/Association.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




Association::Association()
{
    publicIpAddress_ = "";
    publicIpAddressIsSet_ = false;
}

Association::~Association() = default;

void Association::validate()
{
}

web::json::value Association::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicIpAddressIsSet_) {
        val[utility::conversions::to_string_t("public_ip_address")] = ModelBase::toJson(publicIpAddress_);
    }

    return val;
}
bool Association::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpAddress(refVal);
        }
    }
    return ok;
}


std::string Association::getPublicIpAddress() const
{
    return publicIpAddress_;
}

void Association::setPublicIpAddress(const std::string& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool Association::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void Association::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

}
}
}
}
}


