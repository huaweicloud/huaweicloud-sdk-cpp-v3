

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTopSqlsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTopSqlsRequest::ListTopSqlsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTopSqlsRequest::~ListTopSqlsRequest() = default;

void ListTopSqlsRequest::validate()
{
}

web::json::value ListTopSqlsRequest::toJson() const
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
bool ListTopSqlsRequest::fromJson(const web::json::value& val)
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
            ListTopSqlsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTopSqlsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTopSqlsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTopSqlsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTopSqlsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListTopSqlsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListTopSqlsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTopSqlsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTopSqlsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListTopSqlsRequestBody ListTopSqlsRequest::getBody() const
{
    return body_;
}

void ListTopSqlsRequest::setBody(const ListTopSqlsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTopSqlsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTopSqlsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


