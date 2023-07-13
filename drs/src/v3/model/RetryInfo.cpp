

#include "huaweicloud/drs/v3/model/RetryInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




RetryInfo::RetryInfo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    isSyncReEdit_ = false;
    isSyncReEditIsSet_ = false;
}

RetryInfo::~RetryInfo() = default;

void RetryInfo::validate()
{
}

web::json::value RetryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(isSyncReEditIsSet_) {
        val[utility::conversions::to_string_t("is_sync_re_edit")] = ModelBase::toJson(isSyncReEdit_);
    }

    return val;
}

bool RetryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sync_re_edit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sync_re_edit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSyncReEdit(refVal);
        }
    }
    return ok;
}

std::string RetryInfo::getJobId() const
{
    return jobId_;
}

void RetryInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RetryInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RetryInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool RetryInfo::isIsSyncReEdit() const
{
    return isSyncReEdit_;
}

void RetryInfo::setIsSyncReEdit(bool value)
{
    isSyncReEdit_ = value;
    isSyncReEditIsSet_ = true;
}

bool RetryInfo::isSyncReEditIsSet() const
{
    return isSyncReEditIsSet_;
}

void RetryInfo::unsetisSyncReEdit()
{
    isSyncReEditIsSet_ = false;
}

}
}
}
}
}


