

#include "huaweicloud/meeting/v1/model/RestMuteReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestMuteReqBody::RestMuteReqBody()
{
    isMute_ = 0;
    isMuteIsSet_ = false;
    allowUnmuteByOneself_ = 0;
    allowUnmuteByOneselfIsSet_ = false;
}

RestMuteReqBody::~RestMuteReqBody() = default;

void RestMuteReqBody::validate()
{
}

web::json::value RestMuteReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isMuteIsSet_) {
        val[utility::conversions::to_string_t("isMute")] = ModelBase::toJson(isMute_);
    }
    if(allowUnmuteByOneselfIsSet_) {
        val[utility::conversions::to_string_t("allowUnmuteByOneself")] = ModelBase::toJson(allowUnmuteByOneself_);
    }

    return val;
}
bool RestMuteReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isMute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isMute"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMute(refVal);
        }
    }
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


int32_t RestMuteReqBody::getIsMute() const
{
    return isMute_;
}

void RestMuteReqBody::setIsMute(int32_t value)
{
    isMute_ = value;
    isMuteIsSet_ = true;
}

bool RestMuteReqBody::isMuteIsSet() const
{
    return isMuteIsSet_;
}

void RestMuteReqBody::unsetisMute()
{
    isMuteIsSet_ = false;
}

int32_t RestMuteReqBody::getAllowUnmuteByOneself() const
{
    return allowUnmuteByOneself_;
}

void RestMuteReqBody::setAllowUnmuteByOneself(int32_t value)
{
    allowUnmuteByOneself_ = value;
    allowUnmuteByOneselfIsSet_ = true;
}

bool RestMuteReqBody::allowUnmuteByOneselfIsSet() const
{
    return allowUnmuteByOneselfIsSet_;
}

void RestMuteReqBody::unsetallowUnmuteByOneself()
{
    allowUnmuteByOneselfIsSet_ = false;
}

}
}
}
}
}


