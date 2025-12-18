

#include "huaweicloud/meeting/v1/model/RestSetMmrLiveReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestSetMmrLiveReqBody::RestSetMmrLiveReqBody()
{
    liveState_ = 0;
    liveStateIsSet_ = false;
}

RestSetMmrLiveReqBody::~RestSetMmrLiveReqBody() = default;

void RestSetMmrLiveReqBody::validate()
{
}

web::json::value RestSetMmrLiveReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(liveStateIsSet_) {
        val[utility::conversions::to_string_t("liveState")] = ModelBase::toJson(liveState_);
    }

    return val;
}
bool RestSetMmrLiveReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("liveState"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liveState"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveState(refVal);
        }
    }
    return ok;
}


int32_t RestSetMmrLiveReqBody::getLiveState() const
{
    return liveState_;
}

void RestSetMmrLiveReqBody::setLiveState(int32_t value)
{
    liveState_ = value;
    liveStateIsSet_ = true;
}

bool RestSetMmrLiveReqBody::liveStateIsSet() const
{
    return liveStateIsSet_;
}

void RestSetMmrLiveReqBody::unsetliveState()
{
    liveStateIsSet_ = false;
}

}
}
}
}
}


