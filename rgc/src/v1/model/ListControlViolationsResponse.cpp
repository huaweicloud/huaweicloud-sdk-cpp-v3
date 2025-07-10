

#include "huaweicloud/rgc/v1/model/ListControlViolationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListControlViolationsResponse::ListControlViolationsResponse()
{
    controlViolationsIsSet_ = false;
}

ListControlViolationsResponse::~ListControlViolationsResponse() = default;

void ListControlViolationsResponse::validate()
{
}

web::json::value ListControlViolationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(controlViolationsIsSet_) {
        val[utility::conversions::to_string_t("control_violations")] = ModelBase::toJson(controlViolations_);
    }

    return val;
}
bool ListControlViolationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("control_violations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_violations"));
        if(!fieldValue.is_null())
        {
            std::vector<ControlViolation> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlViolations(refVal);
        }
    }
    return ok;
}


std::vector<ControlViolation>& ListControlViolationsResponse::getControlViolations()
{
    return controlViolations_;
}

void ListControlViolationsResponse::setControlViolations(const std::vector<ControlViolation>& value)
{
    controlViolations_ = value;
    controlViolationsIsSet_ = true;
}

bool ListControlViolationsResponse::controlViolationsIsSet() const
{
    return controlViolationsIsSet_;
}

void ListControlViolationsResponse::unsetcontrolViolations()
{
    controlViolationsIsSet_ = false;
}

}
}
}
}
}


