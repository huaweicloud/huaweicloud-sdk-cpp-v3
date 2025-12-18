

#include "huaweicloud/meeting/v1/model/RestMuteParticipantReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestMuteParticipantReqBody::RestMuteParticipantReqBody()
{
    isMute_ = 0;
    isMuteIsSet_ = false;
}

RestMuteParticipantReqBody::~RestMuteParticipantReqBody() = default;

void RestMuteParticipantReqBody::validate()
{
}

web::json::value RestMuteParticipantReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isMuteIsSet_) {
        val[utility::conversions::to_string_t("isMute")] = ModelBase::toJson(isMute_);
    }

    return val;
}
bool RestMuteParticipantReqBody::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t RestMuteParticipantReqBody::getIsMute() const
{
    return isMute_;
}

void RestMuteParticipantReqBody::setIsMute(int32_t value)
{
    isMute_ = value;
    isMuteIsSet_ = true;
}

bool RestMuteParticipantReqBody::isMuteIsSet() const
{
    return isMuteIsSet_;
}

void RestMuteParticipantReqBody::unsetisMute()
{
    isMuteIsSet_ = false;
}

}
}
}
}
}


