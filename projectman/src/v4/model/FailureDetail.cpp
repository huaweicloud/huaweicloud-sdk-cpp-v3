

#include "huaweicloud/projectman/v4/model/FailureDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




FailureDetail::FailureDetail()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    snapshotTitle_ = "";
    snapshotTitleIsSet_ = false;
    failureReason_ = "";
    failureReasonIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
}

FailureDetail::~FailureDetail() = default;

void FailureDetail::validate()
{
}

web::json::value FailureDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }
    if(snapshotTitleIsSet_) {
        val[utility::conversions::to_string_t("snapshot_title")] = ModelBase::toJson(snapshotTitle_);
    }
    if(failureReasonIsSet_) {
        val[utility::conversions::to_string_t("failure_reason")] = ModelBase::toJson(failureReason_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }

    return val;
}
bool FailureDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    return ok;
}


std::string FailureDetail::getSnapshotId() const
{
    return snapshotId_;
}

void FailureDetail::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool FailureDetail::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void FailureDetail::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

std::string FailureDetail::getSnapshotTitle() const
{
    return snapshotTitle_;
}

void FailureDetail::setSnapshotTitle(const std::string& value)
{
    snapshotTitle_ = value;
    snapshotTitleIsSet_ = true;
}

bool FailureDetail::snapshotTitleIsSet() const
{
    return snapshotTitleIsSet_;
}

void FailureDetail::unsetsnapshotTitle()
{
    snapshotTitleIsSet_ = false;
}

std::string FailureDetail::getFailureReason() const
{
    return failureReason_;
}

void FailureDetail::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool FailureDetail::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void FailureDetail::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

std::string FailureDetail::getErrorCode() const
{
    return errorCode_;
}

void FailureDetail::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool FailureDetail::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void FailureDetail::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

}
}
}
}
}


