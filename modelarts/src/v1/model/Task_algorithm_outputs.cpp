

#include "huaweicloud/modelarts/v1/model/Task_algorithm_outputs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Task_algorithm_outputs::Task_algorithm_outputs()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    localDir_ = "";
    localDirIsSet_ = false;
    remoteIsSet_ = false;
}

Task_algorithm_outputs::~Task_algorithm_outputs() = default;

void Task_algorithm_outputs::validate()
{
}

web::json::value Task_algorithm_outputs::toJson() const
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
    if(remoteIsSet_) {
        val[utility::conversions::to_string_t("remote")] = ModelBase::toJson(remote_);
    }

    return val;
}
bool Task_algorithm_outputs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("remote"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote"));
        if(!fieldValue.is_null())
        {
            Task_algorithm_remote refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemote(refVal);
        }
    }
    return ok;
}


std::string Task_algorithm_outputs::getName() const
{
    return name_;
}

void Task_algorithm_outputs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Task_algorithm_outputs::nameIsSet() const
{
    return nameIsSet_;
}

void Task_algorithm_outputs::unsetname()
{
    nameIsSet_ = false;
}

std::string Task_algorithm_outputs::getDescription() const
{
    return description_;
}

void Task_algorithm_outputs::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Task_algorithm_outputs::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Task_algorithm_outputs::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Task_algorithm_outputs::getLocalDir() const
{
    return localDir_;
}

void Task_algorithm_outputs::setLocalDir(const std::string& value)
{
    localDir_ = value;
    localDirIsSet_ = true;
}

bool Task_algorithm_outputs::localDirIsSet() const
{
    return localDirIsSet_;
}

void Task_algorithm_outputs::unsetlocalDir()
{
    localDirIsSet_ = false;
}

Task_algorithm_remote Task_algorithm_outputs::getRemote() const
{
    return remote_;
}

void Task_algorithm_outputs::setRemote(const Task_algorithm_remote& value)
{
    remote_ = value;
    remoteIsSet_ = true;
}

bool Task_algorithm_outputs::remoteIsSet() const
{
    return remoteIsSet_;
}

void Task_algorithm_outputs::unsetremote()
{
    remoteIsSet_ = false;
}

}
}
}
}
}


