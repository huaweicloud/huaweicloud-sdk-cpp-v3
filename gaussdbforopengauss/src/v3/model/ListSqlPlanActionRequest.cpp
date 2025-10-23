

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlPlanActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlPlanActionRequest::ListSqlPlanActionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListSqlPlanActionRequest::~ListSqlPlanActionRequest() = default;

void ListSqlPlanActionRequest::validate()
{
}

web::json::value ListSqlPlanActionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListSqlPlanActionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QuerySqlPlanStateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSqlPlanActionRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlPlanActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlPlanActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlPlanActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSqlPlanActionRequest::getNodeId() const
{
    return nodeId_;
}

void ListSqlPlanActionRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListSqlPlanActionRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListSqlPlanActionRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListSqlPlanActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSqlPlanActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSqlPlanActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSqlPlanActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QuerySqlPlanStateRequest ListSqlPlanActionRequest::getBody() const
{
    return body_;
}

void ListSqlPlanActionRequest::setBody(const QuerySqlPlanStateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSqlPlanActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSqlPlanActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


