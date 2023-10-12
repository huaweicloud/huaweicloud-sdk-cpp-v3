

#include "huaweicloud/gaussdb/v3/model/SetSqlFilterRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetSqlFilterRuleRequest::SetSqlFilterRuleRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetSqlFilterRuleRequest::~SetSqlFilterRuleRequest() = default;

void SetSqlFilterRuleRequest::validate()
{
}

web::json::value SetSqlFilterRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetSqlFilterRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
            OperateSqlFilterRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetSqlFilterRuleRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetSqlFilterRuleRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetSqlFilterRuleRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetSqlFilterRuleRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetSqlFilterRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void SetSqlFilterRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetSqlFilterRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetSqlFilterRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OperateSqlFilterRuleReq SetSqlFilterRuleRequest::getBody() const
{
    return body_;
}

void SetSqlFilterRuleRequest::setBody(const OperateSqlFilterRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetSqlFilterRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetSqlFilterRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


