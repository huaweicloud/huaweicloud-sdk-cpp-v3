

#include "huaweicloud/cfw/v1/model/ListPrivateNetworkSegmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListPrivateNetworkSegmentsRequest::ListPrivateNetworkSegmentsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListPrivateNetworkSegmentsRequest::~ListPrivateNetworkSegmentsRequest() = default;

void ListPrivateNetworkSegmentsRequest::validate()
{
}

web::json::value ListPrivateNetworkSegmentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ListPrivateNetworkSegmentsRequest::fromJson(const web::json::value& val)
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


std::string ListPrivateNetworkSegmentsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListPrivateNetworkSegmentsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListPrivateNetworkSegmentsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListPrivateNetworkSegmentsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


