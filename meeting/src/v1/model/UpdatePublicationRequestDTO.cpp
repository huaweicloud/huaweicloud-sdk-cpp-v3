

#include "huaweicloud/meeting/v1/model/UpdatePublicationRequestDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdatePublicationRequestDTO::UpdatePublicationRequestDTO()
{
    publishName_ = "";
    publishNameIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    deptListIsSet_ = false;
    deviceListIsSet_ = false;
    programListIsSet_ = false;
}

UpdatePublicationRequestDTO::~UpdatePublicationRequestDTO() = default;

void UpdatePublicationRequestDTO::validate()
{
}

web::json::value UpdatePublicationRequestDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishNameIsSet_) {
        val[utility::conversions::to_string_t("publishName")] = ModelBase::toJson(publishName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(deptListIsSet_) {
        val[utility::conversions::to_string_t("deptList")] = ModelBase::toJson(deptList_);
    }
    if(deviceListIsSet_) {
        val[utility::conversions::to_string_t("deviceList")] = ModelBase::toJson(deviceList_);
    }
    if(programListIsSet_) {
        val[utility::conversions::to_string_t("programList")] = ModelBase::toJson(programList_);
    }

    return val;
}
bool UpdatePublicationRequestDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publishName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publishName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deptList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deviceList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deviceList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("programList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("programList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgramList(refVal);
        }
    }
    return ok;
}


std::string UpdatePublicationRequestDTO::getPublishName() const
{
    return publishName_;
}

void UpdatePublicationRequestDTO::setPublishName(const std::string& value)
{
    publishName_ = value;
    publishNameIsSet_ = true;
}

bool UpdatePublicationRequestDTO::publishNameIsSet() const
{
    return publishNameIsSet_;
}

void UpdatePublicationRequestDTO::unsetpublishName()
{
    publishNameIsSet_ = false;
}

int64_t UpdatePublicationRequestDTO::getStartTime() const
{
    return startTime_;
}

void UpdatePublicationRequestDTO::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool UpdatePublicationRequestDTO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void UpdatePublicationRequestDTO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t UpdatePublicationRequestDTO::getEndTime() const
{
    return endTime_;
}

void UpdatePublicationRequestDTO::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UpdatePublicationRequestDTO::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UpdatePublicationRequestDTO::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& UpdatePublicationRequestDTO::getDeptList()
{
    return deptList_;
}

void UpdatePublicationRequestDTO::setDeptList(const std::vector<std::string>& value)
{
    deptList_ = value;
    deptListIsSet_ = true;
}

bool UpdatePublicationRequestDTO::deptListIsSet() const
{
    return deptListIsSet_;
}

void UpdatePublicationRequestDTO::unsetdeptList()
{
    deptListIsSet_ = false;
}

std::vector<std::string>& UpdatePublicationRequestDTO::getDeviceList()
{
    return deviceList_;
}

void UpdatePublicationRequestDTO::setDeviceList(const std::vector<std::string>& value)
{
    deviceList_ = value;
    deviceListIsSet_ = true;
}

bool UpdatePublicationRequestDTO::deviceListIsSet() const
{
    return deviceListIsSet_;
}

void UpdatePublicationRequestDTO::unsetdeviceList()
{
    deviceListIsSet_ = false;
}

std::vector<std::string>& UpdatePublicationRequestDTO::getProgramList()
{
    return programList_;
}

void UpdatePublicationRequestDTO::setProgramList(const std::vector<std::string>& value)
{
    programList_ = value;
    programListIsSet_ = true;
}

bool UpdatePublicationRequestDTO::programListIsSet() const
{
    return programListIsSet_;
}

void UpdatePublicationRequestDTO::unsetprogramList()
{
    programListIsSet_ = false;
}

}
}
}
}
}


