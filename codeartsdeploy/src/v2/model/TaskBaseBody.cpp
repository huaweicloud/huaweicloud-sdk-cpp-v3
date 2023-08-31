

#include "huaweicloud/codeartsdeploy/v2/model/TaskBaseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




TaskBaseBody::TaskBaseBody()
{
    id_ = "";
    idIsSet_ = false;
}

TaskBaseBody::~TaskBaseBody() = default;

void TaskBaseBody::validate()
{
}

web::json::value TaskBaseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool TaskBaseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}

std::string TaskBaseBody::getId() const
{
    return id_;
}

void TaskBaseBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TaskBaseBody::idIsSet() const
{
    return idIsSet_;
}

void TaskBaseBody::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


