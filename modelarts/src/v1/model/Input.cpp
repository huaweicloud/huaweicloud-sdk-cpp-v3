

#include "huaweicloud/modelarts/v1/model/Input.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Input::Input()
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
    remoteConstraintIsSet_ = false;
}

Input::~Input() = default;

void Input::validate()
{
}

web::json::value Input::toJson() const
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
    if(remoteConstraintIsSet_) {
        val[utility::conversions::to_string_t("remote_constraint")] = ModelBase::toJson(remoteConstraint_);
    }

    return val;
}
bool Input::fromJson(const web::json::value& val)
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
            InputDataInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemote(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_constraint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_constraint"));
        if(!fieldValue.is_null())
        {
            std::vector<Input_remote_constraint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteConstraint(refVal);
        }
    }
    return ok;
}


std::string Input::getName() const
{
    return name_;
}

void Input::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Input::nameIsSet() const
{
    return nameIsSet_;
}

void Input::unsetname()
{
    nameIsSet_ = false;
}

std::string Input::getDescription() const
{
    return description_;
}

void Input::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Input::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Input::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Input::getLocalDir() const
{
    return localDir_;
}

void Input::setLocalDir(const std::string& value)
{
    localDir_ = value;
    localDirIsSet_ = true;
}

bool Input::localDirIsSet() const
{
    return localDirIsSet_;
}

void Input::unsetlocalDir()
{
    localDirIsSet_ = false;
}

std::string Input::getAccessMethod() const
{
    return accessMethod_;
}

void Input::setAccessMethod(const std::string& value)
{
    accessMethod_ = value;
    accessMethodIsSet_ = true;
}

bool Input::accessMethodIsSet() const
{
    return accessMethodIsSet_;
}

void Input::unsetaccessMethod()
{
    accessMethodIsSet_ = false;
}

InputDataInfo Input::getRemote() const
{
    return remote_;
}

void Input::setRemote(const InputDataInfo& value)
{
    remote_ = value;
    remoteIsSet_ = true;
}

bool Input::remoteIsSet() const
{
    return remoteIsSet_;
}

void Input::unsetremote()
{
    remoteIsSet_ = false;
}

std::vector<Input_remote_constraint>& Input::getRemoteConstraint()
{
    return remoteConstraint_;
}

void Input::setRemoteConstraint(const std::vector<Input_remote_constraint>& value)
{
    remoteConstraint_ = value;
    remoteConstraintIsSet_ = true;
}

bool Input::remoteConstraintIsSet() const
{
    return remoteConstraintIsSet_;
}

void Input::unsetremoteConstraint()
{
    remoteConstraintIsSet_ = false;
}

}
}
}
}
}


