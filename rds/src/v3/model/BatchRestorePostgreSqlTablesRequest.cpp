

#include "huaweicloud/rds/v3/model/BatchRestorePostgreSqlTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchRestorePostgreSqlTablesRequest::BatchRestorePostgreSqlTablesRequest()
{
    bodyIsSet_ = false;
}

BatchRestorePostgreSqlTablesRequest::~BatchRestorePostgreSqlTablesRequest() = default;

void BatchRestorePostgreSqlTablesRequest::validate()
{
}

web::json::value BatchRestorePostgreSqlTablesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchRestorePostgreSqlTablesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PostgreSQLRestoreTableRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


PostgreSQLRestoreTableRequest BatchRestorePostgreSqlTablesRequest::getBody() const
{
    return body_;
}

void BatchRestorePostgreSqlTablesRequest::setBody(const PostgreSQLRestoreTableRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchRestorePostgreSqlTablesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchRestorePostgreSqlTablesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


