

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlDatabaseRequest::DeleteGaussMySqlDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteGaussMySqlDatabaseRequest::~DeleteGaussMySqlDatabaseRequest() = default;

void DeleteGaussMySqlDatabaseRequest::validate()
{
}

web::json::value DeleteGaussMySqlDatabaseRequest::toJson() const
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
bool DeleteGaussMySqlDatabaseRequest::fromJson(const web::json::value& val)
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
            DeleteGaussMySqlDatabaseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteGaussMySqlDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteGaussMySqlDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteGaussMySqlDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteGaussMySqlDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteGaussMySqlDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteGaussMySqlDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteGaussMySqlDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteGaussMySqlDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteGaussMySqlDatabaseRequestBody DeleteGaussMySqlDatabaseRequest::getBody() const
{
    return body_;
}

void DeleteGaussMySqlDatabaseRequest::setBody(const DeleteGaussMySqlDatabaseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteGaussMySqlDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteGaussMySqlDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


