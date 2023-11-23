

#include "huaweicloud/dds/v3/model/CreateKillOpRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateKillOpRuleRequest::CreateKillOpRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateKillOpRuleRequest::~CreateKillOpRuleRequest() = default;

void CreateKillOpRuleRequest::validate()
{
}

web::json::value CreateKillOpRuleRequest::toJson() const
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
bool CreateKillOpRuleRequest::fromJson(const web::json::value& val)
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
            CreateKillOpRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateKillOpRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateKillOpRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateKillOpRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateKillOpRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateKillOpRuleRequestBody CreateKillOpRuleRequest::getBody() const
{
    return body_;
}

void CreateKillOpRuleRequest::setBody(const CreateKillOpRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKillOpRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKillOpRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


