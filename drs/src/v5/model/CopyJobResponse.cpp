

#include "huaweicloud/drs/v5/model/CopyJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CopyJobResponse::CopyJobResponse()
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

CopyJobResponse::~CopyJobResponse() = default;

void CopyJobResponse::validate()
{
}

web::json::value CopyJobResponse::toJson() const
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
bool CopyJobResponse::fromJson(const web::json::value& val)
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


std::string CopyJobResponse::getId() const
{
    return id_;
}

void CopyJobResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CopyJobResponse::idIsSet() const
{
    return idIsSet_;
}

void CopyJobResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CopyJobResponse::getName() const
{
    return name_;
}

void CopyJobResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CopyJobResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CopyJobResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CopyJobResponse::getStatus() const
{
    return status_;
}

void CopyJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CopyJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CopyJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CopyJobResponse::getCreateTime() const
{
    return createTime_;
}

void CopyJobResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CopyJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CopyJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CopyJobResponse::getIsCloneJob() const
{
    return isCloneJob_;
}

void CopyJobResponse::setIsCloneJob(const std::string& value)
{
    isCloneJob_ = value;
    isCloneJobIsSet_ = true;
}

bool CopyJobResponse::isCloneJobIsSet() const
{
    return isCloneJobIsSet_;
}

void CopyJobResponse::unsetisCloneJob()
{
    isCloneJobIsSet_ = false;
}

}
}
}
}
}


