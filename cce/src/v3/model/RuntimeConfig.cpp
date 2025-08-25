

#include "huaweicloud/cce/v3/model/RuntimeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RuntimeConfig::RuntimeConfig()
{
    lvType_ = "";
    lvTypeIsSet_ = false;
}

RuntimeConfig::~RuntimeConfig() = default;

void RuntimeConfig::validate()
{
}

web::json::value RuntimeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lvTypeIsSet_) {
        val[utility::conversions::to_string_t("lvType")] = ModelBase::toJson(lvType_);
    }

    return val;
}
bool RuntimeConfig::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RuntimeConfig::getLvType() const
{
    return lvType_;
}

void RuntimeConfig::setLvType(const std::string& value)
{
    lvType_ = value;
    lvTypeIsSet_ = true;
}

bool RuntimeConfig::lvTypeIsSet() const
{
    return lvTypeIsSet_;
}

void RuntimeConfig::unsetlvType()
{
    lvTypeIsSet_ = false;
}

}
}
}
}
}


