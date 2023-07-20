

#include "huaweicloud/gaussdb/v3/model/ListLtsSlowlogDetailsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListLtsSlowlogDetailsRequest::ListLtsSlowlogDetailsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListLtsSlowlogDetailsRequest::~ListLtsSlowlogDetailsRequest() = default;

void ListLtsSlowlogDetailsRequest::validate()
{
}

web::json::value ListLtsSlowlogDetailsRequest::toJson() const
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

bool ListLtsSlowlogDetailsRequest::fromJson(const web::json::value& val)
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
            LtsLogSlowQueryRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListLtsSlowlogDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListLtsSlowlogDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListLtsSlowlogDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListLtsSlowlogDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListLtsSlowlogDetailsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListLtsSlowlogDetailsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListLtsSlowlogDetailsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListLtsSlowlogDetailsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

LtsLogSlowQueryRequest ListLtsSlowlogDetailsRequest::getBody() const
{
    return body_;
}

void ListLtsSlowlogDetailsRequest::setBody(const LtsLogSlowQueryRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListLtsSlowlogDetailsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListLtsSlowlogDetailsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


