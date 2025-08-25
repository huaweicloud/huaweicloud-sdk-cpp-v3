

#include "huaweicloud/cce/v3/model/NodeSpecUpdate_nodeNicSpecUpdate_primaryNic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::NodeSpecUpdate_nodeNicSpecUpdate_primaryNic()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    subnetListIsSet_ = false;
}

NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::~NodeSpecUpdate_nodeNicSpecUpdate_primaryNic() = default;

void NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::validate()
{
}

web::json::value NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnetId")] = ModelBase::toJson(subnetId_);
    }
    if(subnetListIsSet_) {
        val[utility::conversions::to_string_t("subnetList")] = ModelBase::toJson(subnetList_);
    }

    return val;
}
bool NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnetId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnetId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnetList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnetList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetList(refVal);
        }
    }
    return ok;
}


std::string NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::getSubnetId() const
{
    return subnetId_;
}

void NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::vector<std::string>& NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::getSubnetList()
{
    return subnetList_;
}

void NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::setSubnetList(const std::vector<std::string>& value)
{
    subnetList_ = value;
    subnetListIsSet_ = true;
}

bool NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::subnetListIsSet() const
{
    return subnetListIsSet_;
}

void NodeSpecUpdate_nodeNicSpecUpdate_primaryNic::unsetsubnetList()
{
    subnetListIsSet_ = false;
}

}
}
}
}
}


