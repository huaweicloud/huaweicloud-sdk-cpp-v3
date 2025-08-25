

#include "huaweicloud/cce/v3/model/LVMConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




LVMConfig::LVMConfig()
{
    lvType_ = "";
    lvTypeIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
}

LVMConfig::~LVMConfig() = default;

void LVMConfig::validate()
{
}

web::json::value LVMConfig::toJson() const
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
bool LVMConfig::fromJson(const web::json::value& val)
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


std::string LVMConfig::getLvType() const
{
    return lvType_;
}

void LVMConfig::setLvType(const std::string& value)
{
    lvType_ = value;
    lvTypeIsSet_ = true;
}

bool LVMConfig::lvTypeIsSet() const
{
    return lvTypeIsSet_;
}

void LVMConfig::unsetlvType()
{
    lvTypeIsSet_ = false;
}

std::string LVMConfig::getPath() const
{
    return path_;
}

void LVMConfig::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool LVMConfig::pathIsSet() const
{
    return pathIsSet_;
}

void LVMConfig::unsetpath()
{
    pathIsSet_ = false;
}

}
}
}
}
}


