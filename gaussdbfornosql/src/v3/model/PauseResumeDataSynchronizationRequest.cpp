

#include "huaweicloud/gaussdbfornosql/v3/model/PauseResumeDataSynchronizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




PauseResumeDataSynchronizationRequest::PauseResumeDataSynchronizationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

PauseResumeDataSynchronizationRequest::~PauseResumeDataSynchronizationRequest() = default;

void PauseResumeDataSynchronizationRequest::validate()
{
}

web::json::value PauseResumeDataSynchronizationRequest::toJson() const
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
bool PauseResumeDataSynchronizationRequest::fromJson(const web::json::value& val)
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
            ActionBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PauseResumeDataSynchronizationRequest::getInstanceId() const
{
    return instanceId_;
}

void PauseResumeDataSynchronizationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool PauseResumeDataSynchronizationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void PauseResumeDataSynchronizationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ActionBody PauseResumeDataSynchronizationRequest::getBody() const
{
    return body_;
}

void PauseResumeDataSynchronizationRequest::setBody(const ActionBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PauseResumeDataSynchronizationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PauseResumeDataSynchronizationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


