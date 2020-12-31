

#include "huaweicloud/ecs/model/NovaDisassociateSecurityGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaDisassociateSecurityGroupRequestBody::NovaDisassociateSecurityGroupRequestBody()
{
    removeSecurityGroupIsSet_ = false;
}

NovaDisassociateSecurityGroupRequestBody::~NovaDisassociateSecurityGroupRequestBody() = default;

void NovaDisassociateSecurityGroupRequestBody::validate()
{
}

web::json::value NovaDisassociateSecurityGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(removeSecurityGroupIsSet_) {
        val[utility::conversions::to_string_t("removeSecurityGroup")] = ModelBase::toJson(removeSecurityGroup_);
    }

    return val;
}

bool NovaDisassociateSecurityGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("removeSecurityGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removeSecurityGroup"));
        if(!fieldValue.is_null())
        {
            NovaRemoveSecurityGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoveSecurityGroup(refVal);
        }
    }
    return ok;
}


NovaRemoveSecurityGroupOption NovaDisassociateSecurityGroupRequestBody::getRemoveSecurityGroup() const
{
    return removeSecurityGroup_;
}

void NovaDisassociateSecurityGroupRequestBody::setRemoveSecurityGroup(const NovaRemoveSecurityGroupOption& value)
{
    removeSecurityGroup_ = value;
    removeSecurityGroupIsSet_ = true;
}

bool NovaDisassociateSecurityGroupRequestBody::removeSecurityGroupIsSet() const
{
    return removeSecurityGroupIsSet_;
}

void NovaDisassociateSecurityGroupRequestBody::unsetremoveSecurityGroup()
{
    removeSecurityGroupIsSet_ = false;
}

}
}
}
}
}


