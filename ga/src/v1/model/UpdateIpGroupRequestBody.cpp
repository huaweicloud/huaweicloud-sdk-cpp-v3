

#include "huaweicloud/ga/v1/model/UpdateIpGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateIpGroupRequestBody::UpdateIpGroupRequestBody()
{
    ipGroupIsSet_ = false;
}

UpdateIpGroupRequestBody::~UpdateIpGroupRequestBody() = default;

void UpdateIpGroupRequestBody::validate()
{
}

web::json::value UpdateIpGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipGroupIsSet_) {
        val[utility::conversions::to_string_t("ip_group")] = ModelBase::toJson(ipGroup_);
    }

    return val;
}
bool UpdateIpGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_group"));
        if(!fieldValue.is_null())
        {
            UpdateIpGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroup(refVal);
        }
    }
    return ok;
}


UpdateIpGroupOption UpdateIpGroupRequestBody::getIpGroup() const
{
    return ipGroup_;
}

void UpdateIpGroupRequestBody::setIpGroup(const UpdateIpGroupOption& value)
{
    ipGroup_ = value;
    ipGroupIsSet_ = true;
}

bool UpdateIpGroupRequestBody::ipGroupIsSet() const
{
    return ipGroupIsSet_;
}

void UpdateIpGroupRequestBody::unsetipGroup()
{
    ipGroupIsSet_ = false;
}

}
}
}
}
}


