

#include "huaweicloud/rds/v3/model/BatchRestorePostgreSqlTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchRestorePostgreSqlTablesResponse::BatchRestorePostgreSqlTablesResponse()
{
    restoreResultIsSet_ = false;
}

BatchRestorePostgreSqlTablesResponse::~BatchRestorePostgreSqlTablesResponse() = default;

void BatchRestorePostgreSqlTablesResponse::validate()
{
}

web::json::value BatchRestorePostgreSqlTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreResultIsSet_) {
        val[utility::conversions::to_string_t("restore_result")] = ModelBase::toJson(restoreResult_);
    }

    return val;
}
bool BatchRestorePostgreSqlTablesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_result"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgreSQLRestoreResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreResult(refVal);
        }
    }
    return ok;
}


std::vector<PostgreSQLRestoreResult>& BatchRestorePostgreSqlTablesResponse::getRestoreResult()
{
    return restoreResult_;
}

void BatchRestorePostgreSqlTablesResponse::setRestoreResult(const std::vector<PostgreSQLRestoreResult>& value)
{
    restoreResult_ = value;
    restoreResultIsSet_ = true;
}

bool BatchRestorePostgreSqlTablesResponse::restoreResultIsSet() const
{
    return restoreResultIsSet_;
}

void BatchRestorePostgreSqlTablesResponse::unsetrestoreResult()
{
    restoreResultIsSet_ = false;
}

}
}
}
}
}


