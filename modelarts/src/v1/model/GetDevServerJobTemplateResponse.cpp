

#include "huaweicloud/modelarts/v1/model/GetDevServerJobTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetDevServerJobTemplateResponse::GetDevServerJobTemplateResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    cmd_ = "";
    cmdIsSet_ = false;
    swrPath_ = "";
    swrPathIsSet_ = false;
    resources_ = "";
    resourcesIsSet_ = false;
    volumes_ = "";
    volumesIsSet_ = false;
    volumesMount_ = "";
    volumesMountIsSet_ = false;
    flavorType_ = "";
    flavorTypeIsSet_ = false;
    timeout_ = "";
    timeoutIsSet_ = false;
    checkInterval_ = "";
    checkIntervalIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    paramsIsSet_ = false;
}

GetDevServerJobTemplateResponse::~GetDevServerJobTemplateResponse() = default;

void GetDevServerJobTemplateResponse::validate()
{
}

web::json::value GetDevServerJobTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(cmdIsSet_) {
        val[utility::conversions::to_string_t("cmd")] = ModelBase::toJson(cmd_);
    }
    if(swrPathIsSet_) {
        val[utility::conversions::to_string_t("swr_path")] = ModelBase::toJson(swrPath_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(volumesIsSet_) {
        val[utility::conversions::to_string_t("volumes")] = ModelBase::toJson(volumes_);
    }
    if(volumesMountIsSet_) {
        val[utility::conversions::to_string_t("volumes_mount")] = ModelBase::toJson(volumesMount_);
    }
    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }
    if(checkIntervalIsSet_) {
        val[utility::conversions::to_string_t("check_interval")] = ModelBase::toJson(checkInterval_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool GetDevServerJobTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swr_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swr_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwrPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes_mount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes_mount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumesMount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string GetDevServerJobTemplateResponse::getId() const
{
    return id_;
}

void GetDevServerJobTemplateResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void GetDevServerJobTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getName() const
{
    return name_;
}

void GetDevServerJobTemplateResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GetDevServerJobTemplateResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getDescription() const
{
    return description_;
}

void GetDevServerJobTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void GetDevServerJobTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getCmd() const
{
    return cmd_;
}

void GetDevServerJobTemplateResponse::setCmd(const std::string& value)
{
    cmd_ = value;
    cmdIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::cmdIsSet() const
{
    return cmdIsSet_;
}

void GetDevServerJobTemplateResponse::unsetcmd()
{
    cmdIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getSwrPath() const
{
    return swrPath_;
}

void GetDevServerJobTemplateResponse::setSwrPath(const std::string& value)
{
    swrPath_ = value;
    swrPathIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::swrPathIsSet() const
{
    return swrPathIsSet_;
}

void GetDevServerJobTemplateResponse::unsetswrPath()
{
    swrPathIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getResources() const
{
    return resources_;
}

void GetDevServerJobTemplateResponse::setResources(const std::string& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void GetDevServerJobTemplateResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getVolumes() const
{
    return volumes_;
}

void GetDevServerJobTemplateResponse::setVolumes(const std::string& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::volumesIsSet() const
{
    return volumesIsSet_;
}

void GetDevServerJobTemplateResponse::unsetvolumes()
{
    volumesIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getVolumesMount() const
{
    return volumesMount_;
}

void GetDevServerJobTemplateResponse::setVolumesMount(const std::string& value)
{
    volumesMount_ = value;
    volumesMountIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::volumesMountIsSet() const
{
    return volumesMountIsSet_;
}

void GetDevServerJobTemplateResponse::unsetvolumesMount()
{
    volumesMountIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getFlavorType() const
{
    return flavorType_;
}

void GetDevServerJobTemplateResponse::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void GetDevServerJobTemplateResponse::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getTimeout() const
{
    return timeout_;
}

void GetDevServerJobTemplateResponse::setTimeout(const std::string& value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void GetDevServerJobTemplateResponse::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getCheckInterval() const
{
    return checkInterval_;
}

void GetDevServerJobTemplateResponse::setCheckInterval(const std::string& value)
{
    checkInterval_ = value;
    checkIntervalIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::checkIntervalIsSet() const
{
    return checkIntervalIsSet_;
}

void GetDevServerJobTemplateResponse::unsetcheckInterval()
{
    checkIntervalIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getType() const
{
    return type_;
}

void GetDevServerJobTemplateResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::typeIsSet() const
{
    return typeIsSet_;
}

void GetDevServerJobTemplateResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string GetDevServerJobTemplateResponse::getStatus() const
{
    return status_;
}

void GetDevServerJobTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GetDevServerJobTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<TemplateParam>& GetDevServerJobTemplateResponse::getParams()
{
    return params_;
}

void GetDevServerJobTemplateResponse::setParams(const std::vector<TemplateParam>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool GetDevServerJobTemplateResponse::paramsIsSet() const
{
    return paramsIsSet_;
}

void GetDevServerJobTemplateResponse::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


