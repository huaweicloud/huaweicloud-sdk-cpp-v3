

#include "huaweicloud/modelarts/v1/model/LvmConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LvmConfig::LvmConfig()
{
    lvType_ = "";
    lvTypeIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
}

LvmConfig::~LvmConfig() = default;

void LvmConfig::validate()
{
}

web::json::value LvmConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lvTypeIsSet_) {
        val[utility::conversions::to_string_t("lvType")] = ModelBase::toJson(lvType_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }

    return val;
}
bool LvmConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lvType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lvType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLvType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    return ok;
}


std::string LvmConfig::getLvType() const
{
    return lvType_;
}

void LvmConfig::setLvType(const std::string& value)
{
    lvType_ = value;
    lvTypeIsSet_ = true;
}

bool LvmConfig::lvTypeIsSet() const
{
    return lvTypeIsSet_;
}

void LvmConfig::unsetlvType()
{
    lvTypeIsSet_ = false;
}

std::string LvmConfig::getPath() const
{
    return path_;
}

void LvmConfig::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool LvmConfig::pathIsSet() const
{
    return pathIsSet_;
}

void LvmConfig::unsetpath()
{
    pathIsSet_ = false;
}

}
}
}
}
}


