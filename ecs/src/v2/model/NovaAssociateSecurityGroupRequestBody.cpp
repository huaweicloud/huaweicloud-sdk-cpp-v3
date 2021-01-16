

#include "huaweicloud/ecs/v2/model/NovaAssociateSecurityGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaAssociateSecurityGroupRequestBody::NovaAssociateSecurityGroupRequestBody()
{
    addSecurityGroupIsSet_ = false;
}

NovaAssociateSecurityGroupRequestBody::~NovaAssociateSecurityGroupRequestBody() = default;

void NovaAssociateSecurityGroupRequestBody::validate()
{
}

web::json::value NovaAssociateSecurityGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addSecurityGroupIsSet_) {
        val[utility::conversions::to_string_t("addSecurityGroup")] = ModelBase::toJson(addSecurityGroup_);
    }

    return val;
}

bool NovaAssociateSecurityGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("addSecurityGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addSecurityGroup"));
        if(!fieldValue.is_null())
        {
            NovaAddSecurityGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddSecurityGroup(refVal);
        }
    }
    return ok;
}


NovaAddSecurityGroupOption NovaAssociateSecurityGroupRequestBody::getAddSecurityGroup() const
{
    return addSecurityGroup_;
}

void NovaAssociateSecurityGroupRequestBody::setAddSecurityGroup(const NovaAddSecurityGroupOption& value)
{
    addSecurityGroup_ = value;
    addSecurityGroupIsSet_ = true;
}

bool NovaAssociateSecurityGroupRequestBody::addSecurityGroupIsSet() const
{
    return addSecurityGroupIsSet_;
}

void NovaAssociateSecurityGroupRequestBody::unsetaddSecurityGroup()
{
    addSecurityGroupIsSet_ = false;
}

}
}
}
}
}


