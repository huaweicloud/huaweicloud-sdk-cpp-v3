

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteHbaConfsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteHbaConfsRequest::DeleteHbaConfsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteHbaConfsRequest::~DeleteHbaConfsRequest() = default;

void DeleteHbaConfsRequest::validate()
{
}

web::json::value DeleteHbaConfsRequest::toJson() const
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
bool DeleteHbaConfsRequest::fromJson(const web::json::value& val)
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
            DeleteHbaConfRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteHbaConfsRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteHbaConfsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteHbaConfsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteHbaConfsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteHbaConfsRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteHbaConfsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteHbaConfsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteHbaConfsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteHbaConfRequestBody DeleteHbaConfsRequest::getBody() const
{
    return body_;
}

void DeleteHbaConfsRequest::setBody(const DeleteHbaConfRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteHbaConfsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteHbaConfsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


