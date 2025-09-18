

#include "huaweicloud/projectman/v4/model/WorkflowTemplateConfigsVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkflowTemplateConfigsVO::WorkflowTemplateConfigsVO()
{
    configValueIsSet_ = false;
}

WorkflowTemplateConfigsVO::~WorkflowTemplateConfigsVO() = default;

void WorkflowTemplateConfigsVO::validate()
{
}

web::json::value WorkflowTemplateConfigsVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configValueIsSet_) {
        val[utility::conversions::to_string_t("configValue")] = ModelBase::toJson(configValue_);
    }

    return val;
}
bool WorkflowTemplateConfigsVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configValue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configValue"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigValue(refVal);
        }
    }
    return ok;
}


std::vector<std::map<std::string, Object>>& WorkflowTemplateConfigsVO::getConfigValue()
{
    return configValue_;
}

void WorkflowTemplateConfigsVO::setConfigValue(const std::vector<std::map<std::string, Object>>& value)
{
    configValue_ = value;
    configValueIsSet_ = true;
}

bool WorkflowTemplateConfigsVO::configValueIsSet() const
{
    return configValueIsSet_;
}

void WorkflowTemplateConfigsVO::unsetconfigValue()
{
    configValueIsSet_ = false;
}

}
}
}
}
}


