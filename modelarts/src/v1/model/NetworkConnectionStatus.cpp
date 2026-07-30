

#include "huaweicloud/modelarts/v1/model/NetworkConnectionStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkConnectionStatus::NetworkConnectionStatus()
{
    peerConnectionStatusIsSet_ = false;
    sfsTurboStatusIsSet_ = false;
}

NetworkConnectionStatus::~NetworkConnectionStatus() = default;

void NetworkConnectionStatus::validate()
{
}

web::json::value NetworkConnectionStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peerConnectionStatusIsSet_) {
        val[utility::conversions::to_string_t("peerConnectionStatus")] = ModelBase::toJson(peerConnectionStatus_);
    }
    if(sfsTurboStatusIsSet_) {
        val[utility::conversions::to_string_t("sfsTurboStatus")] = ModelBase::toJson(sfsTurboStatus_);
    }

    return val;
}
bool NetworkConnectionStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("peerConnectionStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peerConnectionStatus"));
        if(!fieldValue.is_null())
        {
            std::vector<PeerConnectionStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeerConnectionStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sfsTurboStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sfsTurboStatus"));
        if(!fieldValue.is_null())
        {
            std::vector<SfsTurboConnectionStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSfsTurboStatus(refVal);
        }
    }
    return ok;
}


std::vector<PeerConnectionStatus>& NetworkConnectionStatus::getPeerConnectionStatus()
{
    return peerConnectionStatus_;
}

void NetworkConnectionStatus::setPeerConnectionStatus(const std::vector<PeerConnectionStatus>& value)
{
    peerConnectionStatus_ = value;
    peerConnectionStatusIsSet_ = true;
}

bool NetworkConnectionStatus::peerConnectionStatusIsSet() const
{
    return peerConnectionStatusIsSet_;
}

void NetworkConnectionStatus::unsetpeerConnectionStatus()
{
    peerConnectionStatusIsSet_ = false;
}

std::vector<SfsTurboConnectionStatus>& NetworkConnectionStatus::getSfsTurboStatus()
{
    return sfsTurboStatus_;
}

void NetworkConnectionStatus::setSfsTurboStatus(const std::vector<SfsTurboConnectionStatus>& value)
{
    sfsTurboStatus_ = value;
    sfsTurboStatusIsSet_ = true;
}

bool NetworkConnectionStatus::sfsTurboStatusIsSet() const
{
    return sfsTurboStatusIsSet_;
}

void NetworkConnectionStatus::unsetsfsTurboStatus()
{
    sfsTurboStatusIsSet_ = false;
}

}
}
}
}
}


