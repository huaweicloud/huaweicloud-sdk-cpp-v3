

#include "huaweicloud/cloudtest/v1/model/UploadFileRes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UploadFileRes::UploadFileRes()
{
    awInsId_ = "";
    awInsIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    createTimeStamp_ = 0L;
    createTimeStampIsSet_ = false;
    createTimeString_ = "";
    createTimeStringIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    currentSize_ = 0L;
    currentSizeIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    originName_ = "";
    originNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    updateTimeStamp_ = 0L;
    updateTimeStampIsSet_ = false;
    updateTimeString_ = "";
    updateTimeStringIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
}

UploadFileRes::~UploadFileRes() = default;

void UploadFileRes::validate()
{
}

web::json::value UploadFileRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(awInsIdIsSet_) {
        val[utility::conversions::to_string_t("awInsId")] = ModelBase::toJson(awInsId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createTimeStampIsSet_) {
        val[utility::conversions::to_string_t("create_time_stamp")] = ModelBase::toJson(createTimeStamp_);
    }
    if(createTimeStringIsSet_) {
        val[utility::conversions::to_string_t("create_time_string")] = ModelBase::toJson(createTimeString_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(currentSizeIsSet_) {
        val[utility::conversions::to_string_t("current_size")] = ModelBase::toJson(currentSize_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("filePath")] = ModelBase::toJson(filePath_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(originNameIsSet_) {
        val[utility::conversions::to_string_t("originName")] = ModelBase::toJson(originName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimeStampIsSet_) {
        val[utility::conversions::to_string_t("update_time_stamp")] = ModelBase::toJson(updateTimeStamp_);
    }
    if(updateTimeStringIsSet_) {
        val[utility::conversions::to_string_t("update_time_string")] = ModelBase::toJson(updateTimeString_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("update_user")] = ModelBase::toJson(updateUser_);
    }

    return val;
}
bool UploadFileRes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("awInsId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("awInsId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwInsId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filePath"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filePath"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("originName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("originName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUser(refVal);
        }
    }
    return ok;
}


std::string UploadFileRes::getAwInsId() const
{
    return awInsId_;
}

void UploadFileRes::setAwInsId(const std::string& value)
{
    awInsId_ = value;
    awInsIdIsSet_ = true;
}

bool UploadFileRes::awInsIdIsSet() const
{
    return awInsIdIsSet_;
}

void UploadFileRes::unsetawInsId()
{
    awInsIdIsSet_ = false;
}

std::string UploadFileRes::getCreateTime() const
{
    return createTime_;
}

void UploadFileRes::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UploadFileRes::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UploadFileRes::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t UploadFileRes::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void UploadFileRes::setCreateTimeStamp(int64_t value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool UploadFileRes::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void UploadFileRes::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

std::string UploadFileRes::getCreateTimeString() const
{
    return createTimeString_;
}

void UploadFileRes::setCreateTimeString(const std::string& value)
{
    createTimeString_ = value;
    createTimeStringIsSet_ = true;
}

bool UploadFileRes::createTimeStringIsSet() const
{
    return createTimeStringIsSet_;
}

void UploadFileRes::unsetcreateTimeString()
{
    createTimeStringIsSet_ = false;
}

std::string UploadFileRes::getCreateUser() const
{
    return createUser_;
}

void UploadFileRes::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool UploadFileRes::createUserIsSet() const
{
    return createUserIsSet_;
}

void UploadFileRes::unsetcreateUser()
{
    createUserIsSet_ = false;
}

int64_t UploadFileRes::getCurrentSize() const
{
    return currentSize_;
}

void UploadFileRes::setCurrentSize(int64_t value)
{
    currentSize_ = value;
    currentSizeIsSet_ = true;
}

bool UploadFileRes::currentSizeIsSet() const
{
    return currentSizeIsSet_;
}

void UploadFileRes::unsetcurrentSize()
{
    currentSizeIsSet_ = false;
}

std::string UploadFileRes::getFilePath() const
{
    return filePath_;
}

void UploadFileRes::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool UploadFileRes::filePathIsSet() const
{
    return filePathIsSet_;
}

void UploadFileRes::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string UploadFileRes::getId() const
{
    return id_;
}

void UploadFileRes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UploadFileRes::idIsSet() const
{
    return idIsSet_;
}

void UploadFileRes::unsetid()
{
    idIsSet_ = false;
}

std::string UploadFileRes::getName() const
{
    return name_;
}

void UploadFileRes::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UploadFileRes::nameIsSet() const
{
    return nameIsSet_;
}

void UploadFileRes::unsetname()
{
    nameIsSet_ = false;
}

std::string UploadFileRes::getOriginName() const
{
    return originName_;
}

void UploadFileRes::setOriginName(const std::string& value)
{
    originName_ = value;
    originNameIsSet_ = true;
}

bool UploadFileRes::originNameIsSet() const
{
    return originNameIsSet_;
}

void UploadFileRes::unsetoriginName()
{
    originNameIsSet_ = false;
}

std::string UploadFileRes::getProjectId() const
{
    return projectId_;
}

void UploadFileRes::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UploadFileRes::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UploadFileRes::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UploadFileRes::getRegion() const
{
    return region_;
}

void UploadFileRes::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool UploadFileRes::regionIsSet() const
{
    return regionIsSet_;
}

void UploadFileRes::unsetregion()
{
    regionIsSet_ = false;
}

std::string UploadFileRes::getTestcaseId() const
{
    return testcaseId_;
}

void UploadFileRes::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool UploadFileRes::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void UploadFileRes::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string UploadFileRes::getUpdateTime() const
{
    return updateTime_;
}

void UploadFileRes::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UploadFileRes::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UploadFileRes::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t UploadFileRes::getUpdateTimeStamp() const
{
    return updateTimeStamp_;
}

void UploadFileRes::setUpdateTimeStamp(int64_t value)
{
    updateTimeStamp_ = value;
    updateTimeStampIsSet_ = true;
}

bool UploadFileRes::updateTimeStampIsSet() const
{
    return updateTimeStampIsSet_;
}

void UploadFileRes::unsetupdateTimeStamp()
{
    updateTimeStampIsSet_ = false;
}

std::string UploadFileRes::getUpdateTimeString() const
{
    return updateTimeString_;
}

void UploadFileRes::setUpdateTimeString(const std::string& value)
{
    updateTimeString_ = value;
    updateTimeStringIsSet_ = true;
}

bool UploadFileRes::updateTimeStringIsSet() const
{
    return updateTimeStringIsSet_;
}

void UploadFileRes::unsetupdateTimeString()
{
    updateTimeStringIsSet_ = false;
}

std::string UploadFileRes::getUpdateUser() const
{
    return updateUser_;
}

void UploadFileRes::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool UploadFileRes::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void UploadFileRes::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

}
}
}
}
}


