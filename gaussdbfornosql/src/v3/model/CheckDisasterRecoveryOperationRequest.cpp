

#include "huaweicloud/gaussdbfornosql/v3/model/CheckDisasterRecoveryOperationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CheckDisasterRecoveryOperationRequest::CheckDisasterRecoveryOperationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CheckDisasterRecoveryOperationRequest::~CheckDisasterRecoveryOperationRequest() = default;

void CheckDisasterRecoveryOperationRequest::validate()
{
}

web::json::value CheckDisasterRecoveryOperationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckDisasterRecoveryOperationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PrecheckDisasterRecoveryOperationBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckDisasterRecoveryOperationRequest::getInstanceId() const
{
    return instanceId_;
}

void CheckDisasterRecoveryOperationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CheckDisasterRecoveryOperationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CheckDisasterRecoveryOperationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

PrecheckDisasterRecoveryOperationBody CheckDisasterRecoveryOperationRequest::getBody() const
{
    return body_;
}

void CheckDisasterRecoveryOperationRequest::setBody(const PrecheckDisasterRecoveryOperationBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckDisasterRecoveryOperationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckDisasterRecoveryOperationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


