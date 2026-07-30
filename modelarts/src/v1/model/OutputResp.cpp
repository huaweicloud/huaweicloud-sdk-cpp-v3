

#include "huaweicloud/modelarts/v1/model/OutputResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




OutputResp::OutputResp()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    localDir_ = "";
    localDirIsSet_ = false;
    accessMethod_ = "";
    accessMethodIsSet_ = false;
    remoteIsSet_ = false;
}

OutputResp::~OutputResp() = default;

void OutputResp::validate()
{
}

web::json::value OutputResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(localDirIsSet_) {
        val[utility::conversions::to_string_t("local_dir")] = ModelBase::toJson(localDir_);
    }
    if(accessMethodIsSet_) {
        val[utility::conversions::to_string_t("access_method")] = ModelBase::toJson(accessMethod_);
    }
    if(remoteIsSet_) {
        val[utility::conversions::to_string_t("remote")] = ModelBase::toJson(remote_);
    }

    return val;
}
bool OutputResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("local_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote"));
        if(!fieldValue.is_null())
        {
            RemoteResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemote(refVal);
        }
    }
    return ok;
}


std::string OutputResp::getName() const
{
    return name_;
}

void OutputResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OutputResp::nameIsSet() const
{
    return nameIsSet_;
}

void OutputResp::unsetname()
{
    nameIsSet_ = false;
}

std::string OutputResp::getDescription() const
{
    return description_;
}

void OutputResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OutputResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OutputResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OutputResp::getLocalDir() const
{
    return localDir_;
}

void OutputResp::setLocalDir(const std::string& value)
{
    localDir_ = value;
    localDirIsSet_ = true;
}

bool OutputResp::localDirIsSet() const
{
    return localDirIsSet_;
}

void OutputResp::unsetlocalDir()
{
    localDirIsSet_ = false;
}

std::string OutputResp::getAccessMethod() const
{
    return accessMethod_;
}

void OutputResp::setAccessMethod(const std::string& value)
{
    accessMethod_ = value;
    accessMethodIsSet_ = true;
}

bool OutputResp::accessMethodIsSet() const
{
    return accessMethodIsSet_;
}

void OutputResp::unsetaccessMethod()
{
    accessMethodIsSet_ = false;
}

RemoteResp OutputResp::getRemote() const
{
    return remote_;
}

void OutputResp::setRemote(const RemoteResp& value)
{
    remote_ = value;
    remoteIsSet_ = true;
}

bool OutputResp::remoteIsSet() const
{
    return remoteIsSet_;
}

void OutputResp::unsetremote()
{
    remoteIsSet_ = false;
}

}
}
}
}
}


