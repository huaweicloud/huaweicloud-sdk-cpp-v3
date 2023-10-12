

#include "huaweicloud/rds/v3/model/RestoreTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreTablesRequest::RestoreTablesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreTablesRequest::~RestoreTablesRequest() = default;

void RestoreTablesRequest::validate()
{
}

web::json::value RestoreTablesRequest::toJson() const
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
bool RestoreTablesRequest::fromJson(const web::json::value& val)
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
            RestoreTablesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestoreTablesRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestoreTablesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestoreTablesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestoreTablesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RestoreTablesRequest::getInstanceId() const
{
    return instanceId_;
}

void RestoreTablesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreTablesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreTablesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RestoreTablesRequestBody RestoreTablesRequest::getBody() const
{
    return body_;
}

void RestoreTablesRequest::setBody(const RestoreTablesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreTablesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreTablesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


