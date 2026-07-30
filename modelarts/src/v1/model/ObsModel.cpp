

#include "huaweicloud/modelarts/v1/model/ObsModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ObsModel::ObsModel()
{
    obsPath_ = "";
    obsPathIsSet_ = false;
    localPath_ = "";
    localPathIsSet_ = false;
}

ObsModel::~ObsModel() = default;

void ObsModel::validate()
{
}

web::json::value ObsModel::toJson() const
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
bool ObsModel::fromJson(const web::json::value& val)
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


std::string ObsModel::getObsPath() const
{
    return obsPath_;
}

void ObsModel::setObsPath(const std::string& value)
{
    obsPath_ = value;
    obsPathIsSet_ = true;
}

bool ObsModel::obsPathIsSet() const
{
    return obsPathIsSet_;
}

void ObsModel::unsetobsPath()
{
    obsPathIsSet_ = false;
}

std::string ObsModel::getLocalPath() const
{
    return localPath_;
}

void ObsModel::setLocalPath(const std::string& value)
{
    localPath_ = value;
    localPathIsSet_ = true;
}

bool ObsModel::localPathIsSet() const
{
    return localPathIsSet_;
}

void ObsModel::unsetlocalPath()
{
    localPathIsSet_ = false;
}

}
}
}
}
}


