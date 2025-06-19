

#include "huaweicloud/cfw/v1/model/ListIpBlacklistSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpBlacklistSwitchRequest::ListIpBlacklistSwitchRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListIpBlacklistSwitchRequest::~ListIpBlacklistSwitchRequest() = default;

void ListIpBlacklistSwitchRequest::validate()
{
}

web::json::value ListIpBlacklistSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ListIpBlacklistSwitchRequest::fromJson(const web::json::value& val)
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


std::string ListIpBlacklistSwitchRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListIpBlacklistSwitchRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListIpBlacklistSwitchRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListIpBlacklistSwitchRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


