

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateClientNetworkRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateClientNetworkRequestBody::UpdateClientNetworkRequestBody()
{
    clientNetworkRangesIsSet_ = false;
}

UpdateClientNetworkRequestBody::~UpdateClientNetworkRequestBody() = default;

void UpdateClientNetworkRequestBody::validate()
{
}

web::json::value UpdateClientNetworkRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clientNetworkRangesIsSet_) {
        val[utility::conversions::to_string_t("client_network_ranges")] = ModelBase::toJson(clientNetworkRanges_);
    }

    return val;
}
bool UpdateClientNetworkRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& UpdateClientNetworkRequestBody::getClientNetworkRanges()
{
    return clientNetworkRanges_;
}

void UpdateClientNetworkRequestBody::setClientNetworkRanges(const std::vector<std::string>& value)
{
    clientNetworkRanges_ = value;
    clientNetworkRangesIsSet_ = true;
}

bool UpdateClientNetworkRequestBody::clientNetworkRangesIsSet() const
{
    return clientNetworkRangesIsSet_;
}

void UpdateClientNetworkRequestBody::unsetclientNetworkRanges()
{
    clientNetworkRangesIsSet_ = false;
}

}
}
}
}
}


