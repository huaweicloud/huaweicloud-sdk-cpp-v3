

#include "huaweicloud/drs/v3/model/PreCheckInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




PreCheckInfo::PreCheckInfo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    precheckMode_ = "";
    precheckModeIsSet_ = false;
}

PreCheckInfo::~PreCheckInfo() = default;

void PreCheckInfo::validate()
{
}

web::json::value PreCheckInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(precheckModeIsSet_) {
        val[utility::conversions::to_string_t("precheck_mode")] = ModelBase::toJson(precheckMode_);
    }

    return val;
}
bool PreCheckInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("precheck_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("precheck_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrecheckMode(refVal);
        }
    }
    return ok;
}


std::string PreCheckInfo::getJobId() const
{
    return jobId_;
}

void PreCheckInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool PreCheckInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void PreCheckInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string PreCheckInfo::getPrecheckMode() const
{
    return precheckMode_;
}

void PreCheckInfo::setPrecheckMode(const std::string& value)
{
    precheckMode_ = value;
    precheckModeIsSet_ = true;
}

bool PreCheckInfo::precheckModeIsSet() const
{
    return precheckModeIsSet_;
}

void PreCheckInfo::unsetprecheckMode()
{
    precheckModeIsSet_ = false;
}

}
}
}
}
}


