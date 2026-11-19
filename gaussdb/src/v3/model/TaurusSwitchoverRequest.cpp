

#include "huaweicloud/gaussdb/v3/model/TaurusSwitchoverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TaurusSwitchoverRequest::TaurusSwitchoverRequest()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    force_ = false;
    forceIsSet_ = false;
}

TaurusSwitchoverRequest::~TaurusSwitchoverRequest() = default;

void TaurusSwitchoverRequest::validate()
{
}

web::json::value TaurusSwitchoverRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(forceIsSet_) {
        val[utility::conversions::to_string_t("force")] = ModelBase::toJson(force_);
    }

    return val;
}
bool TaurusSwitchoverRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForce(refVal);
        }
    }
    return ok;
}


std::string TaurusSwitchoverRequest::getNodeId() const
{
    return nodeId_;
}

void TaurusSwitchoverRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool TaurusSwitchoverRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void TaurusSwitchoverRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

bool TaurusSwitchoverRequest::isForce() const
{
    return force_;
}

void TaurusSwitchoverRequest::setForce(bool value)
{
    force_ = value;
    forceIsSet_ = true;
}

bool TaurusSwitchoverRequest::forceIsSet() const
{
    return forceIsSet_;
}

void TaurusSwitchoverRequest::unsetforce()
{
    forceIsSet_ = false;
}

}
}
}
}
}


