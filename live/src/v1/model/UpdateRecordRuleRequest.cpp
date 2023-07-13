

#include "huaweicloud/live/v1/model/UpdateRecordRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateRecordRuleRequest::UpdateRecordRuleRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRecordRuleRequest::~UpdateRecordRuleRequest() = default;

void UpdateRecordRuleRequest::validate()
{
}

web::json::value UpdateRecordRuleRequest::toJson() const
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

bool UpdateRecordRuleRequest::fromJson(const web::json::value& val)
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
            RecordRuleRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateRecordRuleRequest::getId() const
{
    return id_;
}

void UpdateRecordRuleRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateRecordRuleRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateRecordRuleRequest::unsetid()
{
    idIsSet_ = false;
}

RecordRuleRequest UpdateRecordRuleRequest::getBody() const
{
    return body_;
}

void UpdateRecordRuleRequest::setBody(const RecordRuleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRecordRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRecordRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


