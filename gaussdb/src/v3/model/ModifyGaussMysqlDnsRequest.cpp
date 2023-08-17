

#include "huaweicloud/gaussdb/v3/model/ModifyGaussMysqlDnsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyGaussMysqlDnsRequest::ModifyGaussMysqlDnsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyGaussMysqlDnsRequest::~ModifyGaussMysqlDnsRequest() = default;

void ModifyGaussMysqlDnsRequest::validate()
{
}

web::json::value ModifyGaussMysqlDnsRequest::toJson() const
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

bool ModifyGaussMysqlDnsRequest::fromJson(const web::json::value& val)
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
            ModifyDnsNameReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ModifyGaussMysqlDnsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyGaussMysqlDnsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyGaussMysqlDnsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyGaussMysqlDnsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyGaussMysqlDnsRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyGaussMysqlDnsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyGaussMysqlDnsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyGaussMysqlDnsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyDnsNameReq ModifyGaussMysqlDnsRequest::getBody() const
{
    return body_;
}

void ModifyGaussMysqlDnsRequest::setBody(const ModifyDnsNameReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyGaussMysqlDnsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyGaussMysqlDnsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


