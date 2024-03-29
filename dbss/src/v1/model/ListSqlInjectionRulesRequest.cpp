

#include "huaweicloud/dbss/v1/model/ListSqlInjectionRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListSqlInjectionRulesRequest::ListSqlInjectionRulesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListSqlInjectionRulesRequest::~ListSqlInjectionRulesRequest() = default;

void ListSqlInjectionRulesRequest::validate()
{
}

web::json::value ListSqlInjectionRulesRequest::toJson() const
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
bool ListSqlInjectionRulesRequest::fromJson(const web::json::value& val)
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
            SqlRuleRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSqlInjectionRulesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlInjectionRulesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlInjectionRulesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlInjectionRulesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SqlRuleRequest ListSqlInjectionRulesRequest::getBody() const
{
    return body_;
}

void ListSqlInjectionRulesRequest::setBody(const SqlRuleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSqlInjectionRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSqlInjectionRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


