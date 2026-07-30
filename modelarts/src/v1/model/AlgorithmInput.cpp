

#include "huaweicloud/modelarts/v1/model/AlgorithmInput.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmInput::AlgorithmInput()
{
    name_ = "";
    nameIsSet_ = false;
    localDir_ = "";
    localDirIsSet_ = false;
    remoteIsSet_ = false;
}

AlgorithmInput::~AlgorithmInput() = default;

void AlgorithmInput::validate()
{
}

web::json::value AlgorithmInput::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(localDirIsSet_) {
        val[utility::conversions::to_string_t("local_dir")] = ModelBase::toJson(localDir_);
    }
    if(remoteIsSet_) {
        val[utility::conversions::to_string_t("remote")] = ModelBase::toJson(remote_);
    }

    return val;
}
bool AlgorithmInput::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("local_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote"));
        if(!fieldValue.is_null())
        {
            AlgorithmRemote refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemote(refVal);
        }
    }
    return ok;
}


std::string AlgorithmInput::getName() const
{
    return name_;
}

void AlgorithmInput::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlgorithmInput::nameIsSet() const
{
    return nameIsSet_;
}

void AlgorithmInput::unsetname()
{
    nameIsSet_ = false;
}

std::string AlgorithmInput::getLocalDir() const
{
    return localDir_;
}

void AlgorithmInput::setLocalDir(const std::string& value)
{
    localDir_ = value;
    localDirIsSet_ = true;
}

bool AlgorithmInput::localDirIsSet() const
{
    return localDirIsSet_;
}

void AlgorithmInput::unsetlocalDir()
{
    localDirIsSet_ = false;
}

AlgorithmRemote AlgorithmInput::getRemote() const
{
    return remote_;
}

void AlgorithmInput::setRemote(const AlgorithmRemote& value)
{
    remote_ = value;
    remoteIsSet_ = true;
}

bool AlgorithmInput::remoteIsSet() const
{
    return remoteIsSet_;
}

void AlgorithmInput::unsetremote()
{
    remoteIsSet_ = false;
}

}
}
}
}
}


