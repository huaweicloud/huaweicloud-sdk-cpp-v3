

#include "huaweicloud/ga/v1/model/CreateIpGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateIpGroupRequestBody::CreateIpGroupRequestBody()
{
    ipGroupIsSet_ = false;
}

CreateIpGroupRequestBody::~CreateIpGroupRequestBody() = default;

void CreateIpGroupRequestBody::validate()
{
}

web::json::value CreateIpGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipGroupIsSet_) {
        val[utility::conversions::to_string_t("ip_group")] = ModelBase::toJson(ipGroup_);
    }

    return val;
}
bool CreateIpGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_group"));
        if(!fieldValue.is_null())
        {
            CreateIpGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroup(refVal);
        }
    }
    return ok;
}


CreateIpGroupOption CreateIpGroupRequestBody::getIpGroup() const
{
    return ipGroup_;
}

void CreateIpGroupRequestBody::setIpGroup(const CreateIpGroupOption& value)
{
    ipGroup_ = value;
    ipGroupIsSet_ = true;
}

bool CreateIpGroupRequestBody::ipGroupIsSet() const
{
    return ipGroupIsSet_;
}

void CreateIpGroupRequestBody::unsetipGroup()
{
    ipGroupIsSet_ = false;
}

}
}
}
}
}


