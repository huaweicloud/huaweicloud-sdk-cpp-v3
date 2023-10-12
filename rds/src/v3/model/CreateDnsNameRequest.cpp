

#include "huaweicloud/rds/v3/model/CreateDnsNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDnsNameRequest::CreateDnsNameRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDnsNameRequest::~CreateDnsNameRequest() = default;

void CreateDnsNameRequest::validate()
{
}

web::json::value CreateDnsNameRequest::toJson() const
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
bool CreateDnsNameRequest::fromJson(const web::json::value& val)
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
            CreateDnsNameRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDnsNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateDnsNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateDnsNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateDnsNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateDnsNameRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDnsNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDnsNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDnsNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDnsNameRequestBody CreateDnsNameRequest::getBody() const
{
    return body_;
}

void CreateDnsNameRequest::setBody(const CreateDnsNameRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDnsNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDnsNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


