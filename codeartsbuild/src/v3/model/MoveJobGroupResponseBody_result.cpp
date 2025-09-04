

#include "huaweicloud/codeartsbuild/v3/model/MoveJobGroupResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




MoveJobGroupResponseBody_result::MoveJobGroupResponseBody_result()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    groupPathId_ = "";
    groupPathIdIsSet_ = false;
}

MoveJobGroupResponseBody_result::~MoveJobGroupResponseBody_result() = default;

void MoveJobGroupResponseBody_result::validate()
{
}

web::json::value MoveJobGroupResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(groupPathIdIsSet_) {
        val[utility::conversions::to_string_t("group_path_id")] = ModelBase::toJson(groupPathId_);
    }

    return val;
}
bool MoveJobGroupResponseBody_result::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_path_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_path_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupPathId(refVal);
        }
    }
    return ok;
}


std::string MoveJobGroupResponseBody_result::getJobId() const
{
    return jobId_;
}

void MoveJobGroupResponseBody_result::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool MoveJobGroupResponseBody_result::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void MoveJobGroupResponseBody_result::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string MoveJobGroupResponseBody_result::getGroupPathId() const
{
    return groupPathId_;
}

void MoveJobGroupResponseBody_result::setGroupPathId(const std::string& value)
{
    groupPathId_ = value;
    groupPathIdIsSet_ = true;
}

bool MoveJobGroupResponseBody_result::groupPathIdIsSet() const
{
    return groupPathIdIsSet_;
}

void MoveJobGroupResponseBody_result::unsetgroupPathId()
{
    groupPathIdIsSet_ = false;
}

}
}
}
}
}


