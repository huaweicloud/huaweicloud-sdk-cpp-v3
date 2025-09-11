

#include "huaweicloud/dbss/v1/model/ListSqlInjectionRulesNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListSqlInjectionRulesNewRequest::ListSqlInjectionRulesNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListSqlInjectionRulesNewRequest::~ListSqlInjectionRulesNewRequest() = default;

void ListSqlInjectionRulesNewRequest::validate()
{
}

web::json::value ListSqlInjectionRulesNewRequest::toJson() const
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
bool ListSqlInjectionRulesNewRequest::fromJson(const web::json::value& val)
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


std::string ListSqlInjectionRulesNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlInjectionRulesNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlInjectionRulesNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlInjectionRulesNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SqlRuleRequest ListSqlInjectionRulesNewRequest::getBody() const
{
    return body_;
}

void ListSqlInjectionRulesNewRequest::setBody(const SqlRuleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSqlInjectionRulesNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSqlInjectionRulesNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


