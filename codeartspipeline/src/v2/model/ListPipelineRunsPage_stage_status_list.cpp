

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineRunsPage_stage_status_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineRunsPage_stage_status_list::ListPipelineRunsPage_stage_status_list()
{
    name_ = "";
    nameIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ListPipelineRunsPage_stage_status_list::~ListPipelineRunsPage_stage_status_list() = default;

void ListPipelineRunsPage_stage_status_list::validate()
{
}

web::json::value ListPipelineRunsPage_stage_status_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
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
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ListPipelineRunsPage_stage_status_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ListPipelineRunsPage_stage_status_list::getName() const
{
    return name_;
}

void ListPipelineRunsPage_stage_status_list::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListPipelineRunsPage_stage_status_list::nameIsSet() const
{
    return nameIsSet_;
}

void ListPipelineRunsPage_stage_status_list::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListPipelineRunsPage_stage_status_list::getSequence() const
{
    return sequence_;
}

void ListPipelineRunsPage_stage_status_list::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ListPipelineRunsPage_stage_status_list::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ListPipelineRunsPage_stage_status_list::unsetsequence()
{
    sequenceIsSet_ = false;
}

std::string ListPipelineRunsPage_stage_status_list::getStatus() const
{
    return status_;
}

void ListPipelineRunsPage_stage_status_list::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPipelineRunsPage_stage_status_list::statusIsSet() const
{
    return statusIsSet_;
}

void ListPipelineRunsPage_stage_status_list::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListPipelineRunsPage_stage_status_list::getStartTime() const
{
    return startTime_;
}

void ListPipelineRunsPage_stage_status_list::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListPipelineRunsPage_stage_status_list::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListPipelineRunsPage_stage_status_list::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListPipelineRunsPage_stage_status_list::getEndTime() const
{
    return endTime_;
}

void ListPipelineRunsPage_stage_status_list::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListPipelineRunsPage_stage_status_list::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListPipelineRunsPage_stage_status_list::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListPipelineRunsPage_stage_status_list::getId() const
{
    return id_;
}

void ListPipelineRunsPage_stage_status_list::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListPipelineRunsPage_stage_status_list::idIsSet() const
{
    return idIsSet_;
}

void ListPipelineRunsPage_stage_status_list::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


