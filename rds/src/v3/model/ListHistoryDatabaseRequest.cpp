

#include "huaweicloud/rds/v3/model/ListHistoryDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListHistoryDatabaseRequest::ListHistoryDatabaseRequest()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListHistoryDatabaseRequest::~ListHistoryDatabaseRequest() = default;

void ListHistoryDatabaseRequest::validate()
{
}

web::json::value ListHistoryDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListHistoryDatabaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
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
            PostgreSQLHistoryDatabaseRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListHistoryDatabaseRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListHistoryDatabaseRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListHistoryDatabaseRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListHistoryDatabaseRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListHistoryDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHistoryDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHistoryDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHistoryDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

PostgreSQLHistoryDatabaseRequest ListHistoryDatabaseRequest::getBody() const
{
    return body_;
}

void ListHistoryDatabaseRequest::setBody(const PostgreSQLHistoryDatabaseRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListHistoryDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListHistoryDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


