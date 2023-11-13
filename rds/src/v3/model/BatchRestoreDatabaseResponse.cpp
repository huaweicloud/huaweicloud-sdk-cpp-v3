

#include "huaweicloud/rds/v3/model/BatchRestoreDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchRestoreDatabaseResponse::BatchRestoreDatabaseResponse()
{
    restoreResultIsSet_ = false;
}

BatchRestoreDatabaseResponse::~BatchRestoreDatabaseResponse() = default;

void BatchRestoreDatabaseResponse::validate()
{
}

web::json::value BatchRestoreDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreResultIsSet_) {
        val[utility::conversions::to_string_t("restore_result")] = ModelBase::toJson(restoreResult_);
    }

    return val;
}
bool BatchRestoreDatabaseResponse::fromJson(const web::json::value& val)
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


std::vector<PostgreSQLRestoreResult>& BatchRestoreDatabaseResponse::getRestoreResult()
{
    return restoreResult_;
}

void BatchRestoreDatabaseResponse::setRestoreResult(const std::vector<PostgreSQLRestoreResult>& value)
{
    restoreResult_ = value;
    restoreResultIsSet_ = true;
}

bool BatchRestoreDatabaseResponse::restoreResultIsSet() const
{
    return restoreResultIsSet_;
}

void BatchRestoreDatabaseResponse::unsetrestoreResult()
{
    restoreResultIsSet_ = false;
}

}
}
}
}
}


