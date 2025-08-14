

#include "huaweicloud/iotda/v5/model/CreateRoutingRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateRoutingRuleRequest::CreateRoutingRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRoutingRuleRequest::~CreateRoutingRuleRequest() = default;

void CreateRoutingRuleRequest::validate()
{
}

web::json::value CreateRoutingRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRoutingRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
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
            AddRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRoutingRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateRoutingRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateRoutingRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateRoutingRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddRuleReq CreateRoutingRuleRequest::getBody() const
{
    return body_;
}

void CreateRoutingRuleRequest::setBody(const AddRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRoutingRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRoutingRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


