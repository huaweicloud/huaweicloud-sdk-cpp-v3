

#include "huaweicloud/cdn/v1/model/UpdateFollow302SwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateFollow302SwitchResponse::UpdateFollow302SwitchResponse()
{
    followStatusIsSet_ = false;
}

UpdateFollow302SwitchResponse::~UpdateFollow302SwitchResponse() = default;

void UpdateFollow302SwitchResponse::validate()
{
}

web::json::value UpdateFollow302SwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(followStatusIsSet_) {
        val[utility::conversions::to_string_t("follow_status")] = ModelBase::toJson(followStatus_);
    }

    return val;
}
bool UpdateFollow302SwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("follow_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("follow_status"));
        if(!fieldValue.is_null())
        {
            Follow302StatusBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFollowStatus(refVal);
        }
    }
    return ok;
}


Follow302StatusBody UpdateFollow302SwitchResponse::getFollowStatus() const
{
    return followStatus_;
}

void UpdateFollow302SwitchResponse::setFollowStatus(const Follow302StatusBody& value)
{
    followStatus_ = value;
    followStatusIsSet_ = true;
}

bool UpdateFollow302SwitchResponse::followStatusIsSet() const
{
    return followStatusIsSet_;
}

void UpdateFollow302SwitchResponse::unsetfollowStatus()
{
    followStatusIsSet_ = false;
}

}
}
}
}
}


