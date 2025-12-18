

#include "huaweicloud/meeting/v1/model/CreatePublicationRequestDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreatePublicationRequestDTO::CreatePublicationRequestDTO()
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

CreatePublicationRequestDTO::~CreatePublicationRequestDTO() = default;

void CreatePublicationRequestDTO::validate()
{
}

web::json::value CreatePublicationRequestDTO::toJson() const
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
bool CreatePublicationRequestDTO::fromJson(const web::json::value& val)
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


std::string CreatePublicationRequestDTO::getPublishName() const
{
    return publishName_;
}

void CreatePublicationRequestDTO::setPublishName(const std::string& value)
{
    publishName_ = value;
    publishNameIsSet_ = true;
}

bool CreatePublicationRequestDTO::publishNameIsSet() const
{
    return publishNameIsSet_;
}

void CreatePublicationRequestDTO::unsetpublishName()
{
    publishNameIsSet_ = false;
}

int64_t CreatePublicationRequestDTO::getStartTime() const
{
    return startTime_;
}

void CreatePublicationRequestDTO::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreatePublicationRequestDTO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreatePublicationRequestDTO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t CreatePublicationRequestDTO::getEndTime() const
{
    return endTime_;
}

void CreatePublicationRequestDTO::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreatePublicationRequestDTO::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreatePublicationRequestDTO::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& CreatePublicationRequestDTO::getDeptList()
{
    return deptList_;
}

void CreatePublicationRequestDTO::setDeptList(const std::vector<std::string>& value)
{
    deptList_ = value;
    deptListIsSet_ = true;
}

bool CreatePublicationRequestDTO::deptListIsSet() const
{
    return deptListIsSet_;
}

void CreatePublicationRequestDTO::unsetdeptList()
{
    deptListIsSet_ = false;
}

std::vector<std::string>& CreatePublicationRequestDTO::getDeviceList()
{
    return deviceList_;
}

void CreatePublicationRequestDTO::setDeviceList(const std::vector<std::string>& value)
{
    deviceList_ = value;
    deviceListIsSet_ = true;
}

bool CreatePublicationRequestDTO::deviceListIsSet() const
{
    return deviceListIsSet_;
}

void CreatePublicationRequestDTO::unsetdeviceList()
{
    deviceListIsSet_ = false;
}

std::vector<std::string>& CreatePublicationRequestDTO::getProgramList()
{
    return programList_;
}

void CreatePublicationRequestDTO::setProgramList(const std::vector<std::string>& value)
{
    programList_ = value;
    programListIsSet_ = true;
}

bool CreatePublicationRequestDTO::programListIsSet() const
{
    return programListIsSet_;
}

void CreatePublicationRequestDTO::unsetprogramList()
{
    programListIsSet_ = false;
}

}
}
}
}
}


