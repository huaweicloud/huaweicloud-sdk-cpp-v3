

#include "huaweicloud/modelarts/v1/model/ServerTaskLimit.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerTaskLimit::ServerTaskLimit()
{
    maxTask_ = 0;
    maxTaskIsSet_ = false;
}

ServerTaskLimit::~ServerTaskLimit() = default;

void ServerTaskLimit::validate()
{
}

web::json::value ServerTaskLimit::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxTaskIsSet_) {
        val[utility::conversions::to_string_t("max_task")] = ModelBase::toJson(maxTask_);
    }

    return val;
}
bool ServerTaskLimit::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_task"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTask(refVal);
        }
    }
    return ok;
}


int32_t ServerTaskLimit::getMaxTask() const
{
    return maxTask_;
}

void ServerTaskLimit::setMaxTask(int32_t value)
{
    maxTask_ = value;
    maxTaskIsSet_ = true;
}

bool ServerTaskLimit::maxTaskIsSet() const
{
    return maxTaskIsSet_;
}

void ServerTaskLimit::unsetmaxTask()
{
    maxTaskIsSet_ = false;
}

}
}
}
}
}


