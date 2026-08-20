

#include "huaweicloud/projectman/v4/model/BatchCreateSnapshotResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchCreateSnapshotResponse_result::BatchCreateSnapshotResponse_result()
{
    successIsSet_ = false;
    failedIsSet_ = false;
}

BatchCreateSnapshotResponse_result::~BatchCreateSnapshotResponse_result() = default;

void BatchCreateSnapshotResponse_result::validate()
{
}

web::json::value BatchCreateSnapshotResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(failedIsSet_) {
        val[utility::conversions::to_string_t("failed")] = ModelBase::toJson(failed_);
    }

    return val;
}
bool BatchCreateSnapshotResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateSnapshotResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateSnapshotResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    return ok;
}


std::vector<CreateSnapshotResult>& BatchCreateSnapshotResponse_result::getSuccess()
{
    return success_;
}

void BatchCreateSnapshotResponse_result::setSuccess(const std::vector<CreateSnapshotResult>& value)
{
    success_ = value;
    successIsSet_ = true;
}

bool BatchCreateSnapshotResponse_result::successIsSet() const
{
    return successIsSet_;
}

void BatchCreateSnapshotResponse_result::unsetsuccess()
{
    successIsSet_ = false;
}

std::vector<CreateSnapshotResult>& BatchCreateSnapshotResponse_result::getFailed()
{
    return failed_;
}

void BatchCreateSnapshotResponse_result::setFailed(const std::vector<CreateSnapshotResult>& value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool BatchCreateSnapshotResponse_result::failedIsSet() const
{
    return failedIsSet_;
}

void BatchCreateSnapshotResponse_result::unsetfailed()
{
    failedIsSet_ = false;
}

}
}
}
}
}


