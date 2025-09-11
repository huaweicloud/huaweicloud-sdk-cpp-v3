

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSlowSqlDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSlowSqlDetailsRequest::ListSlowSqlDetailsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListSlowSqlDetailsRequest::~ListSlowSqlDetailsRequest() = default;

void ListSlowSqlDetailsRequest::validate()
{
}

web::json::value ListSlowSqlDetailsRequest::toJson() const
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
bool ListSlowSqlDetailsRequest::fromJson(const web::json::value& val)
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
            SlowSqlDetailRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSlowSqlDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSlowSqlDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSlowSqlDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSlowSqlDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSlowSqlDetailsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSlowSqlDetailsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSlowSqlDetailsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSlowSqlDetailsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SlowSqlDetailRequestBody ListSlowSqlDetailsRequest::getBody() const
{
    return body_;
}

void ListSlowSqlDetailsRequest::setBody(const SlowSqlDetailRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSlowSqlDetailsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSlowSqlDetailsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


