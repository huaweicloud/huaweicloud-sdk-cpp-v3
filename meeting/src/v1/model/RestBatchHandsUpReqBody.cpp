

#include "huaweicloud/meeting/v1/model/RestBatchHandsUpReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestBatchHandsUpReqBody::RestBatchHandsUpReqBody()
{
    handsState_ = 0;
    handsStateIsSet_ = false;
    pidsIsSet_ = false;
}

RestBatchHandsUpReqBody::~RestBatchHandsUpReqBody() = default;

void RestBatchHandsUpReqBody::validate()
{
}

web::json::value RestBatchHandsUpReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handsStateIsSet_) {
        val[utility::conversions::to_string_t("handsState")] = ModelBase::toJson(handsState_);
    }
    if(pidsIsSet_) {
        val[utility::conversions::to_string_t("pids")] = ModelBase::toJson(pids_);
    }

    return val;
}
bool RestBatchHandsUpReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPids(refVal);
        }
    }
    return ok;
}


int32_t RestBatchHandsUpReqBody::getHandsState() const
{
    return handsState_;
}

void RestBatchHandsUpReqBody::setHandsState(int32_t value)
{
    handsState_ = value;
    handsStateIsSet_ = true;
}

bool RestBatchHandsUpReqBody::handsStateIsSet() const
{
    return handsStateIsSet_;
}

void RestBatchHandsUpReqBody::unsethandsState()
{
    handsStateIsSet_ = false;
}

std::vector<std::string>& RestBatchHandsUpReqBody::getPids()
{
    return pids_;
}

void RestBatchHandsUpReqBody::setPids(const std::vector<std::string>& value)
{
    pids_ = value;
    pidsIsSet_ = true;
}

bool RestBatchHandsUpReqBody::pidsIsSet() const
{
    return pidsIsSet_;
}

void RestBatchHandsUpReqBody::unsetpids()
{
    pidsIsSet_ = false;
}

}
}
}
}
}


