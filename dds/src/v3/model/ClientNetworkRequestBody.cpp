

#include "huaweicloud/dds/v3/model/ClientNetworkRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ClientNetworkRequestBody::ClientNetworkRequestBody()
{
    clientNetworkRangesIsSet_ = false;
}

ClientNetworkRequestBody::~ClientNetworkRequestBody() = default;

void ClientNetworkRequestBody::validate()
{
}

web::json::value ClientNetworkRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clientNetworkRangesIsSet_) {
        val[utility::conversions::to_string_t("client_network_ranges")] = ModelBase::toJson(clientNetworkRanges_);
    }

    return val;
}
bool ClientNetworkRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<std::string>& ClientNetworkRequestBody::getClientNetworkRanges()
{
    return clientNetworkRanges_;
}

void ClientNetworkRequestBody::setClientNetworkRanges(const std::vector<std::string>& value)
{
    clientNetworkRanges_ = value;
    clientNetworkRangesIsSet_ = true;
}

bool ClientNetworkRequestBody::clientNetworkRangesIsSet() const
{
    return clientNetworkRangesIsSet_;
}

void ClientNetworkRequestBody::unsetclientNetworkRanges()
{
    clientNetworkRangesIsSet_ = false;
}

}
}
}
}
}


