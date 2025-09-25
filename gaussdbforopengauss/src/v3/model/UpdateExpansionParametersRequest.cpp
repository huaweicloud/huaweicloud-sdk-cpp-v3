

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateExpansionParametersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateExpansionParametersRequest::UpdateExpansionParametersRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateExpansionParametersRequest::~UpdateExpansionParametersRequest() = default;

void UpdateExpansionParametersRequest::validate()
{
}

web::json::value UpdateExpansionParametersRequest::toJson() const
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
bool UpdateExpansionParametersRequest::fromJson(const web::json::value& val)
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
            ExpansionParametersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateExpansionParametersRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateExpansionParametersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateExpansionParametersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateExpansionParametersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateExpansionParametersRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateExpansionParametersRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateExpansionParametersRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateExpansionParametersRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ExpansionParametersRequestBody UpdateExpansionParametersRequest::getBody() const
{
    return body_;
}

void UpdateExpansionParametersRequest::setBody(const ExpansionParametersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateExpansionParametersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateExpansionParametersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


