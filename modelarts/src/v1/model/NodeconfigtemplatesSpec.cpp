

#include "huaweicloud/modelarts/v1/model/NodeconfigtemplatesSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigtemplatesSpec::NodeconfigtemplatesSpec()
{
    templatesIsSet_ = false;
}

NodeconfigtemplatesSpec::~NodeconfigtemplatesSpec() = default;

void NodeconfigtemplatesSpec::validate()
{
}

web::json::value NodeconfigtemplatesSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }

    return val;
}
bool NodeconfigtemplatesSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeconfigTemplateItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    return ok;
}


std::vector<NodeconfigTemplateItem>& NodeconfigtemplatesSpec::getTemplates()
{
    return templates_;
}

void NodeconfigtemplatesSpec::setTemplates(const std::vector<NodeconfigTemplateItem>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool NodeconfigtemplatesSpec::templatesIsSet() const
{
    return templatesIsSet_;
}

void NodeconfigtemplatesSpec::unsettemplates()
{
    templatesIsSet_ = false;
}

}
}
}
}
}


