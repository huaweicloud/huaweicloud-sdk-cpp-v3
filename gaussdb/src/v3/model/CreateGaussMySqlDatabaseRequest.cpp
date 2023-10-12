

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlDatabaseRequest::CreateGaussMySqlDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGaussMySqlDatabaseRequest::~CreateGaussMySqlDatabaseRequest() = default;

void CreateGaussMySqlDatabaseRequest::validate()
{
}

web::json::value CreateGaussMySqlDatabaseRequest::toJson() const
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
bool CreateGaussMySqlDatabaseRequest::fromJson(const web::json::value& val)
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
            CreateGaussMySqlDatabaseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateGaussMySqlDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateGaussMySqlDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateGaussMySqlDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateGaussMySqlDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateGaussMySqlDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateGaussMySqlDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateGaussMySqlDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateGaussMySqlDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateGaussMySqlDatabaseRequestBody CreateGaussMySqlDatabaseRequest::getBody() const
{
    return body_;
}

void CreateGaussMySqlDatabaseRequest::setBody(const CreateGaussMySqlDatabaseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGaussMySqlDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGaussMySqlDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


