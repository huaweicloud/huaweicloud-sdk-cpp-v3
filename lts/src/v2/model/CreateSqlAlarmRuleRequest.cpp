

#include "huaweicloud/lts/v2/model/CreateSqlAlarmRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateSqlAlarmRuleRequest::CreateSqlAlarmRuleRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSqlAlarmRuleRequest::~CreateSqlAlarmRuleRequest() = default;

void CreateSqlAlarmRuleRequest::validate()
{
}

web::json::value CreateSqlAlarmRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateSqlAlarmRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSqlAlarmRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSqlAlarmRuleRequest::getContentType() const
{
    return contentType_;
}

void CreateSqlAlarmRuleRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateSqlAlarmRuleRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateSqlAlarmRuleRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateSqlAlarmRuleRequestBody CreateSqlAlarmRuleRequest::getBody() const
{
    return body_;
}

void CreateSqlAlarmRuleRequest::setBody(const CreateSqlAlarmRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSqlAlarmRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSqlAlarmRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


