

#include "huaweicloud/iotda/v5/model/CreateRuleActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateRuleActionRequest::CreateRuleActionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRuleActionRequest::~CreateRuleActionRequest() = default;

void CreateRuleActionRequest::validate()
{
}

web::json::value CreateRuleActionRequest::toJson() const
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
bool CreateRuleActionRequest::fromJson(const web::json::value& val)
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
            AddActionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRuleActionRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateRuleActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateRuleActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateRuleActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddActionReq CreateRuleActionRequest::getBody() const
{
    return body_;
}

void CreateRuleActionRequest::setBody(const AddActionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRuleActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRuleActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


