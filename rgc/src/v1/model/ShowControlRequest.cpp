

#include "huaweicloud/rgc/v1/model/ShowControlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowControlRequest::ShowControlRequest()
{
    controlId_ = "";
    controlIdIsSet_ = false;
}

ShowControlRequest::~ShowControlRequest() = default;

void ShowControlRequest::validate()
{
}

web::json::value ShowControlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(controlIdIsSet_) {
        val[utility::conversions::to_string_t("control_id")] = ModelBase::toJson(controlId_);
    }

    return val;
}
bool ShowControlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("control_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlId(refVal);
        }
    }
    return ok;
}


std::string ShowControlRequest::getControlId() const
{
    return controlId_;
}

void ShowControlRequest::setControlId(const std::string& value)
{
    controlId_ = value;
    controlIdIsSet_ = true;
}

bool ShowControlRequest::controlIdIsSet() const
{
    return controlIdIsSet_;
}

void ShowControlRequest::unsetcontrolId()
{
    controlIdIsSet_ = false;
}

}
}
}
}
}


