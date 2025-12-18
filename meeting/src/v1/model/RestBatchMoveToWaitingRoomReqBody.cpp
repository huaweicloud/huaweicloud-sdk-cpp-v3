

#include "huaweicloud/meeting/v1/model/RestBatchMoveToWaitingRoomReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestBatchMoveToWaitingRoomReqBody::RestBatchMoveToWaitingRoomReqBody()
{
    batchParticipantsIsSet_ = false;
}

RestBatchMoveToWaitingRoomReqBody::~RestBatchMoveToWaitingRoomReqBody() = default;

void RestBatchMoveToWaitingRoomReqBody::validate()
{
}

web::json::value RestBatchMoveToWaitingRoomReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(batchParticipantsIsSet_) {
        val[utility::conversions::to_string_t("batchParticipants")] = ModelBase::toJson(batchParticipants_);
    }

    return val;
}
bool RestBatchMoveToWaitingRoomReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("batchParticipants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batchParticipants"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchParticipants(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RestBatchMoveToWaitingRoomReqBody::getBatchParticipants()
{
    return batchParticipants_;
}

void RestBatchMoveToWaitingRoomReqBody::setBatchParticipants(const std::vector<std::string>& value)
{
    batchParticipants_ = value;
    batchParticipantsIsSet_ = true;
}

bool RestBatchMoveToWaitingRoomReqBody::batchParticipantsIsSet() const
{
    return batchParticipantsIsSet_;
}

void RestBatchMoveToWaitingRoomReqBody::unsetbatchParticipants()
{
    batchParticipantsIsSet_ = false;
}

}
}
}
}
}


