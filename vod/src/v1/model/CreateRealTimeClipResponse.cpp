

#include "huaweicloud/vod/v1/model/CreateRealTimeClipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateRealTimeClipResponse::CreateRealTimeClipResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    startTime_ = 0;
    startTimeIsSet_ = false;
    endTime_ = 0;
    endTimeIsSet_ = false;
    fileUrl_ = "";
    fileUrlIsSet_ = false;
    outputIsSet_ = false;
    metaDataIsSet_ = false;
}

CreateRealTimeClipResponse::~CreateRealTimeClipResponse() = default;

void CreateRealTimeClipResponse::validate()
{
}

web::json::value CreateRealTimeClipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(fileUrlIsSet_) {
        val[utility::conversions::to_string_t("file_url")] = ModelBase::toJson(fileUrl_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(metaDataIsSet_) {
        val[utility::conversions::to_string_t("meta_data")] = ModelBase::toJson(metaData_);
    }

    return val;
}
bool CreateRealTimeClipResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
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
    return ok;
}


std::string CreateRealTimeClipResponse::getTaskId() const
{
    return taskId_;
}

void CreateRealTimeClipResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateRealTimeClipResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateRealTimeClipResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CreateRealTimeClipResponse::getPublishDomain() const
{
    return publishDomain_;
}

void CreateRealTimeClipResponse::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool CreateRealTimeClipResponse::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void CreateRealTimeClipResponse::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string CreateRealTimeClipResponse::getApp() const
{
    return app_;
}

void CreateRealTimeClipResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool CreateRealTimeClipResponse::appIsSet() const
{
    return appIsSet_;
}

void CreateRealTimeClipResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string CreateRealTimeClipResponse::getStream() const
{
    return stream_;
}

void CreateRealTimeClipResponse::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool CreateRealTimeClipResponse::streamIsSet() const
{
    return streamIsSet_;
}

void CreateRealTimeClipResponse::unsetstream()
{
    streamIsSet_ = false;
}

int32_t CreateRealTimeClipResponse::getStartTime() const
{
    return startTime_;
}

void CreateRealTimeClipResponse::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateRealTimeClipResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateRealTimeClipResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t CreateRealTimeClipResponse::getEndTime() const
{
    return endTime_;
}

void CreateRealTimeClipResponse::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateRealTimeClipResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateRealTimeClipResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CreateRealTimeClipResponse::getFileUrl() const
{
    return fileUrl_;
}

void CreateRealTimeClipResponse::setFileUrl(const std::string& value)
{
    fileUrl_ = value;
    fileUrlIsSet_ = true;
}

bool CreateRealTimeClipResponse::fileUrlIsSet() const
{
    return fileUrlIsSet_;
}

void CreateRealTimeClipResponse::unsetfileUrl()
{
    fileUrlIsSet_ = false;
}

ObsInfo CreateRealTimeClipResponse::getOutput() const
{
    return output_;
}

void CreateRealTimeClipResponse::setOutput(const ObsInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateRealTimeClipResponse::outputIsSet() const
{
    return outputIsSet_;
}

void CreateRealTimeClipResponse::unsetoutput()
{
    outputIsSet_ = false;
}

ObjectMetaData CreateRealTimeClipResponse::getMetaData() const
{
    return metaData_;
}

void CreateRealTimeClipResponse::setMetaData(const ObjectMetaData& value)
{
    metaData_ = value;
    metaDataIsSet_ = true;
}

bool CreateRealTimeClipResponse::metaDataIsSet() const
{
    return metaDataIsSet_;
}

void CreateRealTimeClipResponse::unsetmetaData()
{
    metaDataIsSet_ = false;
}

}
}
}
}
}


