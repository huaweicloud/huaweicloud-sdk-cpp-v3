

#include "huaweicloud/meeting/v1/model/RestBulkHangUpReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestBulkHangUpReqBody::RestBulkHangUpReqBody()
{
    bulkHangUpParticipantsIsSet_ = false;
}

RestBulkHangUpReqBody::~RestBulkHangUpReqBody() = default;

void RestBulkHangUpReqBody::validate()
{
}

web::json::value RestBulkHangUpReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bulkHangUpParticipantsIsSet_) {
        val[utility::conversions::to_string_t("bulkHangUpParticipants")] = ModelBase::toJson(bulkHangUpParticipants_);
    }

    return val;
}
bool RestBulkHangUpReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bulkHangUpParticipants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bulkHangUpParticipants"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBulkHangUpParticipants(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RestBulkHangUpReqBody::getBulkHangUpParticipants()
{
    return bulkHangUpParticipants_;
}

void RestBulkHangUpReqBody::setBulkHangUpParticipants(const std::vector<std::string>& value)
{
    bulkHangUpParticipants_ = value;
    bulkHangUpParticipantsIsSet_ = true;
}

bool RestBulkHangUpReqBody::bulkHangUpParticipantsIsSet() const
{
    return bulkHangUpParticipantsIsSet_;
}

void RestBulkHangUpReqBody::unsetbulkHangUpParticipants()
{
    bulkHangUpParticipantsIsSet_ = false;
}

}
}
}
}
}


