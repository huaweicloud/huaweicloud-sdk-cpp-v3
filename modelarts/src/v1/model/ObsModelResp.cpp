

#include "huaweicloud/modelarts/v1/model/ObsModelResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ObsModelResp::ObsModelResp()
{
    obsPath_ = "";
    obsPathIsSet_ = false;
    localPath_ = "";
    localPathIsSet_ = false;
}

ObsModelResp::~ObsModelResp() = default;

void ObsModelResp::validate()
{
}

web::json::value ObsModelResp::toJson() const
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
bool ObsModelResp::fromJson(const web::json::value& val)
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


std::string ObsModelResp::getObsPath() const
{
    return obsPath_;
}

void ObsModelResp::setObsPath(const std::string& value)
{
    obsPath_ = value;
    obsPathIsSet_ = true;
}

bool ObsModelResp::obsPathIsSet() const
{
    return obsPathIsSet_;
}

void ObsModelResp::unsetobsPath()
{
    obsPathIsSet_ = false;
}

std::string ObsModelResp::getLocalPath() const
{
    return localPath_;
}

void ObsModelResp::setLocalPath(const std::string& value)
{
    localPath_ = value;
    localPathIsSet_ = true;
}

bool ObsModelResp::localPathIsSet() const
{
    return localPathIsSet_;
}

void ObsModelResp::unsetlocalPath()
{
    localPathIsSet_ = false;
}

}
}
}
}
}


