

#include "huaweicloud/modelarts/v1/model/StageInfoWithSub.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StageInfoWithSub::StageInfoWithSub()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    enMessage_ = "";
    enMessageIsSet_ = false;
    zhMessage_ = "";
    zhMessageIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    stageOrder_ = 0;
    stageOrderIsSet_ = false;
    subStagesIsSet_ = false;
}

StageInfoWithSub::~StageInfoWithSub() = default;

void StageInfoWithSub::validate()
{
}

web::json::value StageInfoWithSub::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enMessageIsSet_) {
        val[utility::conversions::to_string_t("en_message")] = ModelBase::toJson(enMessage_);
    }
    if(zhMessageIsSet_) {
        val[utility::conversions::to_string_t("zh_message")] = ModelBase::toJson(zhMessage_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(stageOrderIsSet_) {
        val[utility::conversions::to_string_t("stage_order")] = ModelBase::toJson(stageOrder_);
    }
    if(subStagesIsSet_) {
        val[utility::conversions::to_string_t("sub_stages")] = ModelBase::toJson(subStages_);
    }

    return val;
}
bool StageInfoWithSub::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("en_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("en_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("zh_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zh_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZhMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage_order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_stages"));
        if(!fieldValue.is_null())
        {
            std::vector<SubStage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubStages(refVal);
        }
    }
    return ok;
}


std::string StageInfoWithSub::getJobId() const
{
    return jobId_;
}

void StageInfoWithSub::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StageInfoWithSub::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StageInfoWithSub::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string StageInfoWithSub::getName() const
{
    return name_;
}

void StageInfoWithSub::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StageInfoWithSub::nameIsSet() const
{
    return nameIsSet_;
}

void StageInfoWithSub::unsetname()
{
    nameIsSet_ = false;
}

std::string StageInfoWithSub::getEnMessage() const
{
    return enMessage_;
}

void StageInfoWithSub::setEnMessage(const std::string& value)
{
    enMessage_ = value;
    enMessageIsSet_ = true;
}

bool StageInfoWithSub::enMessageIsSet() const
{
    return enMessageIsSet_;
}

void StageInfoWithSub::unsetenMessage()
{
    enMessageIsSet_ = false;
}

std::string StageInfoWithSub::getZhMessage() const
{
    return zhMessage_;
}

void StageInfoWithSub::setZhMessage(const std::string& value)
{
    zhMessage_ = value;
    zhMessageIsSet_ = true;
}

bool StageInfoWithSub::zhMessageIsSet() const
{
    return zhMessageIsSet_;
}

void StageInfoWithSub::unsetzhMessage()
{
    zhMessageIsSet_ = false;
}

std::string StageInfoWithSub::getStartTime() const
{
    return startTime_;
}

void StageInfoWithSub::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool StageInfoWithSub::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void StageInfoWithSub::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string StageInfoWithSub::getEndTime() const
{
    return endTime_;
}

void StageInfoWithSub::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool StageInfoWithSub::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void StageInfoWithSub::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t StageInfoWithSub::getStageOrder() const
{
    return stageOrder_;
}

void StageInfoWithSub::setStageOrder(int32_t value)
{
    stageOrder_ = value;
    stageOrderIsSet_ = true;
}

bool StageInfoWithSub::stageOrderIsSet() const
{
    return stageOrderIsSet_;
}

void StageInfoWithSub::unsetstageOrder()
{
    stageOrderIsSet_ = false;
}

std::vector<SubStage>& StageInfoWithSub::getSubStages()
{
    return subStages_;
}

void StageInfoWithSub::setSubStages(const std::vector<SubStage>& value)
{
    subStages_ = value;
    subStagesIsSet_ = true;
}

bool StageInfoWithSub::subStagesIsSet() const
{
    return subStagesIsSet_;
}

void StageInfoWithSub::unsetsubStages()
{
    subStagesIsSet_ = false;
}

}
}
}
}
}


