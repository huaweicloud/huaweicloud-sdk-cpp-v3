

#include "huaweicloud/rds/v3/model/ListErrorlogForLtsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListErrorlogForLtsRequest::ListErrorlogForLtsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListErrorlogForLtsRequest::~ListErrorlogForLtsRequest() = default;

void ListErrorlogForLtsRequest::validate()
{
}

web::json::value ListErrorlogForLtsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListErrorlogForLtsRequest::fromJson(const web::json::value& val)
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
            ErrorlogForLtsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListErrorlogForLtsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListErrorlogForLtsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListErrorlogForLtsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListErrorlogForLtsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListErrorlogForLtsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListErrorlogForLtsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListErrorlogForLtsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListErrorlogForLtsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ErrorlogForLtsRequest ListErrorlogForLtsRequest::getBody() const
{
    return body_;
}

void ListErrorlogForLtsRequest::setBody(const ErrorlogForLtsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListErrorlogForLtsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListErrorlogForLtsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


