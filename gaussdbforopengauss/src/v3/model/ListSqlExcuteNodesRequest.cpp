

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlExcuteNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlExcuteNodesRequest::ListSqlExcuteNodesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListSqlExcuteNodesRequest::~ListSqlExcuteNodesRequest() = default;

void ListSqlExcuteNodesRequest::validate()
{
}

web::json::value ListSqlExcuteNodesRequest::toJson() const
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
bool ListSqlExcuteNodesRequest::fromJson(const web::json::value& val)
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
            ListSQLExcuteNodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSqlExcuteNodesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSqlExcuteNodesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSqlExcuteNodesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSqlExcuteNodesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSqlExcuteNodesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlExcuteNodesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlExcuteNodesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlExcuteNodesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListSQLExcuteNodeRequestBody ListSqlExcuteNodesRequest::getBody() const
{
    return body_;
}

void ListSqlExcuteNodesRequest::setBody(const ListSQLExcuteNodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSqlExcuteNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSqlExcuteNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


