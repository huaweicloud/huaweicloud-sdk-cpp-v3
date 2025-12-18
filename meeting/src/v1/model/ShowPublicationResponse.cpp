

#include "huaweicloud/meeting/v1/model/ShowPublicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowPublicationResponse::ShowPublicationResponse()
{
    id_ = "";
    idIsSet_ = false;
    lastUpdatedBy_ = "";
    lastUpdatedByIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    publishName_ = "";
    publishNameIsSet_ = false;
    publishScope_ = "";
    publishScopeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    publishStatus_ = "";
    publishStatusIsSet_ = false;
    programListIsSet_ = false;
    deptListIsSet_ = false;
    deviceListIsSet_ = false;
}

ShowPublicationResponse::~ShowPublicationResponse() = default;

void ShowPublicationResponse::validate()
{
}

web::json::value ShowPublicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(lastUpdatedByIsSet_) {
        val[utility::conversions::to_string_t("lastUpdatedBy")] = ModelBase::toJson(lastUpdatedBy_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("updateTime")] = ModelBase::toJson(updateTime_);
    }
    if(publishNameIsSet_) {
        val[utility::conversions::to_string_t("publishName")] = ModelBase::toJson(publishName_);
    }
    if(publishScopeIsSet_) {
        val[utility::conversions::to_string_t("publishScope")] = ModelBase::toJson(publishScope_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(publishStatusIsSet_) {
        val[utility::conversions::to_string_t("publishStatus")] = ModelBase::toJson(publishStatus_);
    }
    if(programListIsSet_) {
        val[utility::conversions::to_string_t("programList")] = ModelBase::toJson(programList_);
    }
    if(deptListIsSet_) {
        val[utility::conversions::to_string_t("deptList")] = ModelBase::toJson(deptList_);
    }
    if(deviceListIsSet_) {
        val[utility::conversions::to_string_t("deviceList")] = ModelBase::toJson(deviceList_);
    }

    return val;
}
bool ShowPublicationResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("lastUpdatedBy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastUpdatedBy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publishName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publishScope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishScope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publishStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("programList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("programList"));
        if(!fieldValue.is_null())
        {
            std::vector<ProgramResponseBase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgramList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptList"));
        if(!fieldValue.is_null())
        {
            std::vector<PublishDeptResponseDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deviceList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deviceList"));
        if(!fieldValue.is_null())
        {
            std::vector<PublishDeviceResponseDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceList(refVal);
        }
    }
    return ok;
}


std::string ShowPublicationResponse::getId() const
{
    return id_;
}

void ShowPublicationResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowPublicationResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowPublicationResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowPublicationResponse::getLastUpdatedBy() const
{
    return lastUpdatedBy_;
}

void ShowPublicationResponse::setLastUpdatedBy(const std::string& value)
{
    lastUpdatedBy_ = value;
    lastUpdatedByIsSet_ = true;
}

bool ShowPublicationResponse::lastUpdatedByIsSet() const
{
    return lastUpdatedByIsSet_;
}

void ShowPublicationResponse::unsetlastUpdatedBy()
{
    lastUpdatedByIsSet_ = false;
}

int64_t ShowPublicationResponse::getCreateTime() const
{
    return createTime_;
}

void ShowPublicationResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowPublicationResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowPublicationResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ShowPublicationResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowPublicationResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowPublicationResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowPublicationResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowPublicationResponse::getPublishName() const
{
    return publishName_;
}

void ShowPublicationResponse::setPublishName(const std::string& value)
{
    publishName_ = value;
    publishNameIsSet_ = true;
}

bool ShowPublicationResponse::publishNameIsSet() const
{
    return publishNameIsSet_;
}

void ShowPublicationResponse::unsetpublishName()
{
    publishNameIsSet_ = false;
}

std::string ShowPublicationResponse::getPublishScope() const
{
    return publishScope_;
}

void ShowPublicationResponse::setPublishScope(const std::string& value)
{
    publishScope_ = value;
    publishScopeIsSet_ = true;
}

bool ShowPublicationResponse::publishScopeIsSet() const
{
    return publishScopeIsSet_;
}

void ShowPublicationResponse::unsetpublishScope()
{
    publishScopeIsSet_ = false;
}

int64_t ShowPublicationResponse::getStartTime() const
{
    return startTime_;
}

void ShowPublicationResponse::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowPublicationResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowPublicationResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowPublicationResponse::getEndTime() const
{
    return endTime_;
}

void ShowPublicationResponse::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowPublicationResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowPublicationResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowPublicationResponse::getPublishStatus() const
{
    return publishStatus_;
}

void ShowPublicationResponse::setPublishStatus(const std::string& value)
{
    publishStatus_ = value;
    publishStatusIsSet_ = true;
}

bool ShowPublicationResponse::publishStatusIsSet() const
{
    return publishStatusIsSet_;
}

void ShowPublicationResponse::unsetpublishStatus()
{
    publishStatusIsSet_ = false;
}

std::vector<ProgramResponseBase>& ShowPublicationResponse::getProgramList()
{
    return programList_;
}

void ShowPublicationResponse::setProgramList(const std::vector<ProgramResponseBase>& value)
{
    programList_ = value;
    programListIsSet_ = true;
}

bool ShowPublicationResponse::programListIsSet() const
{
    return programListIsSet_;
}

void ShowPublicationResponse::unsetprogramList()
{
    programListIsSet_ = false;
}

std::vector<PublishDeptResponseDTO>& ShowPublicationResponse::getDeptList()
{
    return deptList_;
}

void ShowPublicationResponse::setDeptList(const std::vector<PublishDeptResponseDTO>& value)
{
    deptList_ = value;
    deptListIsSet_ = true;
}

bool ShowPublicationResponse::deptListIsSet() const
{
    return deptListIsSet_;
}

void ShowPublicationResponse::unsetdeptList()
{
    deptListIsSet_ = false;
}

std::vector<PublishDeviceResponseDTO>& ShowPublicationResponse::getDeviceList()
{
    return deviceList_;
}

void ShowPublicationResponse::setDeviceList(const std::vector<PublishDeviceResponseDTO>& value)
{
    deviceList_ = value;
    deviceListIsSet_ = true;
}

bool ShowPublicationResponse::deviceListIsSet() const
{
    return deviceListIsSet_;
}

void ShowPublicationResponse::unsetdeviceList()
{
    deviceListIsSet_ = false;
}

}
}
}
}
}


