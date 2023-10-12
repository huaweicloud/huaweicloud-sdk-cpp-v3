

#include "huaweicloud/drs/v3/model/ReplaceDefinerInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ReplaceDefinerInfo::ReplaceDefinerInfo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    replaceDefiner_ = false;
    replaceDefinerIsSet_ = false;
}

ReplaceDefinerInfo::~ReplaceDefinerInfo() = default;

void ReplaceDefinerInfo::validate()
{
}

web::json::value ReplaceDefinerInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(replaceDefinerIsSet_) {
        val[utility::conversions::to_string_t("replace_definer")] = ModelBase::toJson(replaceDefiner_);
    }

    return val;
}
bool ReplaceDefinerInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("replace_definer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replace_definer"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplaceDefiner(refVal);
        }
    }
    return ok;
}


std::string ReplaceDefinerInfo::getJobId() const
{
    return jobId_;
}

void ReplaceDefinerInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ReplaceDefinerInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ReplaceDefinerInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool ReplaceDefinerInfo::isReplaceDefiner() const
{
    return replaceDefiner_;
}

void ReplaceDefinerInfo::setReplaceDefiner(bool value)
{
    replaceDefiner_ = value;
    replaceDefinerIsSet_ = true;
}

bool ReplaceDefinerInfo::replaceDefinerIsSet() const
{
    return replaceDefinerIsSet_;
}

void ReplaceDefinerInfo::unsetreplaceDefiner()
{
    replaceDefinerIsSet_ = false;
}

}
}
}
}
}


