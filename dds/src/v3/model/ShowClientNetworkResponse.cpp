

#include "huaweicloud/dds/v3/model/ShowClientNetworkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowClientNetworkResponse::ShowClientNetworkResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    clientNetworkRangesIsSet_ = false;
}

ShowClientNetworkResponse::~ShowClientNetworkResponse() = default;

void ShowClientNetworkResponse::validate()
{
}

web::json::value ShowClientNetworkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(clientNetworkRangesIsSet_) {
        val[utility::conversions::to_string_t("client_network_ranges")] = ModelBase::toJson(clientNetworkRanges_);
    }

    return val;
}
bool ShowClientNetworkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_network_ranges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_network_ranges"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientNetworkRanges(refVal);
        }
    }
    return ok;
}


std::string ShowClientNetworkResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowClientNetworkResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowClientNetworkResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowClientNetworkResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<std::string>& ShowClientNetworkResponse::getClientNetworkRanges()
{
    return clientNetworkRanges_;
}

void ShowClientNetworkResponse::setClientNetworkRanges(const std::vector<std::string>& value)
{
    clientNetworkRanges_ = value;
    clientNetworkRangesIsSet_ = true;
}

bool ShowClientNetworkResponse::clientNetworkRangesIsSet() const
{
    return clientNetworkRangesIsSet_;
}

void ShowClientNetworkResponse::unsetclientNetworkRanges()
{
    clientNetworkRangesIsSet_ = false;
}

}
}
}
}
}


