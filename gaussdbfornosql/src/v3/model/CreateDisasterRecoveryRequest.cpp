

#include "huaweicloud/gaussdbfornosql/v3/model/CreateDisasterRecoveryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateDisasterRecoveryRequest::CreateDisasterRecoveryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDisasterRecoveryRequest::~CreateDisasterRecoveryRequest() = default;

void CreateDisasterRecoveryRequest::validate()
{
}

web::json::value CreateDisasterRecoveryRequest::toJson() const
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
bool CreateDisasterRecoveryRequest::fromJson(const web::json::value& val)
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
            ConstructDisasterRecoveryBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDisasterRecoveryRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDisasterRecoveryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDisasterRecoveryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDisasterRecoveryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ConstructDisasterRecoveryBody CreateDisasterRecoveryRequest::getBody() const
{
    return body_;
}

void CreateDisasterRecoveryRequest::setBody(const ConstructDisasterRecoveryBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDisasterRecoveryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDisasterRecoveryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


