

#include "huaweicloud/modelarts/v1/model/NodeconfigTemplateItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigTemplateItem::NodeconfigTemplateItem()
{
    configsIsSet_ = false;
}

NodeconfigTemplateItem::~NodeconfigTemplateItem() = default;

void NodeconfigTemplateItem::validate()
{
}

web::json::value NodeconfigTemplateItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configsIsSet_) {
        val[utility::conversions::to_string_t("configs")] = ModelBase::toJson(configs_);
    }

    return val;
}
bool NodeconfigTemplateItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configs"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigs(refVal);
        }
    }
    return ok;
}


Object NodeconfigTemplateItem::getConfigs() const
{
    return configs_;
}

void NodeconfigTemplateItem::setConfigs(const Object& value)
{
    configs_ = value;
    configsIsSet_ = true;
}

bool NodeconfigTemplateItem::configsIsSet() const
{
    return configsIsSet_;
}

void NodeconfigTemplateItem::unsetconfigs()
{
    configsIsSet_ = false;
}

}
}
}
}
}


