

#include "huaweicloud/ecs/v2/model/AssociateServerVirtualIpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AssociateServerVirtualIpRequestBody::AssociateServerVirtualIpRequestBody()
{
    nicIsSet_ = false;
}

AssociateServerVirtualIpRequestBody::~AssociateServerVirtualIpRequestBody() = default;

void AssociateServerVirtualIpRequestBody::validate()
{
}

web::json::value AssociateServerVirtualIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nicIsSet_) {
        val[utility::conversions::to_string_t("nic")] = ModelBase::toJson(nic_);
    }

    return val;
}
bool AssociateServerVirtualIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nic"));
        if(!fieldValue.is_null())
        {
            AssociateServerVirtualIpOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNic(refVal);
        }
    }
    return ok;
}


AssociateServerVirtualIpOption AssociateServerVirtualIpRequestBody::getNic() const
{
    return nic_;
}

void AssociateServerVirtualIpRequestBody::setNic(const AssociateServerVirtualIpOption& value)
{
    nic_ = value;
    nicIsSet_ = true;
}

bool AssociateServerVirtualIpRequestBody::nicIsSet() const
{
    return nicIsSet_;
}

void AssociateServerVirtualIpRequestBody::unsetnic()
{
    nicIsSet_ = false;
}

}
}
}
}
}


