

#include "huaweicloud/modelarts/v1/model/NetworkConnection.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkConnection::NetworkConnection()
{
    peerConnectionListIsSet_ = false;
}

NetworkConnection::~NetworkConnection() = default;

void NetworkConnection::validate()
{
}

web::json::value NetworkConnection::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peerConnectionListIsSet_) {
        val[utility::conversions::to_string_t("peerConnectionList")] = ModelBase::toJson(peerConnectionList_);
    }

    return val;
}
bool NetworkConnection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("peerConnectionList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peerConnectionList"));
        if(!fieldValue.is_null())
        {
            std::vector<PeerConnectionItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeerConnectionList(refVal);
        }
    }
    return ok;
}


std::vector<PeerConnectionItem>& NetworkConnection::getPeerConnectionList()
{
    return peerConnectionList_;
}

void NetworkConnection::setPeerConnectionList(const std::vector<PeerConnectionItem>& value)
{
    peerConnectionList_ = value;
    peerConnectionListIsSet_ = true;
}

bool NetworkConnection::peerConnectionListIsSet() const
{
    return peerConnectionListIsSet_;
}

void NetworkConnection::unsetpeerConnectionList()
{
    peerConnectionListIsSet_ = false;
}

}
}
}
}
}


