

#include "huaweicloud/rds/v3/model/BatchDeleteManualBackupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchDeleteManualBackupResponse::BatchDeleteManualBackupResponse()
{
    deleteResultsIsSet_ = false;
}

BatchDeleteManualBackupResponse::~BatchDeleteManualBackupResponse() = default;

void BatchDeleteManualBackupResponse::validate()
{
}

web::json::value BatchDeleteManualBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteResultsIsSet_) {
        val[utility::conversions::to_string_t("delete_results")] = ModelBase::toJson(deleteResults_);
    }

    return val;
}

bool BatchDeleteManualBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_results"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteBackupResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteResults(refVal);
        }
    }
    return ok;
}

std::vector<DeleteBackupResult>& BatchDeleteManualBackupResponse::getDeleteResults()
{
    return deleteResults_;
}

void BatchDeleteManualBackupResponse::setDeleteResults(const std::vector<DeleteBackupResult>& value)
{
    deleteResults_ = value;
    deleteResultsIsSet_ = true;
}

bool BatchDeleteManualBackupResponse::deleteResultsIsSet() const
{
    return deleteResultsIsSet_;
}

void BatchDeleteManualBackupResponse::unsetdeleteResults()
{
    deleteResultsIsSet_ = false;
}

}
}
}
}
}


