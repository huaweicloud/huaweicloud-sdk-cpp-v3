

#include "huaweicloud/rds/v3/model/ListPostgresqlListHistoryTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlListHistoryTablesRequest::ListPostgresqlListHistoryTablesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    bodyIsSet_ = false;
}

ListPostgresqlListHistoryTablesRequest::~ListPostgresqlListHistoryTablesRequest() = default;

void ListPostgresqlListHistoryTablesRequest::validate()
{
}

web::json::value ListPostgresqlListHistoryTablesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListPostgresqlListHistoryTablesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PostgreSQLHistoryTableRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListPostgresqlListHistoryTablesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPostgresqlListHistoryTablesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPostgresqlListHistoryTablesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPostgresqlListHistoryTablesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListPostgresqlListHistoryTablesRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListPostgresqlListHistoryTablesRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListPostgresqlListHistoryTablesRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListPostgresqlListHistoryTablesRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

PostgreSQLHistoryTableRequest ListPostgresqlListHistoryTablesRequest::getBody() const
{
    return body_;
}

void ListPostgresqlListHistoryTablesRequest::setBody(const PostgreSQLHistoryTableRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPostgresqlListHistoryTablesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPostgresqlListHistoryTablesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


