

#include "huaweicloud/modelarts/v1/model/Obs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Obs::Obs()
{
    obsPath_ = "";
    obsPathIsSet_ = false;
    localPath_ = "";
    localPathIsSet_ = false;
}

Obs::~Obs() = default;

void Obs::validate()
{
}

web::json::value Obs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsPathIsSet_) {
        val[utility::conversions::to_string_t("obs_path")] = ModelBase::toJson(obsPath_);
    }
    if(localPathIsSet_) {
        val[utility::conversions::to_string_t("local_path")] = ModelBase::toJson(localPath_);
    }

    return val;
}
bool Obs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalPath(refVal);
        }
    }
    return ok;
}


std::string Obs::getObsPath() const
{
    return obsPath_;
}

void Obs::setObsPath(const std::string& value)
{
    obsPath_ = value;
    obsPathIsSet_ = true;
}

bool Obs::obsPathIsSet() const
{
    return obsPathIsSet_;
}

void Obs::unsetobsPath()
{
    obsPathIsSet_ = false;
}

std::string Obs::getLocalPath() const
{
    return localPath_;
}

void Obs::setLocalPath(const std::string& value)
{
    localPath_ = value;
    localPathIsSet_ = true;
}

bool Obs::localPathIsSet() const
{
    return localPathIsSet_;
}

void Obs::unsetlocalPath()
{
    localPathIsSet_ = false;
}

}
}
}
}
}


