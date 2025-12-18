

#include "huaweicloud/gaussdbforopengauss/v3/model/SaveAsParameterConfigTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SaveAsParameterConfigTemplateResponse::SaveAsParameterConfigTemplateResponse()
{
    configId_ = "";
    configIdIsSet_ = false;
}

SaveAsParameterConfigTemplateResponse::~SaveAsParameterConfigTemplateResponse() = default;

void SaveAsParameterConfigTemplateResponse::validate()
{
}

web::json::value SaveAsParameterConfigTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }

    return val;
}
bool SaveAsParameterConfigTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
        }
    }
    return ok;
}


std::string SaveAsParameterConfigTemplateResponse::getConfigId() const
{
    return configId_;
}

void SaveAsParameterConfigTemplateResponse::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool SaveAsParameterConfigTemplateResponse::configIdIsSet() const
{
    return configIdIsSet_;
}

void SaveAsParameterConfigTemplateResponse::unsetconfigId()
{
    configIdIsSet_ = false;
}

}
}
}
}
}


