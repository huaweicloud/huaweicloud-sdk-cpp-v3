

#include "huaweicloud/sdrs/v1/model/UpdateDisasterRecoveryDrillNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateDisasterRecoveryDrillNameRequest::UpdateDisasterRecoveryDrillNameRequest()
{
    disasterRecoveryDrillId_ = "";
    disasterRecoveryDrillIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDisasterRecoveryDrillNameRequest::~UpdateDisasterRecoveryDrillNameRequest() = default;

void UpdateDisasterRecoveryDrillNameRequest::validate()
{
}

web::json::value UpdateDisasterRecoveryDrillNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoveryDrillIdIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_drill_id")] = ModelBase::toJson(disasterRecoveryDrillId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDisasterRecoveryDrillNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_drill_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_drill_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryDrillId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateDisasterRecoveryDrillNameRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDisasterRecoveryDrillNameRequest::getDisasterRecoveryDrillId() const
{
    return disasterRecoveryDrillId_;
}

void UpdateDisasterRecoveryDrillNameRequest::setDisasterRecoveryDrillId(const std::string& value)
{
    disasterRecoveryDrillId_ = value;
    disasterRecoveryDrillIdIsSet_ = true;
}

bool UpdateDisasterRecoveryDrillNameRequest::disasterRecoveryDrillIdIsSet() const
{
    return disasterRecoveryDrillIdIsSet_;
}

void UpdateDisasterRecoveryDrillNameRequest::unsetdisasterRecoveryDrillId()
{
    disasterRecoveryDrillIdIsSet_ = false;
}

UpdateDisasterRecoveryDrillNameRequestBody UpdateDisasterRecoveryDrillNameRequest::getBody() const
{
    return body_;
}

void UpdateDisasterRecoveryDrillNameRequest::setBody(const UpdateDisasterRecoveryDrillNameRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDisasterRecoveryDrillNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDisasterRecoveryDrillNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


