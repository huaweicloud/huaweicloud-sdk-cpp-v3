

#include "huaweicloud/gaussdb/v3/model/ModifyNodePriorityRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyNodePriorityRequestBody::ModifyNodePriorityRequestBody()
{
    priority_ = 0;
    priorityIsSet_ = false;
}

ModifyNodePriorityRequestBody::~ModifyNodePriorityRequestBody() = default;

void ModifyNodePriorityRequestBody::validate()
{
}

web::json::value ModifyNodePriorityRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }

    return val;
}
bool ModifyNodePriorityRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    return ok;
}


int32_t ModifyNodePriorityRequestBody::getPriority() const
{
    return priority_;
}

void ModifyNodePriorityRequestBody::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool ModifyNodePriorityRequestBody::priorityIsSet() const
{
    return priorityIsSet_;
}

void ModifyNodePriorityRequestBody::unsetpriority()
{
    priorityIsSet_ = false;
}

}
}
}
}
}


