

#include "huaweicloud/mpc/v1/model/MpeCallBackReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MpeCallBackReq::MpeCallBackReq()
{
    taskType_ = "";
    taskTypeIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    completeRatio_ = 0;
    completeRatioIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    metaDataIsSet_ = false;
}

MpeCallBackReq::~MpeCallBackReq() = default;

void MpeCallBackReq::validate()
{
}

web::json::value MpeCallBackReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(completeRatioIsSet_) {
        val[utility::conversions::to_string_t("complete_ratio")] = ModelBase::toJson(completeRatio_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(metaDataIsSet_) {
        val[utility::conversions::to_string_t("meta_data")] = ModelBase::toJson(metaData_);
    }

    return val;
}
bool MpeCallBackReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("complete_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("complete_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleteRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("meta_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta_data"));
        if(!fieldValue.is_null())
        {
            MpeMetaData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetaData(refVal);
        }
    }
    return ok;
}


std::string MpeCallBackReq::getTaskType() const
{
    return taskType_;
}

void MpeCallBackReq::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool MpeCallBackReq::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void MpeCallBackReq::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string MpeCallBackReq::getTaskId() const
{
    return taskId_;
}

void MpeCallBackReq::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool MpeCallBackReq::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void MpeCallBackReq::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string MpeCallBackReq::getStatus() const
{
    return status_;
}

void MpeCallBackReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MpeCallBackReq::statusIsSet() const
{
    return statusIsSet_;
}

void MpeCallBackReq::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t MpeCallBackReq::getCompleteRatio() const
{
    return completeRatio_;
}

void MpeCallBackReq::setCompleteRatio(int32_t value)
{
    completeRatio_ = value;
    completeRatioIsSet_ = true;
}

bool MpeCallBackReq::completeRatioIsSet() const
{
    return completeRatioIsSet_;
}

void MpeCallBackReq::unsetcompleteRatio()
{
    completeRatioIsSet_ = false;
}

std::string MpeCallBackReq::getDescription() const
{
    return description_;
}

void MpeCallBackReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MpeCallBackReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MpeCallBackReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

MpeMetaData MpeCallBackReq::getMetaData() const
{
    return metaData_;
}

void MpeCallBackReq::setMetaData(const MpeMetaData& value)
{
    metaData_ = value;
    metaDataIsSet_ = true;
}

bool MpeCallBackReq::metaDataIsSet() const
{
    return metaDataIsSet_;
}

void MpeCallBackReq::unsetmetaData()
{
    metaDataIsSet_ = false;
}

}
}
}
}
}


