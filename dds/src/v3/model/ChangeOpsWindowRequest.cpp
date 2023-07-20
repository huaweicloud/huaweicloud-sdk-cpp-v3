

#include "huaweicloud/dds/v3/model/ChangeOpsWindowRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ChangeOpsWindowRequest::ChangeOpsWindowRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeOpsWindowRequest::~ChangeOpsWindowRequest() = default;

void ChangeOpsWindowRequest::validate()
{
}

web::json::value ChangeOpsWindowRequest::toJson() const
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

bool ChangeOpsWindowRequest::fromJson(const web::json::value& val)
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
            OpsWindowRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ChangeOpsWindowRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeOpsWindowRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeOpsWindowRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeOpsWindowRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OpsWindowRequestBody ChangeOpsWindowRequest::getBody() const
{
    return body_;
}

void ChangeOpsWindowRequest::setBody(const OpsWindowRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeOpsWindowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeOpsWindowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


