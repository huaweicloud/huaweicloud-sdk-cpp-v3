

#include "huaweicloud/modelarts/v1/model/AlgorithmOutput.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmOutput::AlgorithmOutput()
{
    name_ = "";
    nameIsSet_ = false;
    localDir_ = "";
    localDirIsSet_ = false;
    remoteIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
}

AlgorithmOutput::~AlgorithmOutput() = default;

void AlgorithmOutput::validate()
{
}

web::json::value AlgorithmOutput::toJson() const
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
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }

    return val;
}
bool AlgorithmOutput::fromJson(const web::json::value& val)
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
            Remote refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemote(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    return ok;
}


std::string AlgorithmOutput::getName() const
{
    return name_;
}

void AlgorithmOutput::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlgorithmOutput::nameIsSet() const
{
    return nameIsSet_;
}

void AlgorithmOutput::unsetname()
{
    nameIsSet_ = false;
}

std::string AlgorithmOutput::getLocalDir() const
{
    return localDir_;
}

void AlgorithmOutput::setLocalDir(const std::string& value)
{
    localDir_ = value;
    localDirIsSet_ = true;
}

bool AlgorithmOutput::localDirIsSet() const
{
    return localDirIsSet_;
}

void AlgorithmOutput::unsetlocalDir()
{
    localDirIsSet_ = false;
}

Remote AlgorithmOutput::getRemote() const
{
    return remote_;
}

void AlgorithmOutput::setRemote(const Remote& value)
{
    remote_ = value;
    remoteIsSet_ = true;
}

bool AlgorithmOutput::remoteIsSet() const
{
    return remoteIsSet_;
}

void AlgorithmOutput::unsetremote()
{
    remoteIsSet_ = false;
}

std::string AlgorithmOutput::getMode() const
{
    return mode_;
}

void AlgorithmOutput::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool AlgorithmOutput::modeIsSet() const
{
    return modeIsSet_;
}

void AlgorithmOutput::unsetmode()
{
    modeIsSet_ = false;
}

std::string AlgorithmOutput::getPeriod() const
{
    return period_;
}

void AlgorithmOutput::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool AlgorithmOutput::periodIsSet() const
{
    return periodIsSet_;
}

void AlgorithmOutput::unsetperiod()
{
    periodIsSet_ = false;
}

}
}
}
}
}


