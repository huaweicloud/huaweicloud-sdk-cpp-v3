

#include "huaweicloud/vod/v1/model/CreateEditTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateEditTaskRequestBody::CreateEditTaskRequestBody()
{
    inputsIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    editingSettingsIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    sessionContext_ = "";
    sessionContextIsSet_ = false;
    outputIsSet_ = false;
    mediaProcessTaskIsSet_ = false;
}

CreateEditTaskRequestBody::~CreateEditTaskRequestBody() = default;

void CreateEditTaskRequestBody::validate()
{
}

web::json::value CreateEditTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(editingSettingsIsSet_) {
        val[utility::conversions::to_string_t("editing_settings")] = ModelBase::toJson(editingSettings_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(sessionContextIsSet_) {
        val[utility::conversions::to_string_t("session_context")] = ModelBase::toJson(sessionContext_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(mediaProcessTaskIsSet_) {
        val[utility::conversions::to_string_t("media_process_task")] = ModelBase::toJson(mediaProcessTask_);
    }

    return val;
}
bool CreateEditTaskRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<EditMediaTaskInput> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editing_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editing_settings"));
        if(!fieldValue.is_null())
        {
            EditingSetting refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditingSettings(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
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
    return ok;
}


std::vector<EditMediaTaskInput>& CreateEditTaskRequestBody::getInputs()
{
    return inputs_;
}

void CreateEditTaskRequestBody::setInputs(const std::vector<EditMediaTaskInput>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool CreateEditTaskRequestBody::inputsIsSet() const
{
    return inputsIsSet_;
}

void CreateEditTaskRequestBody::unsetinputs()
{
    inputsIsSet_ = false;
}

std::string CreateEditTaskRequestBody::getFileName() const
{
    return fileName_;
}

void CreateEditTaskRequestBody::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool CreateEditTaskRequestBody::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void CreateEditTaskRequestBody::unsetfileName()
{
    fileNameIsSet_ = false;
}

EditingSetting CreateEditTaskRequestBody::getEditingSettings() const
{
    return editingSettings_;
}

void CreateEditTaskRequestBody::setEditingSettings(const EditingSetting& value)
{
    editingSettings_ = value;
    editingSettingsIsSet_ = true;
}

bool CreateEditTaskRequestBody::editingSettingsIsSet() const
{
    return editingSettingsIsSet_;
}

void CreateEditTaskRequestBody::unseteditingSettings()
{
    editingSettingsIsSet_ = false;
}

std::string CreateEditTaskRequestBody::getCallbackUrl() const
{
    return callbackUrl_;
}

void CreateEditTaskRequestBody::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool CreateEditTaskRequestBody::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void CreateEditTaskRequestBody::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string CreateEditTaskRequestBody::getSessionContext() const
{
    return sessionContext_;
}

void CreateEditTaskRequestBody::setSessionContext(const std::string& value)
{
    sessionContext_ = value;
    sessionContextIsSet_ = true;
}

bool CreateEditTaskRequestBody::sessionContextIsSet() const
{
    return sessionContextIsSet_;
}

void CreateEditTaskRequestBody::unsetsessionContext()
{
    sessionContextIsSet_ = false;
}

ObsInfo CreateEditTaskRequestBody::getOutput() const
{
    return output_;
}

void CreateEditTaskRequestBody::setOutput(const ObsInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateEditTaskRequestBody::outputIsSet() const
{
    return outputIsSet_;
}

void CreateEditTaskRequestBody::unsetoutput()
{
    outputIsSet_ = false;
}

AdditionalObjectProcessReq CreateEditTaskRequestBody::getMediaProcessTask() const
{
    return mediaProcessTask_;
}

void CreateEditTaskRequestBody::setMediaProcessTask(const AdditionalObjectProcessReq& value)
{
    mediaProcessTask_ = value;
    mediaProcessTaskIsSet_ = true;
}

bool CreateEditTaskRequestBody::mediaProcessTaskIsSet() const
{
    return mediaProcessTaskIsSet_;
}

void CreateEditTaskRequestBody::unsetmediaProcessTask()
{
    mediaProcessTaskIsSet_ = false;
}

}
}
}
}
}


