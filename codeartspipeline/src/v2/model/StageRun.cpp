

#include "huaweicloud/codeartspipeline/v2/model/StageRun.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StageRun::StageRun()
{
    id_ = "";
    idIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    identifier_ = "";
    identifierIsSet_ = false;
    runAlways_ = false;
    runAlwaysIsSet_ = false;
    parallel_ = "";
    parallelIsSet_ = false;
    isSelect_ = false;
    isSelectIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
    dependsOnIsSet_ = false;
    condition_ = "";
    conditionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    pauseTime_ = 0L;
    pauseTimeIsSet_ = false;
    preIsSet_ = false;
    postIsSet_ = false;
    jobsIsSet_ = false;
}

StageRun::~StageRun() = default;

void StageRun::validate()
{
}

web::json::value StageRun::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(runAlwaysIsSet_) {
        val[utility::conversions::to_string_t("run_always")] = ModelBase::toJson(runAlways_);
    }
    if(parallelIsSet_) {
        val[utility::conversions::to_string_t("parallel")] = ModelBase::toJson(parallel_);
    }
    if(isSelectIsSet_) {
        val[utility::conversions::to_string_t("is_select")] = ModelBase::toJson(isSelect_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(dependsOnIsSet_) {
        val[utility::conversions::to_string_t("depends_on")] = ModelBase::toJson(dependsOn_);
    }
    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(pauseTimeIsSet_) {
        val[utility::conversions::to_string_t("pause_time")] = ModelBase::toJson(pauseTime_);
    }
    if(preIsSet_) {
        val[utility::conversions::to_string_t("pre")] = ModelBase::toJson(pre_);
    }
    if(postIsSet_) {
        val[utility::conversions::to_string_t("post")] = ModelBase::toJson(post_);
    }
    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool StageRun::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_always"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_always"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunAlways(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parallel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parallel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParallel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_select"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSelect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depends_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depends_on"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependsOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pause_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pause_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPauseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre"));
        if(!fieldValue.is_null())
        {
            std::vector<StepRun> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPre(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("post"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("post"));
        if(!fieldValue.is_null())
        {
            std::vector<StepRun> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<JobRun> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::string StageRun::getId() const
{
    return id_;
}

void StageRun::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StageRun::idIsSet() const
{
    return idIsSet_;
}

void StageRun::unsetid()
{
    idIsSet_ = false;
}

std::string StageRun::getCategory() const
{
    return category_;
}

void StageRun::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool StageRun::categoryIsSet() const
{
    return categoryIsSet_;
}

void StageRun::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string StageRun::getName() const
{
    return name_;
}

void StageRun::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StageRun::nameIsSet() const
{
    return nameIsSet_;
}

void StageRun::unsetname()
{
    nameIsSet_ = false;
}

std::string StageRun::getIdentifier() const
{
    return identifier_;
}

void StageRun::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool StageRun::identifierIsSet() const
{
    return identifierIsSet_;
}

void StageRun::unsetidentifier()
{
    identifierIsSet_ = false;
}

bool StageRun::isRunAlways() const
{
    return runAlways_;
}

void StageRun::setRunAlways(bool value)
{
    runAlways_ = value;
    runAlwaysIsSet_ = true;
}

bool StageRun::runAlwaysIsSet() const
{
    return runAlwaysIsSet_;
}

void StageRun::unsetrunAlways()
{
    runAlwaysIsSet_ = false;
}

std::string StageRun::getParallel() const
{
    return parallel_;
}

void StageRun::setParallel(const std::string& value)
{
    parallel_ = value;
    parallelIsSet_ = true;
}

bool StageRun::parallelIsSet() const
{
    return parallelIsSet_;
}

void StageRun::unsetparallel()
{
    parallelIsSet_ = false;
}

bool StageRun::isIsSelect() const
{
    return isSelect_;
}

void StageRun::setIsSelect(bool value)
{
    isSelect_ = value;
    isSelectIsSet_ = true;
}

bool StageRun::isSelectIsSet() const
{
    return isSelectIsSet_;
}

void StageRun::unsetisSelect()
{
    isSelectIsSet_ = false;
}

int32_t StageRun::getSequence() const
{
    return sequence_;
}

void StageRun::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool StageRun::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void StageRun::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::vector<std::string>& StageRun::getDependsOn()
{
    return dependsOn_;
}

void StageRun::setDependsOn(const std::vector<std::string>& value)
{
    dependsOn_ = value;
    dependsOnIsSet_ = true;
}

bool StageRun::dependsOnIsSet() const
{
    return dependsOnIsSet_;
}

void StageRun::unsetdependsOn()
{
    dependsOnIsSet_ = false;
}

std::string StageRun::getCondition() const
{
    return condition_;
}

void StageRun::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool StageRun::conditionIsSet() const
{
    return conditionIsSet_;
}

void StageRun::unsetcondition()
{
    conditionIsSet_ = false;
}

std::string StageRun::getStatus() const
{
    return status_;
}

void StageRun::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StageRun::statusIsSet() const
{
    return statusIsSet_;
}

void StageRun::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t StageRun::getStartTime() const
{
    return startTime_;
}

void StageRun::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool StageRun::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void StageRun::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t StageRun::getEndTime() const
{
    return endTime_;
}

void StageRun::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool StageRun::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void StageRun::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t StageRun::getPauseTime() const
{
    return pauseTime_;
}

void StageRun::setPauseTime(int64_t value)
{
    pauseTime_ = value;
    pauseTimeIsSet_ = true;
}

bool StageRun::pauseTimeIsSet() const
{
    return pauseTimeIsSet_;
}

void StageRun::unsetpauseTime()
{
    pauseTimeIsSet_ = false;
}

std::vector<StepRun>& StageRun::getPre()
{
    return pre_;
}

void StageRun::setPre(const std::vector<StepRun>& value)
{
    pre_ = value;
    preIsSet_ = true;
}

bool StageRun::preIsSet() const
{
    return preIsSet_;
}

void StageRun::unsetpre()
{
    preIsSet_ = false;
}

std::vector<StepRun>& StageRun::getPost()
{
    return post_;
}

void StageRun::setPost(const std::vector<StepRun>& value)
{
    post_ = value;
    postIsSet_ = true;
}

bool StageRun::postIsSet() const
{
    return postIsSet_;
}

void StageRun::unsetpost()
{
    postIsSet_ = false;
}

std::vector<JobRun>& StageRun::getJobs()
{
    return jobs_;
}

void StageRun::setJobs(const std::vector<JobRun>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool StageRun::jobsIsSet() const
{
    return jobsIsSet_;
}

void StageRun::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


