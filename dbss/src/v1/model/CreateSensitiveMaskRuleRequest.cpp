

#include "huaweicloud/dbss/v1/model/CreateSensitiveMaskRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateSensitiveMaskRuleRequest::CreateSensitiveMaskRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSensitiveMaskRuleRequest::~CreateSensitiveMaskRuleRequest() = default;

void CreateSensitiveMaskRuleRequest::validate()
{
}

web::json::value CreateSensitiveMaskRuleRequest::toJson() const
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
bool CreateSensitiveMaskRuleRequest::fromJson(const web::json::value& val)
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
            MaskRuleRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSensitiveMaskRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateSensitiveMaskRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateSensitiveMaskRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateSensitiveMaskRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MaskRuleRequest CreateSensitiveMaskRuleRequest::getBody() const
{
    return body_;
}

void CreateSensitiveMaskRuleRequest::setBody(const MaskRuleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSensitiveMaskRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSensitiveMaskRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


