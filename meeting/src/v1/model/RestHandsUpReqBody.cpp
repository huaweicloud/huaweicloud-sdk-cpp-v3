

#include "huaweicloud/meeting/v1/model/RestHandsUpReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestHandsUpReqBody::RestHandsUpReqBody()
{
    handsState_ = 0;
    handsStateIsSet_ = false;
}

RestHandsUpReqBody::~RestHandsUpReqBody() = default;

void RestHandsUpReqBody::validate()
{
}

web::json::value RestHandsUpReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handsStateIsSet_) {
        val[utility::conversions::to_string_t("handsState")] = ModelBase::toJson(handsState_);
    }

    return val;
}
bool RestHandsUpReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("handsState"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("handsState"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHandsState(refVal);
        }
    }
    return ok;
}


int32_t RestHandsUpReqBody::getHandsState() const
{
    return handsState_;
}

void RestHandsUpReqBody::setHandsState(int32_t value)
{
    handsState_ = value;
    handsStateIsSet_ = true;
}

bool RestHandsUpReqBody::handsStateIsSet() const
{
    return handsStateIsSet_;
}

void RestHandsUpReqBody::unsethandsState()
{
    handsStateIsSet_ = false;
}

}
}
}
}
}


