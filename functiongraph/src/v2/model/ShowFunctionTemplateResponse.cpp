

#include "huaweicloud/functiongraph/v2/model/ShowFunctionTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionTemplateResponse::ShowFunctionTemplateResponse()
{
    id_ = "";
    idIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    handler_ = "";
    handlerIsSet_ = false;
    codeType_ = "";
    codeTypeIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
    memorySize_ = 0;
    memorySizeIsSet_ = false;
    triggerMetadataListIsSet_ = false;
    tempDetailIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    encryptedUserData_ = "";
    encryptedUserDataIsSet_ = false;
    dependenciesIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
}

ShowFunctionTemplateResponse::~ShowFunctionTemplateResponse() = default;

void ShowFunctionTemplateResponse::validate()
{
}

web::json::value ShowFunctionTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(handlerIsSet_) {
        val[utility::conversions::to_string_t("handler")] = ModelBase::toJson(handler_);
    }
    if(codeTypeIsSet_) {
        val[utility::conversions::to_string_t("code_type")] = ModelBase::toJson(codeType_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }
    if(memorySizeIsSet_) {
        val[utility::conversions::to_string_t("memory_size")] = ModelBase::toJson(memorySize_);
    }
    if(triggerMetadataListIsSet_) {
        val[utility::conversions::to_string_t("trigger_metadata_list")] = ModelBase::toJson(triggerMetadataList_);
    }
    if(tempDetailIsSet_) {
        val[utility::conversions::to_string_t("temp_detail")] = ModelBase::toJson(tempDetail_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(encryptedUserDataIsSet_) {
        val[utility::conversions::to_string_t("encrypted_user_data")] = ModelBase::toJson(encryptedUserData_);
    }
    if(dependenciesIsSet_) {
        val[utility::conversions::to_string_t("dependencies")] = ModelBase::toJson(dependencies_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }

    return val;
}
bool ShowFunctionTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("handler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("handler"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHandler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemorySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_metadata_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_metadata_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TriggerMetadataList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerMetadataList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("temp_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("temp_detail"));
        if(!fieldValue.is_null())
        {
            TempDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTempDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encrypted_user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypted_user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptedUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dependencies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dependencies"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependencies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    return ok;
}


std::string ShowFunctionTemplateResponse::getId() const
{
    return id_;
}

void ShowFunctionTemplateResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowFunctionTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowFunctionTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowFunctionTemplateResponse::getType() const
{
    return type_;
}

void ShowFunctionTemplateResponse::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowFunctionTemplateResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowFunctionTemplateResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getTitle() const
{
    return title_;
}

void ShowFunctionTemplateResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ShowFunctionTemplateResponse::titleIsSet() const
{
    return titleIsSet_;
}

void ShowFunctionTemplateResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void ShowFunctionTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ShowFunctionTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ShowFunctionTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getDescription() const
{
    return description_;
}

void ShowFunctionTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowFunctionTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowFunctionTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getRuntime() const
{
    return runtime_;
}

void ShowFunctionTemplateResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ShowFunctionTemplateResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ShowFunctionTemplateResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getHandler() const
{
    return handler_;
}

void ShowFunctionTemplateResponse::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool ShowFunctionTemplateResponse::handlerIsSet() const
{
    return handlerIsSet_;
}

void ShowFunctionTemplateResponse::unsethandler()
{
    handlerIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getCodeType() const
{
    return codeType_;
}

void ShowFunctionTemplateResponse::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool ShowFunctionTemplateResponse::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void ShowFunctionTemplateResponse::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getCode() const
{
    return code_;
}

void ShowFunctionTemplateResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowFunctionTemplateResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowFunctionTemplateResponse::unsetcode()
{
    codeIsSet_ = false;
}

int32_t ShowFunctionTemplateResponse::getTimeout() const
{
    return timeout_;
}

void ShowFunctionTemplateResponse::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool ShowFunctionTemplateResponse::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void ShowFunctionTemplateResponse::unsettimeout()
{
    timeoutIsSet_ = false;
}

int32_t ShowFunctionTemplateResponse::getMemorySize() const
{
    return memorySize_;
}

void ShowFunctionTemplateResponse::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool ShowFunctionTemplateResponse::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void ShowFunctionTemplateResponse::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

std::vector<TriggerMetadataList>& ShowFunctionTemplateResponse::getTriggerMetadataList()
{
    return triggerMetadataList_;
}

void ShowFunctionTemplateResponse::setTriggerMetadataList(const std::vector<TriggerMetadataList>& value)
{
    triggerMetadataList_ = value;
    triggerMetadataListIsSet_ = true;
}

bool ShowFunctionTemplateResponse::triggerMetadataListIsSet() const
{
    return triggerMetadataListIsSet_;
}

void ShowFunctionTemplateResponse::unsettriggerMetadataList()
{
    triggerMetadataListIsSet_ = false;
}

TempDetail ShowFunctionTemplateResponse::getTempDetail() const
{
    return tempDetail_;
}

void ShowFunctionTemplateResponse::setTempDetail(const TempDetail& value)
{
    tempDetail_ = value;
    tempDetailIsSet_ = true;
}

bool ShowFunctionTemplateResponse::tempDetailIsSet() const
{
    return tempDetailIsSet_;
}

void ShowFunctionTemplateResponse::unsettempDetail()
{
    tempDetailIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getUserData() const
{
    return userData_;
}

void ShowFunctionTemplateResponse::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ShowFunctionTemplateResponse::userDataIsSet() const
{
    return userDataIsSet_;
}

void ShowFunctionTemplateResponse::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getEncryptedUserData() const
{
    return encryptedUserData_;
}

void ShowFunctionTemplateResponse::setEncryptedUserData(const std::string& value)
{
    encryptedUserData_ = value;
    encryptedUserDataIsSet_ = true;
}

bool ShowFunctionTemplateResponse::encryptedUserDataIsSet() const
{
    return encryptedUserDataIsSet_;
}

void ShowFunctionTemplateResponse::unsetencryptedUserData()
{
    encryptedUserDataIsSet_ = false;
}

std::vector<std::string>& ShowFunctionTemplateResponse::getDependencies()
{
    return dependencies_;
}

void ShowFunctionTemplateResponse::setDependencies(const std::vector<std::string>& value)
{
    dependencies_ = value;
    dependenciesIsSet_ = true;
}

bool ShowFunctionTemplateResponse::dependenciesIsSet() const
{
    return dependenciesIsSet_;
}

void ShowFunctionTemplateResponse::unsetdependencies()
{
    dependenciesIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getScene() const
{
    return scene_;
}

void ShowFunctionTemplateResponse::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool ShowFunctionTemplateResponse::sceneIsSet() const
{
    return sceneIsSet_;
}

void ShowFunctionTemplateResponse::unsetscene()
{
    sceneIsSet_ = false;
}

std::string ShowFunctionTemplateResponse::getService() const
{
    return service_;
}

void ShowFunctionTemplateResponse::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool ShowFunctionTemplateResponse::serviceIsSet() const
{
    return serviceIsSet_;
}

void ShowFunctionTemplateResponse::unsetservice()
{
    serviceIsSet_ = false;
}

}
}
}
}
}


