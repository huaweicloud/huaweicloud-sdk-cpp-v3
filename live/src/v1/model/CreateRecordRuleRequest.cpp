

#include "huaweicloud/live/v1/model/CreateRecordRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateRecordRuleRequest::CreateRecordRuleRequest()
{
    bodyIsSet_ = false;
}

CreateRecordRuleRequest::~CreateRecordRuleRequest() = default;

void CreateRecordRuleRequest::validate()
{
}

web::json::value CreateRecordRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateRecordRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

RecordRuleRequest CreateRecordRuleRequest::getBody() const
{
    return body_;
}

void CreateRecordRuleRequest::setBody(const RecordRuleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRecordRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRecordRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


