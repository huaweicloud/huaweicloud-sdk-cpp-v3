

#include "huaweicloud/mpc/v1/model/EachEncryptRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




EachEncryptRsp::EachEncryptRsp()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    inputIsSet_ = false;
    outputIsSet_ = false;
    outputFileNameIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

EachEncryptRsp::~EachEncryptRsp() = default;

void EachEncryptRsp::validate()
{
}

web::json::value EachEncryptRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(outputFileNameIsSet_) {
        val[utility::conversions::to_string_t("output_file_name")] = ModelBase::toJson(outputFileName_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool EachEncryptRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_file_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
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
    return ok;
}


std::string EachEncryptRsp::getTaskId() const
{
    return taskId_;
}

void EachEncryptRsp::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool EachEncryptRsp::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void EachEncryptRsp::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string EachEncryptRsp::getStatus() const
{
    return status_;
}

void EachEncryptRsp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EachEncryptRsp::statusIsSet() const
{
    return statusIsSet_;
}

void EachEncryptRsp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string EachEncryptRsp::getCreateTime() const
{
    return createTime_;
}

void EachEncryptRsp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool EachEncryptRsp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void EachEncryptRsp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string EachEncryptRsp::getEndTime() const
{
    return endTime_;
}

void EachEncryptRsp::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool EachEncryptRsp::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void EachEncryptRsp::unsetendTime()
{
    endTimeIsSet_ = false;
}

ObsObjInfo EachEncryptRsp::getInput() const
{
    return input_;
}

void EachEncryptRsp::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool EachEncryptRsp::inputIsSet() const
{
    return inputIsSet_;
}

void EachEncryptRsp::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo EachEncryptRsp::getOutput() const
{
    return output_;
}

void EachEncryptRsp::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool EachEncryptRsp::outputIsSet() const
{
    return outputIsSet_;
}

void EachEncryptRsp::unsetoutput()
{
    outputIsSet_ = false;
}

std::vector<std::string>& EachEncryptRsp::getOutputFileName()
{
    return outputFileName_;
}

void EachEncryptRsp::setOutputFileName(const std::vector<std::string>& value)
{
    outputFileName_ = value;
    outputFileNameIsSet_ = true;
}

bool EachEncryptRsp::outputFileNameIsSet() const
{
    return outputFileNameIsSet_;
}

void EachEncryptRsp::unsetoutputFileName()
{
    outputFileNameIsSet_ = false;
}

std::string EachEncryptRsp::getUserData() const
{
    return userData_;
}

void EachEncryptRsp::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool EachEncryptRsp::userDataIsSet() const
{
    return userDataIsSet_;
}

void EachEncryptRsp::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string EachEncryptRsp::getDescription() const
{
    return description_;
}

void EachEncryptRsp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EachEncryptRsp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EachEncryptRsp::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


