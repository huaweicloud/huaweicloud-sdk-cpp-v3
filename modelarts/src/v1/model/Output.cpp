

#include "huaweicloud/modelarts/v1/model/Output.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Output::Output()
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

Output::~Output() = default;

void Output::validate()
{
}

web::json::value Output::toJson() const
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
bool Output::fromJson(const web::json::value& val)
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
            Remote refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemote(refVal);
        }
    }
    return ok;
}


std::string Output::getName() const
{
    return name_;
}

void Output::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Output::nameIsSet() const
{
    return nameIsSet_;
}

void Output::unsetname()
{
    nameIsSet_ = false;
}

std::string Output::getDescription() const
{
    return description_;
}

void Output::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Output::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Output::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Output::getLocalDir() const
{
    return localDir_;
}

void Output::setLocalDir(const std::string& value)
{
    localDir_ = value;
    localDirIsSet_ = true;
}

bool Output::localDirIsSet() const
{
    return localDirIsSet_;
}

void Output::unsetlocalDir()
{
    localDirIsSet_ = false;
}

std::string Output::getAccessMethod() const
{
    return accessMethod_;
}

void Output::setAccessMethod(const std::string& value)
{
    accessMethod_ = value;
    accessMethodIsSet_ = true;
}

bool Output::accessMethodIsSet() const
{
    return accessMethodIsSet_;
}

void Output::unsetaccessMethod()
{
    accessMethodIsSet_ = false;
}

Remote Output::getRemote() const
{
    return remote_;
}

void Output::setRemote(const Remote& value)
{
    remote_ = value;
    remoteIsSet_ = true;
}

bool Output::remoteIsSet() const
{
    return remoteIsSet_;
}

void Output::unsetremote()
{
    remoteIsSet_ = false;
}

}
}
}
}
}


