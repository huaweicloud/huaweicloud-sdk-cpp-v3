

#include "huaweicloud/meeting/v1/model/RestAllowUnMuteReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestAllowUnMuteReqBody::RestAllowUnMuteReqBody()
{
    allowUnmuteByOneself_ = 0;
    allowUnmuteByOneselfIsSet_ = false;
}

RestAllowUnMuteReqBody::~RestAllowUnMuteReqBody() = default;

void RestAllowUnMuteReqBody::validate()
{
}

web::json::value RestAllowUnMuteReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allowUnmuteByOneselfIsSet_) {
        val[utility::conversions::to_string_t("allowUnmuteByOneself")] = ModelBase::toJson(allowUnmuteByOneself_);
    }

    return val;
}
bool RestAllowUnMuteReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("allowUnmuteByOneself"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowUnmuteByOneself"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowUnmuteByOneself(refVal);
        }
    }
    return ok;
}


int32_t RestAllowUnMuteReqBody::getAllowUnmuteByOneself() const
{
    return allowUnmuteByOneself_;
}

void RestAllowUnMuteReqBody::setAllowUnmuteByOneself(int32_t value)
{
    allowUnmuteByOneself_ = value;
    allowUnmuteByOneselfIsSet_ = true;
}

bool RestAllowUnMuteReqBody::allowUnmuteByOneselfIsSet() const
{
    return allowUnmuteByOneselfIsSet_;
}

void RestAllowUnMuteReqBody::unsetallowUnmuteByOneself()
{
    allowUnmuteByOneselfIsSet_ = false;
}

}
}
}
}
}


