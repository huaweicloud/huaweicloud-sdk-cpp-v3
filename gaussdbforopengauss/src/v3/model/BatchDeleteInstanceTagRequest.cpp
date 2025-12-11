

#include "huaweicloud/gaussdbforopengauss/v3/model/BatchDeleteInstanceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BatchDeleteInstanceTagRequest::BatchDeleteInstanceTagRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteInstanceTagRequest::~BatchDeleteInstanceTagRequest() = default;

void BatchDeleteInstanceTagRequest::validate()
{
}

web::json::value BatchDeleteInstanceTagRequest::toJson() const
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
bool BatchDeleteInstanceTagRequest::fromJson(const web::json::value& val)
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
            BatchDeleteInstanceTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteInstanceTagRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchDeleteInstanceTagRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchDeleteInstanceTagRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchDeleteInstanceTagRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string BatchDeleteInstanceTagRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchDeleteInstanceTagRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchDeleteInstanceTagRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchDeleteInstanceTagRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BatchDeleteInstanceTagRequestBody BatchDeleteInstanceTagRequest::getBody() const
{
    return body_;
}

void BatchDeleteInstanceTagRequest::setBody(const BatchDeleteInstanceTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteInstanceTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteInstanceTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


