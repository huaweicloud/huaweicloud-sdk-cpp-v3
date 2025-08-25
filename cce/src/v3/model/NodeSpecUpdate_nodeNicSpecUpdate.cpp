

#include "huaweicloud/cce/v3/model/NodeSpecUpdate_nodeNicSpecUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeSpecUpdate_nodeNicSpecUpdate::NodeSpecUpdate_nodeNicSpecUpdate()
{
    primaryNicIsSet_ = false;
}

NodeSpecUpdate_nodeNicSpecUpdate::~NodeSpecUpdate_nodeNicSpecUpdate() = default;

void NodeSpecUpdate_nodeNicSpecUpdate::validate()
{
}

web::json::value NodeSpecUpdate_nodeNicSpecUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(primaryNicIsSet_) {
        val[utility::conversions::to_string_t("primaryNic")] = ModelBase::toJson(primaryNic_);
    }

    return val;
}
bool NodeSpecUpdate_nodeNicSpecUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("primaryNic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primaryNic"));
        if(!fieldValue.is_null())
        {
            NodeSpecUpdate_nodeNicSpecUpdate_primaryNic refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryNic(refVal);
        }
    }
    return ok;
}


NodeSpecUpdate_nodeNicSpecUpdate_primaryNic NodeSpecUpdate_nodeNicSpecUpdate::getPrimaryNic() const
{
    return primaryNic_;
}

void NodeSpecUpdate_nodeNicSpecUpdate::setPrimaryNic(const NodeSpecUpdate_nodeNicSpecUpdate_primaryNic& value)
{
    primaryNic_ = value;
    primaryNicIsSet_ = true;
}

bool NodeSpecUpdate_nodeNicSpecUpdate::primaryNicIsSet() const
{
    return primaryNicIsSet_;
}

void NodeSpecUpdate_nodeNicSpecUpdate::unsetprimaryNic()
{
    primaryNicIsSet_ = false;
}

}
}
}
}
}


