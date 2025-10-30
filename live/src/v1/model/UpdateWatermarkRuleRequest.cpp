

#include "huaweicloud/live/v1/model/UpdateWatermarkRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateWatermarkRuleRequest::UpdateWatermarkRuleRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWatermarkRuleRequest::~UpdateWatermarkRuleRequest() = default;

void UpdateWatermarkRuleRequest::validate()
{
}

web::json::value UpdateWatermarkRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateWatermarkRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            ModifyWatermarkRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWatermarkRuleRequest::getId() const
{
    return id_;
}

void UpdateWatermarkRuleRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateWatermarkRuleRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateWatermarkRuleRequest::unsetid()
{
    idIsSet_ = false;
}

ModifyWatermarkRule UpdateWatermarkRuleRequest::getBody() const
{
    return body_;
}

void UpdateWatermarkRuleRequest::setBody(const ModifyWatermarkRule& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWatermarkRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWatermarkRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


