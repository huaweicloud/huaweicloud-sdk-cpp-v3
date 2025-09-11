

#include "huaweicloud/dbss/v1/model/UpdateSensitiveMaskRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateSensitiveMaskRuleRequest::UpdateSensitiveMaskRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSensitiveMaskRuleRequest::~UpdateSensitiveMaskRuleRequest() = default;

void UpdateSensitiveMaskRuleRequest::validate()
{
}

web::json::value UpdateSensitiveMaskRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateSensitiveMaskRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


std::string UpdateSensitiveMaskRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateSensitiveMaskRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateSensitiveMaskRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateSensitiveMaskRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateSensitiveMaskRuleRequest::getId() const
{
    return id_;
}

void UpdateSensitiveMaskRuleRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateSensitiveMaskRuleRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateSensitiveMaskRuleRequest::unsetid()
{
    idIsSet_ = false;
}

MaskRuleRequest UpdateSensitiveMaskRuleRequest::getBody() const
{
    return body_;
}

void UpdateSensitiveMaskRuleRequest::setBody(const MaskRuleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSensitiveMaskRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSensitiveMaskRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


