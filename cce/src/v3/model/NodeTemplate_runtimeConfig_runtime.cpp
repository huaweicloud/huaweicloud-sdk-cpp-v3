

#include "huaweicloud/cce/v3/model/NodeTemplate_runtimeConfig_runtime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeTemplate_runtimeConfig_runtime::NodeTemplate_runtimeConfig_runtime()
{
    name_ = "";
    nameIsSet_ = false;
}

NodeTemplate_runtimeConfig_runtime::~NodeTemplate_runtimeConfig_runtime() = default;

void NodeTemplate_runtimeConfig_runtime::validate()
{
}

web::json::value NodeTemplate_runtimeConfig_runtime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool NodeTemplate_runtimeConfig_runtime::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string NodeTemplate_runtimeConfig_runtime::getName() const
{
    return name_;
}

void NodeTemplate_runtimeConfig_runtime::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodeTemplate_runtimeConfig_runtime::nameIsSet() const
{
    return nameIsSet_;
}

void NodeTemplate_runtimeConfig_runtime::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


