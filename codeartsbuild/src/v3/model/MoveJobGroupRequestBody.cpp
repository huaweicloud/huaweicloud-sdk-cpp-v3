

#include "huaweicloud/codeartsbuild/v3/model/MoveJobGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




MoveJobGroupRequestBody::MoveJobGroupRequestBody()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    jobsIsSet_ = false;
}

MoveJobGroupRequestBody::~MoveJobGroupRequestBody() = default;

void MoveJobGroupRequestBody::validate()
{
}

web::json::value MoveJobGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool MoveJobGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<MoveJobGroupRequestBody_jobs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::string MoveJobGroupRequestBody::getGroupId() const
{
    return groupId_;
}

void MoveJobGroupRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool MoveJobGroupRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void MoveJobGroupRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::vector<MoveJobGroupRequestBody_jobs>& MoveJobGroupRequestBody::getJobs()
{
    return jobs_;
}

void MoveJobGroupRequestBody::setJobs(const std::vector<MoveJobGroupRequestBody_jobs>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool MoveJobGroupRequestBody::jobsIsSet() const
{
    return jobsIsSet_;
}

void MoveJobGroupRequestBody::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


