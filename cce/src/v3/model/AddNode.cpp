

#include "huaweicloud/cce/v3/model/AddNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddNode::AddNode()
{
    serverID_ = "";
    serverIDIsSet_ = false;
    specIsSet_ = false;
}

AddNode::~AddNode() = default;

void AddNode::validate()
{
}

web::json::value AddNode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIDIsSet_) {
        val[utility::conversions::to_string_t("serverID")] = ModelBase::toJson(serverID_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool AddNode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("serverID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            ReinstallNodeSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string AddNode::getServerID() const
{
    return serverID_;
}

void AddNode::setServerID(const std::string& value)
{
    serverID_ = value;
    serverIDIsSet_ = true;
}

bool AddNode::serverIDIsSet() const
{
    return serverIDIsSet_;
}

void AddNode::unsetserverID()
{
    serverIDIsSet_ = false;
}

ReinstallNodeSpec AddNode::getSpec() const
{
    return spec_;
}

void AddNode::setSpec(const ReinstallNodeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool AddNode::specIsSet() const
{
    return specIsSet_;
}

void AddNode::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


