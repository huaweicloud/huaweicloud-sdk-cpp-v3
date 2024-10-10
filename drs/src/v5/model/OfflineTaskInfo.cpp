

#include "huaweicloud/drs/v5/model/OfflineTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




OfflineTaskInfo::OfflineTaskInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    errorLog_ = "";
    errorLogIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

OfflineTaskInfo::~OfflineTaskInfo() = default;

void OfflineTaskInfo::validate()
{
}

web::json::value OfflineTaskInfo::toJson() const
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
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(errorLogIsSet_) {
        val[utility::conversions::to_string_t("error_log")] = ModelBase::toJson(errorLog_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool OfflineTaskInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorLog(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string OfflineTaskInfo::getId() const
{
    return id_;
}

void OfflineTaskInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OfflineTaskInfo::idIsSet() const
{
    return idIsSet_;
}

void OfflineTaskInfo::unsetid()
{
    idIsSet_ = false;
}

std::string OfflineTaskInfo::getName() const
{
    return name_;
}

void OfflineTaskInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OfflineTaskInfo::nameIsSet() const
{
    return nameIsSet_;
}

void OfflineTaskInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string OfflineTaskInfo::getStatus() const
{
    return status_;
}

void OfflineTaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool OfflineTaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void OfflineTaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string OfflineTaskInfo::getEngineType() const
{
    return engineType_;
}

void OfflineTaskInfo::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool OfflineTaskInfo::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void OfflineTaskInfo::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string OfflineTaskInfo::getErrorLog() const
{
    return errorLog_;
}

void OfflineTaskInfo::setErrorLog(const std::string& value)
{
    errorLog_ = value;
    errorLogIsSet_ = true;
}

bool OfflineTaskInfo::errorLogIsSet() const
{
    return errorLogIsSet_;
}

void OfflineTaskInfo::unseterrorLog()
{
    errorLogIsSet_ = false;
}

std::string OfflineTaskInfo::getDescription() const
{
    return description_;
}

void OfflineTaskInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OfflineTaskInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OfflineTaskInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OfflineTaskInfo::getCreateTime() const
{
    return createTime_;
}

void OfflineTaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool OfflineTaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void OfflineTaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string OfflineTaskInfo::getFinishTime() const
{
    return finishTime_;
}

void OfflineTaskInfo::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool OfflineTaskInfo::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void OfflineTaskInfo::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::string OfflineTaskInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void OfflineTaskInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool OfflineTaskInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void OfflineTaskInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


