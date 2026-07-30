

#include "huaweicloud/modelarts/v1/model/PoolResourceFlavor_extendParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolResourceFlavor_extendParams::PoolResourceFlavor_extendParams()
{
    dockerBaseSize_ = "";
    dockerBaseSizeIsSet_ = false;
}

PoolResourceFlavor_extendParams::~PoolResourceFlavor_extendParams() = default;

void PoolResourceFlavor_extendParams::validate()
{
}

web::json::value PoolResourceFlavor_extendParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dockerBaseSizeIsSet_) {
        val[utility::conversions::to_string_t("dockerBaseSize")] = ModelBase::toJson(dockerBaseSize_);
    }

    return val;
}
bool PoolResourceFlavor_extendParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dockerBaseSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerBaseSize"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerBaseSize(refVal);
        }
    }
    return ok;
}


std::string PoolResourceFlavor_extendParams::getDockerBaseSize() const
{
    return dockerBaseSize_;
}

void PoolResourceFlavor_extendParams::setDockerBaseSize(const std::string& value)
{
    dockerBaseSize_ = value;
    dockerBaseSizeIsSet_ = true;
}

bool PoolResourceFlavor_extendParams::dockerBaseSizeIsSet() const
{
    return dockerBaseSizeIsSet_;
}

void PoolResourceFlavor_extendParams::unsetdockerBaseSize()
{
    dockerBaseSizeIsSet_ = false;
}

}
}
}
}
}


