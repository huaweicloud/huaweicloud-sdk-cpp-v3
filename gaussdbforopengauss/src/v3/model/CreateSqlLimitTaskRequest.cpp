

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateSqlLimitTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateSqlLimitTaskRequest::CreateSqlLimitTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSqlLimitTaskRequest::~CreateSqlLimitTaskRequest() = default;

void CreateSqlLimitTaskRequest::validate()
{
}

web::json::value CreateSqlLimitTaskRequest::toJson() const
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
bool CreateSqlLimitTaskRequest::fromJson(const web::json::value& val)
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
            CreateSqlLimitTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSqlLimitTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateSqlLimitTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateSqlLimitTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateSqlLimitTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateSqlLimitTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateSqlLimitTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateSqlLimitTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateSqlLimitTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateSqlLimitTaskRequestBody CreateSqlLimitTaskRequest::getBody() const
{
    return body_;
}

void CreateSqlLimitTaskRequest::setBody(const CreateSqlLimitTaskRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSqlLimitTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSqlLimitTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


