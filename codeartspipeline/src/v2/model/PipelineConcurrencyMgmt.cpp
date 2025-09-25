

#include "huaweicloud/codeartspipeline/v2/model/PipelineConcurrencyMgmt.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineConcurrencyMgmt::PipelineConcurrencyMgmt()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    concurrencyNumber_ = 0;
    concurrencyNumberIsSet_ = false;
    exceedAction_ = "";
    exceedActionIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
}

PipelineConcurrencyMgmt::~PipelineConcurrencyMgmt() = default;

void PipelineConcurrencyMgmt::validate()
{
}

web::json::value PipelineConcurrencyMgmt::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(concurrencyNumberIsSet_) {
        val[utility::conversions::to_string_t("concurrency_number")] = ModelBase::toJson(concurrencyNumber_);
    }
    if(exceedActionIsSet_) {
        val[utility::conversions::to_string_t("exceed_action")] = ModelBase::toJson(exceedAction_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}
bool PipelineConcurrencyMgmt::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrency_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrency_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrencyNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exceed_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exceed_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExceedAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    return ok;
}


std::string PipelineConcurrencyMgmt::getPipelineId() const
{
    return pipelineId_;
}

void PipelineConcurrencyMgmt::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool PipelineConcurrencyMgmt::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void PipelineConcurrencyMgmt::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

int32_t PipelineConcurrencyMgmt::getConcurrencyNumber() const
{
    return concurrencyNumber_;
}

void PipelineConcurrencyMgmt::setConcurrencyNumber(int32_t value)
{
    concurrencyNumber_ = value;
    concurrencyNumberIsSet_ = true;
}

bool PipelineConcurrencyMgmt::concurrencyNumberIsSet() const
{
    return concurrencyNumberIsSet_;
}

void PipelineConcurrencyMgmt::unsetconcurrencyNumber()
{
    concurrencyNumberIsSet_ = false;
}

std::string PipelineConcurrencyMgmt::getExceedAction() const
{
    return exceedAction_;
}

void PipelineConcurrencyMgmt::setExceedAction(const std::string& value)
{
    exceedAction_ = value;
    exceedActionIsSet_ = true;
}

bool PipelineConcurrencyMgmt::exceedActionIsSet() const
{
    return exceedActionIsSet_;
}

void PipelineConcurrencyMgmt::unsetexceedAction()
{
    exceedActionIsSet_ = false;
}

int64_t PipelineConcurrencyMgmt::getCreateTime() const
{
    return createTime_;
}

void PipelineConcurrencyMgmt::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PipelineConcurrencyMgmt::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PipelineConcurrencyMgmt::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t PipelineConcurrencyMgmt::getUpdateTime() const
{
    return updateTime_;
}

void PipelineConcurrencyMgmt::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool PipelineConcurrencyMgmt::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void PipelineConcurrencyMgmt::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

bool PipelineConcurrencyMgmt::isEnable() const
{
    return enable_;
}

void PipelineConcurrencyMgmt::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool PipelineConcurrencyMgmt::enableIsSet() const
{
    return enableIsSet_;
}

void PipelineConcurrencyMgmt::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}


