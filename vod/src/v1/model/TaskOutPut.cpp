

#include "huaweicloud/vod/v1/model/TaskOutPut.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TaskOutPut::TaskOutPut()
{
    obsInfoIsSet_ = false;
    metaDataIsSet_ = false;
    fileUrl_ = "";
    fileUrlIsSet_ = false;
}

TaskOutPut::~TaskOutPut() = default;

void TaskOutPut::validate()
{
}

web::json::value TaskOutPut::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsInfoIsSet_) {
        val[utility::conversions::to_string_t("obs_info")] = ModelBase::toJson(obsInfo_);
    }
    if(metaDataIsSet_) {
        val[utility::conversions::to_string_t("meta_data")] = ModelBase::toJson(metaData_);
    }
    if(fileUrlIsSet_) {
        val[utility::conversions::to_string_t("file_url")] = ModelBase::toJson(fileUrl_);
    }

    return val;
}
bool TaskOutPut::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_info"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("meta_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta_data"));
        if(!fieldValue.is_null())
        {
            ObjectMetaData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetaData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileUrl(refVal);
        }
    }
    return ok;
}


ObsInfo TaskOutPut::getObsInfo() const
{
    return obsInfo_;
}

void TaskOutPut::setObsInfo(const ObsInfo& value)
{
    obsInfo_ = value;
    obsInfoIsSet_ = true;
}

bool TaskOutPut::obsInfoIsSet() const
{
    return obsInfoIsSet_;
}

void TaskOutPut::unsetobsInfo()
{
    obsInfoIsSet_ = false;
}

ObjectMetaData TaskOutPut::getMetaData() const
{
    return metaData_;
}

void TaskOutPut::setMetaData(const ObjectMetaData& value)
{
    metaData_ = value;
    metaDataIsSet_ = true;
}

bool TaskOutPut::metaDataIsSet() const
{
    return metaDataIsSet_;
}

void TaskOutPut::unsetmetaData()
{
    metaDataIsSet_ = false;
}

std::string TaskOutPut::getFileUrl() const
{
    return fileUrl_;
}

void TaskOutPut::setFileUrl(const std::string& value)
{
    fileUrl_ = value;
    fileUrlIsSet_ = true;
}

bool TaskOutPut::fileUrlIsSet() const
{
    return fileUrlIsSet_;
}

void TaskOutPut::unsetfileUrl()
{
    fileUrlIsSet_ = false;
}

}
}
}
}
}


