

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchToMasterRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchToMasterRequest::SwitchToMasterRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchToMasterRequest::~SwitchToMasterRequest() = default;

void SwitchToMasterRequest::validate()
{
}

web::json::value SwitchToMasterRequest::toJson() const
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

bool SwitchToMasterRequest::fromJson(const web::json::value& val)
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
            SwitchToMasterDisasterRecoveryBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SwitchToMasterRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchToMasterRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchToMasterRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchToMasterRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchToMasterDisasterRecoveryBody SwitchToMasterRequest::getBody() const
{
    return body_;
}

void SwitchToMasterRequest::setBody(const SwitchToMasterDisasterRecoveryBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchToMasterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchToMasterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


