

#include "huaweicloud/gaussdb/v3/model/DeleteSqlFilterRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteSqlFilterRuleRequest::DeleteSqlFilterRuleRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteSqlFilterRuleRequest::~DeleteSqlFilterRuleRequest() = default;

void DeleteSqlFilterRuleRequest::validate()
{
}

web::json::value DeleteSqlFilterRuleRequest::toJson() const
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

bool DeleteSqlFilterRuleRequest::fromJson(const web::json::value& val)
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
            DeleteSqlFilterRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DeleteSqlFilterRuleRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteSqlFilterRuleRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteSqlFilterRuleRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteSqlFilterRuleRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteSqlFilterRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteSqlFilterRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteSqlFilterRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteSqlFilterRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteSqlFilterRuleReq DeleteSqlFilterRuleRequest::getBody() const
{
    return body_;
}

void DeleteSqlFilterRuleRequest::setBody(const DeleteSqlFilterRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteSqlFilterRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteSqlFilterRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


