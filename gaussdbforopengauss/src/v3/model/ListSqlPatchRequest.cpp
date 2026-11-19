

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlPatchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlPatchRequest::ListSqlPatchRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListSqlPatchRequest::~ListSqlPatchRequest() = default;

void ListSqlPatchRequest::validate()
{
}

web::json::value ListSqlPatchRequest::toJson() const
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
bool ListSqlPatchRequest::fromJson(const web::json::value& val)
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
            ListSqlPatchRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSqlPatchRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSqlPatchRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSqlPatchRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSqlPatchRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSqlPatchRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlPatchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlPatchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlPatchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListSqlPatchRequestBody ListSqlPatchRequest::getBody() const
{
    return body_;
}

void ListSqlPatchRequest::setBody(const ListSqlPatchRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSqlPatchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSqlPatchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


