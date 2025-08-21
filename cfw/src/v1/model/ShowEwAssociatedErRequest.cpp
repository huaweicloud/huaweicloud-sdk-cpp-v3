

#include "huaweicloud/cfw/v1/model/ShowEwAssociatedErRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowEwAssociatedErRequest::ShowEwAssociatedErRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ShowEwAssociatedErRequest::~ShowEwAssociatedErRequest() = default;

void ShowEwAssociatedErRequest::validate()
{
}

web::json::value ShowEwAssociatedErRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ShowEwAssociatedErRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    return ok;
}


std::string ShowEwAssociatedErRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowEwAssociatedErRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowEwAssociatedErRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowEwAssociatedErRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


