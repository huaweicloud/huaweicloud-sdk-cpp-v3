

#include "huaweicloud/modelarts/v1/model/InputResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InputResp::InputResp()
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

InputResp::~InputResp() = default;

void InputResp::validate()
{
}

web::json::value InputResp::toJson() const
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
bool InputResp::fromJson(const web::json::value& val)
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
            InputDataInfoResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemote(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_constraint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_constraint"));
        if(!fieldValue.is_null())
        {
            std::vector<InputResp_remote_constraint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteConstraint(refVal);
        }
    }
    return ok;
}


std::string InputResp::getName() const
{
    return name_;
}

void InputResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InputResp::nameIsSet() const
{
    return nameIsSet_;
}

void InputResp::unsetname()
{
    nameIsSet_ = false;
}

std::string InputResp::getDescription() const
{
    return description_;
}

void InputResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool InputResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void InputResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string InputResp::getLocalDir() const
{
    return localDir_;
}

void InputResp::setLocalDir(const std::string& value)
{
    localDir_ = value;
    localDirIsSet_ = true;
}

bool InputResp::localDirIsSet() const
{
    return localDirIsSet_;
}

void InputResp::unsetlocalDir()
{
    localDirIsSet_ = false;
}

std::string InputResp::getAccessMethod() const
{
    return accessMethod_;
}

void InputResp::setAccessMethod(const std::string& value)
{
    accessMethod_ = value;
    accessMethodIsSet_ = true;
}

bool InputResp::accessMethodIsSet() const
{
    return accessMethodIsSet_;
}

void InputResp::unsetaccessMethod()
{
    accessMethodIsSet_ = false;
}

InputDataInfoResp InputResp::getRemote() const
{
    return remote_;
}

void InputResp::setRemote(const InputDataInfoResp& value)
{
    remote_ = value;
    remoteIsSet_ = true;
}

bool InputResp::remoteIsSet() const
{
    return remoteIsSet_;
}

void InputResp::unsetremote()
{
    remoteIsSet_ = false;
}

std::vector<InputResp_remote_constraint>& InputResp::getRemoteConstraint()
{
    return remoteConstraint_;
}

void InputResp::setRemoteConstraint(const std::vector<InputResp_remote_constraint>& value)
{
    remoteConstraint_ = value;
    remoteConstraintIsSet_ = true;
}

bool InputResp::remoteConstraintIsSet() const
{
    return remoteConstraintIsSet_;
}

void InputResp::unsetremoteConstraint()
{
    remoteConstraintIsSet_ = false;
}

}
}
}
}
}


