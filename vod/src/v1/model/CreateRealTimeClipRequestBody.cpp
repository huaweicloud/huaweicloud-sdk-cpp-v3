

#include "huaweicloud/vod/v1/model/CreateRealTimeClipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateRealTimeClipRequestBody::CreateRealTimeClipRequestBody()
{
    timeshiftDomain_ = "";
    timeshiftDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    transTemplateName_ = "";
    transTemplateNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    isPersistence_ = 0;
    isPersistenceIsSet_ = false;
    outputBucket_ = "";
    outputBucketIsSet_ = false;
    outputObject_ = "";
    outputObjectIsSet_ = false;
    mediaProcessTaskIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    sessionContext_ = "";
    sessionContextIsSet_ = false;
}

CreateRealTimeClipRequestBody::~CreateRealTimeClipRequestBody() = default;

void CreateRealTimeClipRequestBody::validate()
{
}

web::json::value CreateRealTimeClipRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeshiftDomainIsSet_) {
        val[utility::conversions::to_string_t("timeshift_domain")] = ModelBase::toJson(timeshiftDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(transTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("trans_template_name")] = ModelBase::toJson(transTemplateName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(isPersistenceIsSet_) {
        val[utility::conversions::to_string_t("is_persistence")] = ModelBase::toJson(isPersistence_);
    }
    if(outputBucketIsSet_) {
        val[utility::conversions::to_string_t("output_bucket")] = ModelBase::toJson(outputBucket_);
    }
    if(outputObjectIsSet_) {
        val[utility::conversions::to_string_t("output_object")] = ModelBase::toJson(outputObject_);
    }
    if(mediaProcessTaskIsSet_) {
        val[utility::conversions::to_string_t("media_process_task")] = ModelBase::toJson(mediaProcessTask_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(sessionContextIsSet_) {
        val[utility::conversions::to_string_t("session_context")] = ModelBase::toJson(sessionContext_);
    }

    return val;
}
bool CreateRealTimeClipRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("timeshift_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeshift_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeshiftDomain(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("trans_template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_persistence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_persistence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPersistence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("media_process_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("media_process_task"));
        if(!fieldValue.is_null())
        {
            AdditionalObjectProcessReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaProcessTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_context"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionContext(refVal);
        }
    }
    return ok;
}


std::string CreateRealTimeClipRequestBody::getTimeshiftDomain() const
{
    return timeshiftDomain_;
}

void CreateRealTimeClipRequestBody::setTimeshiftDomain(const std::string& value)
{
    timeshiftDomain_ = value;
    timeshiftDomainIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::timeshiftDomainIsSet() const
{
    return timeshiftDomainIsSet_;
}

void CreateRealTimeClipRequestBody::unsettimeshiftDomain()
{
    timeshiftDomainIsSet_ = false;
}

std::string CreateRealTimeClipRequestBody::getApp() const
{
    return app_;
}

void CreateRealTimeClipRequestBody::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::appIsSet() const
{
    return appIsSet_;
}

void CreateRealTimeClipRequestBody::unsetapp()
{
    appIsSet_ = false;
}

std::string CreateRealTimeClipRequestBody::getStream() const
{
    return stream_;
}

void CreateRealTimeClipRequestBody::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::streamIsSet() const
{
    return streamIsSet_;
}

void CreateRealTimeClipRequestBody::unsetstream()
{
    streamIsSet_ = false;
}

std::string CreateRealTimeClipRequestBody::getTransTemplateName() const
{
    return transTemplateName_;
}

void CreateRealTimeClipRequestBody::setTransTemplateName(const std::string& value)
{
    transTemplateName_ = value;
    transTemplateNameIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::transTemplateNameIsSet() const
{
    return transTemplateNameIsSet_;
}

void CreateRealTimeClipRequestBody::unsettransTemplateName()
{
    transTemplateNameIsSet_ = false;
}

std::string CreateRealTimeClipRequestBody::getStartTime() const
{
    return startTime_;
}

void CreateRealTimeClipRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateRealTimeClipRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CreateRealTimeClipRequestBody::getEndTime() const
{
    return endTime_;
}

void CreateRealTimeClipRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateRealTimeClipRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t CreateRealTimeClipRequestBody::getIsPersistence() const
{
    return isPersistence_;
}

void CreateRealTimeClipRequestBody::setIsPersistence(int32_t value)
{
    isPersistence_ = value;
    isPersistenceIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::isPersistenceIsSet() const
{
    return isPersistenceIsSet_;
}

void CreateRealTimeClipRequestBody::unsetisPersistence()
{
    isPersistenceIsSet_ = false;
}

std::string CreateRealTimeClipRequestBody::getOutputBucket() const
{
    return outputBucket_;
}

void CreateRealTimeClipRequestBody::setOutputBucket(const std::string& value)
{
    outputBucket_ = value;
    outputBucketIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::outputBucketIsSet() const
{
    return outputBucketIsSet_;
}

void CreateRealTimeClipRequestBody::unsetoutputBucket()
{
    outputBucketIsSet_ = false;
}

std::string CreateRealTimeClipRequestBody::getOutputObject() const
{
    return outputObject_;
}

void CreateRealTimeClipRequestBody::setOutputObject(const std::string& value)
{
    outputObject_ = value;
    outputObjectIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::outputObjectIsSet() const
{
    return outputObjectIsSet_;
}

void CreateRealTimeClipRequestBody::unsetoutputObject()
{
    outputObjectIsSet_ = false;
}

AdditionalObjectProcessReq CreateRealTimeClipRequestBody::getMediaProcessTask() const
{
    return mediaProcessTask_;
}

void CreateRealTimeClipRequestBody::setMediaProcessTask(const AdditionalObjectProcessReq& value)
{
    mediaProcessTask_ = value;
    mediaProcessTaskIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::mediaProcessTaskIsSet() const
{
    return mediaProcessTaskIsSet_;
}

void CreateRealTimeClipRequestBody::unsetmediaProcessTask()
{
    mediaProcessTaskIsSet_ = false;
}

std::string CreateRealTimeClipRequestBody::getCallbackUrl() const
{
    return callbackUrl_;
}

void CreateRealTimeClipRequestBody::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void CreateRealTimeClipRequestBody::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string CreateRealTimeClipRequestBody::getSessionContext() const
{
    return sessionContext_;
}

void CreateRealTimeClipRequestBody::setSessionContext(const std::string& value)
{
    sessionContext_ = value;
    sessionContextIsSet_ = true;
}

bool CreateRealTimeClipRequestBody::sessionContextIsSet() const
{
    return sessionContextIsSet_;
}

void CreateRealTimeClipRequestBody::unsetsessionContext()
{
    sessionContextIsSet_ = false;
}

}
}
}
}
}


