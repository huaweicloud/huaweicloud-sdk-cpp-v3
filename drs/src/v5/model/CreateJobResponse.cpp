

#include "huaweicloud/drs/v5/model/CreateJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CreateJobResponse::CreateJobResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    isCloneJob_ = "";
    isCloneJobIsSet_ = false;
}

CreateJobResponse::~CreateJobResponse() = default;

void CreateJobResponse::validate()
{
}

web::json::value CreateJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(isCloneJobIsSet_) {
        val[utility::conversions::to_string_t("is_clone_job")] = ModelBase::toJson(isCloneJob_);
    }

    return val;
}
bool CreateJobResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_clone_job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_clone_job"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCloneJob(refVal);
        }
    }
    return ok;
}


std::string CreateJobResponse::getId() const
{
    return id_;
}

void CreateJobResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateJobResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateJobResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateJobResponse::getName() const
{
    return name_;
}

void CreateJobResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateJobResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateJobResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateJobResponse::getStatus() const
{
    return status_;
}

void CreateJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateJobResponse::getCreateTime() const
{
    return createTime_;
}

void CreateJobResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateJobResponse::getIsCloneJob() const
{
    return isCloneJob_;
}

void CreateJobResponse::setIsCloneJob(const std::string& value)
{
    isCloneJob_ = value;
    isCloneJobIsSet_ = true;
}

bool CreateJobResponse::isCloneJobIsSet() const
{
    return isCloneJobIsSet_;
}

void CreateJobResponse::unsetisCloneJob()
{
    isCloneJobIsSet_ = false;
}

}
}
}
}
}


