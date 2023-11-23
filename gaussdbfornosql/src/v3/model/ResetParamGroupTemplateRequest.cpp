

#include "huaweicloud/gaussdbfornosql/v3/model/ResetParamGroupTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ResetParamGroupTemplateRequest::ResetParamGroupTemplateRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
}

ResetParamGroupTemplateRequest::~ResetParamGroupTemplateRequest() = default;

void ResetParamGroupTemplateRequest::validate()
{
}

web::json::value ResetParamGroupTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }

    return val;
}
bool ResetParamGroupTemplateRequest::fromJson(const web::json::value& val)
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


std::string ResetParamGroupTemplateRequest::getConfigId() const
{
    return configId_;
}

void ResetParamGroupTemplateRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ResetParamGroupTemplateRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ResetParamGroupTemplateRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

}
}
}
}
}


