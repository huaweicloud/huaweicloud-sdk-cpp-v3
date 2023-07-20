

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseSchemasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateDatabaseSchemasRequest::CreateDatabaseSchemasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDatabaseSchemasRequest::~CreateDatabaseSchemasRequest() = default;

void CreateDatabaseSchemasRequest::validate()
{
}

web::json::value CreateDatabaseSchemasRequest::toJson() const
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

bool CreateDatabaseSchemasRequest::fromJson(const web::json::value& val)
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
            GaussDBforOpenGaussDatabaseSchemaReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateDatabaseSchemasRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateDatabaseSchemasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateDatabaseSchemasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateDatabaseSchemasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateDatabaseSchemasRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDatabaseSchemasRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDatabaseSchemasRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDatabaseSchemasRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

GaussDBforOpenGaussDatabaseSchemaReq CreateDatabaseSchemasRequest::getBody() const
{
    return body_;
}

void CreateDatabaseSchemasRequest::setBody(const GaussDBforOpenGaussDatabaseSchemaReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDatabaseSchemasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDatabaseSchemasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


