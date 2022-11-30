

#include "huaweicloud/ecs/v2/model/DisassociateServerVirtualIpRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DisassociateServerVirtualIpRequestBody::DisassociateServerVirtualIpRequestBody()
{
    nicIsSet_ = false;
}

DisassociateServerVirtualIpRequestBody::~DisassociateServerVirtualIpRequestBody() = default;

void DisassociateServerVirtualIpRequestBody::validate()
{
}

web::json::value DisassociateServerVirtualIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nicIsSet_) {
        val[utility::conversions::to_string_t("nic")] = ModelBase::toJson(nic_);
    }

    return val;
}

bool DisassociateServerVirtualIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nic"));
        if(!fieldValue.is_null())
        {
            DisassociateServerVirtualIpOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNic(refVal);
        }
    }
    return ok;
}


DisassociateServerVirtualIpOption DisassociateServerVirtualIpRequestBody::getNic() const
{
    return nic_;
}

void DisassociateServerVirtualIpRequestBody::setNic(const DisassociateServerVirtualIpOption& value)
{
    nic_ = value;
    nicIsSet_ = true;
}

bool DisassociateServerVirtualIpRequestBody::nicIsSet() const
{
    return nicIsSet_;
}

void DisassociateServerVirtualIpRequestBody::unsetnic()
{
    nicIsSet_ = false;
}

}
}
}
}
}


