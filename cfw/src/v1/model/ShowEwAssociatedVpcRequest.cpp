

#include "huaweicloud/cfw/v1/model/ShowEwAssociatedVpcRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowEwAssociatedVpcRequest::ShowEwAssociatedVpcRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ShowEwAssociatedVpcRequest::~ShowEwAssociatedVpcRequest() = default;

void ShowEwAssociatedVpcRequest::validate()
{
}

web::json::value ShowEwAssociatedVpcRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ShowEwAssociatedVpcRequest::fromJson(const web::json::value& val)
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


std::string ShowEwAssociatedVpcRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowEwAssociatedVpcRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowEwAssociatedVpcRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowEwAssociatedVpcRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


