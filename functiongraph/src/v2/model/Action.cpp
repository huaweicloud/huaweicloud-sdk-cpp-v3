

#include "huaweicloud/functiongraph/v2/model/Action.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




Action::Action()
{
    functionRefIsSet_ = false;
}

Action::~Action() = default;

void Action::validate()
{
}

web::json::value Action::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionRefIsSet_) {
        val[utility::conversions::to_string_t("function_ref")] = ModelBase::toJson(functionRef_);
    }

    return val;
}
bool Action::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_ref"));
        if(!fieldValue.is_null())
        {
            FunctionRef refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionRef(refVal);
        }
    }
    return ok;
}


FunctionRef Action::getFunctionRef() const
{
    return functionRef_;
}

void Action::setFunctionRef(const FunctionRef& value)
{
    functionRef_ = value;
    functionRefIsSet_ = true;
}

bool Action::functionRefIsSet() const
{
    return functionRefIsSet_;
}

void Action::unsetfunctionRef()
{
    functionRefIsSet_ = false;
}

}
}
}
}
}


