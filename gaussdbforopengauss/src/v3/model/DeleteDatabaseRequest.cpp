

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteDatabaseRequest::DeleteDatabaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
}

DeleteDatabaseRequest::~DeleteDatabaseRequest() = default;

void DeleteDatabaseRequest::validate()
{
}

web::json::value DeleteDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }

    return val;
}
bool DeleteDatabaseRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    return ok;
}


std::string DeleteDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteDatabaseRequest::getDatabaseName() const
{
    return databaseName_;
}

void DeleteDatabaseRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool DeleteDatabaseRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void DeleteDatabaseRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

}
}
}
}
}


