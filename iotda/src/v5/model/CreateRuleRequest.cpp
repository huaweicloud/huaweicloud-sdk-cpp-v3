

#include "huaweicloud/iotda/v5/model/CreateRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateRuleRequest::CreateRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRuleRequest::~CreateRuleRequest() = default;

void CreateRuleRequest::validate()
{
}

web::json::value CreateRuleRequest::toJson() const
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
bool CreateRuleRequest::fromJson(const web::json::value& val)
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
            Rule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

Rule CreateRuleRequest::getBody() const
{
    return body_;
}

void CreateRuleRequest::setBody(const Rule& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


