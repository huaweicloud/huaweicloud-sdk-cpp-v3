

#include "huaweicloud/modelarts/v1/model/RunningRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RunningRecord::RunningRecord()
{
    startAt_ = 0L;
    startAtIsSet_ = false;
    endAt_ = 0L;
    endAtIsSet_ = false;
    xpuStartAt_ = 0L;
    xpuStartAtIsSet_ = false;
    startType_ = "";
    startTypeIsSet_ = false;
    endReason_ = "";
    endReasonIsSet_ = false;
    endRelatedTask_ = "";
    endRelatedTaskIsSet_ = false;
    endRecover_ = "";
    endRecoverIsSet_ = false;
    endRecoverBeforeDowngrade_ = "";
    endRecoverBeforeDowngradeIsSet_ = false;
    recoverRecordsIsSet_ = false;
}

RunningRecord::~RunningRecord() = default;

void RunningRecord::validate()
{
}

web::json::value RunningRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startAtIsSet_) {
        val[utility::conversions::to_string_t("start_at")] = ModelBase::toJson(startAt_);
    }
    if(endAtIsSet_) {
        val[utility::conversions::to_string_t("end_at")] = ModelBase::toJson(endAt_);
    }
    if(xpuStartAtIsSet_) {
        val[utility::conversions::to_string_t("xpu_start_at")] = ModelBase::toJson(xpuStartAt_);
    }
    if(startTypeIsSet_) {
        val[utility::conversions::to_string_t("start_type")] = ModelBase::toJson(startType_);
    }
    if(endReasonIsSet_) {
        val[utility::conversions::to_string_t("end_reason")] = ModelBase::toJson(endReason_);
    }
    if(endRelatedTaskIsSet_) {
        val[utility::conversions::to_string_t("end_related_task")] = ModelBase::toJson(endRelatedTask_);
    }
    if(endRecoverIsSet_) {
        val[utility::conversions::to_string_t("end_recover")] = ModelBase::toJson(endRecover_);
    }
    if(endRecoverBeforeDowngradeIsSet_) {
        val[utility::conversions::to_string_t("end_recover_before_downgrade")] = ModelBase::toJson(endRecoverBeforeDowngrade_);
    }
    if(recoverRecordsIsSet_) {
        val[utility::conversions::to_string_t("recover_records")] = ModelBase::toJson(recoverRecords_);
    }

    return val;
}
bool RunningRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xpu_start_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xpu_start_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXpuStartAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_related_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_related_task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndRelatedTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_recover"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_recover"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndRecover(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_recover_before_downgrade"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_recover_before_downgrade"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndRecoverBeforeDowngrade(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recover_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recover_records"));
        if(!fieldValue.is_null())
        {
            std::vector<RecoverRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoverRecords(refVal);
        }
    }
    return ok;
}


int64_t RunningRecord::getStartAt() const
{
    return startAt_;
}

void RunningRecord::setStartAt(int64_t value)
{
    startAt_ = value;
    startAtIsSet_ = true;
}

bool RunningRecord::startAtIsSet() const
{
    return startAtIsSet_;
}

void RunningRecord::unsetstartAt()
{
    startAtIsSet_ = false;
}

int64_t RunningRecord::getEndAt() const
{
    return endAt_;
}

void RunningRecord::setEndAt(int64_t value)
{
    endAt_ = value;
    endAtIsSet_ = true;
}

bool RunningRecord::endAtIsSet() const
{
    return endAtIsSet_;
}

void RunningRecord::unsetendAt()
{
    endAtIsSet_ = false;
}

int64_t RunningRecord::getXpuStartAt() const
{
    return xpuStartAt_;
}

void RunningRecord::setXpuStartAt(int64_t value)
{
    xpuStartAt_ = value;
    xpuStartAtIsSet_ = true;
}

bool RunningRecord::xpuStartAtIsSet() const
{
    return xpuStartAtIsSet_;
}

void RunningRecord::unsetxpuStartAt()
{
    xpuStartAtIsSet_ = false;
}

std::string RunningRecord::getStartType() const
{
    return startType_;
}

void RunningRecord::setStartType(const std::string& value)
{
    startType_ = value;
    startTypeIsSet_ = true;
}

bool RunningRecord::startTypeIsSet() const
{
    return startTypeIsSet_;
}

void RunningRecord::unsetstartType()
{
    startTypeIsSet_ = false;
}

std::string RunningRecord::getEndReason() const
{
    return endReason_;
}

void RunningRecord::setEndReason(const std::string& value)
{
    endReason_ = value;
    endReasonIsSet_ = true;
}

bool RunningRecord::endReasonIsSet() const
{
    return endReasonIsSet_;
}

void RunningRecord::unsetendReason()
{
    endReasonIsSet_ = false;
}

std::string RunningRecord::getEndRelatedTask() const
{
    return endRelatedTask_;
}

void RunningRecord::setEndRelatedTask(const std::string& value)
{
    endRelatedTask_ = value;
    endRelatedTaskIsSet_ = true;
}

bool RunningRecord::endRelatedTaskIsSet() const
{
    return endRelatedTaskIsSet_;
}

void RunningRecord::unsetendRelatedTask()
{
    endRelatedTaskIsSet_ = false;
}

std::string RunningRecord::getEndRecover() const
{
    return endRecover_;
}

void RunningRecord::setEndRecover(const std::string& value)
{
    endRecover_ = value;
    endRecoverIsSet_ = true;
}

bool RunningRecord::endRecoverIsSet() const
{
    return endRecoverIsSet_;
}

void RunningRecord::unsetendRecover()
{
    endRecoverIsSet_ = false;
}

std::string RunningRecord::getEndRecoverBeforeDowngrade() const
{
    return endRecoverBeforeDowngrade_;
}

void RunningRecord::setEndRecoverBeforeDowngrade(const std::string& value)
{
    endRecoverBeforeDowngrade_ = value;
    endRecoverBeforeDowngradeIsSet_ = true;
}

bool RunningRecord::endRecoverBeforeDowngradeIsSet() const
{
    return endRecoverBeforeDowngradeIsSet_;
}

void RunningRecord::unsetendRecoverBeforeDowngrade()
{
    endRecoverBeforeDowngradeIsSet_ = false;
}

std::vector<RecoverRecord>& RunningRecord::getRecoverRecords()
{
    return recoverRecords_;
}

void RunningRecord::setRecoverRecords(const std::vector<RecoverRecord>& value)
{
    recoverRecords_ = value;
    recoverRecordsIsSet_ = true;
}

bool RunningRecord::recoverRecordsIsSet() const
{
    return recoverRecordsIsSet_;
}

void RunningRecord::unsetrecoverRecords()
{
    recoverRecordsIsSet_ = false;
}

}
}
}
}
}


