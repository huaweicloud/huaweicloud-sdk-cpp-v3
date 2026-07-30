

#include "huaweicloud/modelarts/v1/model/CustomHooks.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CustomHooks::CustomHooks()
{
    containerHooksIsSet_ = false;
}

CustomHooks::~CustomHooks() = default;

void CustomHooks::validate()
{
}

web::json::value CustomHooks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(containerHooksIsSet_) {
        val[utility::conversions::to_string_t("container_hooks")] = ModelBase::toJson(containerHooks_);
    }

    return val;
}
bool CustomHooks::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("container_hooks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container_hooks"));
        if(!fieldValue.is_null())
        {
            ContainerHooks refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerHooks(refVal);
        }
    }
    return ok;
}


ContainerHooks CustomHooks::getContainerHooks() const
{
    return containerHooks_;
}

void CustomHooks::setContainerHooks(const ContainerHooks& value)
{
    containerHooks_ = value;
    containerHooksIsSet_ = true;
}

bool CustomHooks::containerHooksIsSet() const
{
    return containerHooksIsSet_;
}

void CustomHooks::unsetcontainerHooks()
{
    containerHooksIsSet_ = false;
}

}
}
}
}
}


