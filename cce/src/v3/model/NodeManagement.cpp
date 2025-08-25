

#include "huaweicloud/cce/v3/model/NodeManagement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeManagement::NodeManagement()
{
    serverGroupReference_ = "";
    serverGroupReferenceIsSet_ = false;
}

NodeManagement::~NodeManagement() = default;

void NodeManagement::validate()
{
}

web::json::value NodeManagement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupReferenceIsSet_) {
        val[utility::conversions::to_string_t("serverGroupReference")] = ModelBase::toJson(serverGroupReference_);
    }

    return val;
}
bool NodeManagement::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("serverGroupReference"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverGroupReference"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupReference(refVal);
        }
    }
    return ok;
}


std::string NodeManagement::getServerGroupReference() const
{
    return serverGroupReference_;
}

void NodeManagement::setServerGroupReference(const std::string& value)
{
    serverGroupReference_ = value;
    serverGroupReferenceIsSet_ = true;
}

bool NodeManagement::serverGroupReferenceIsSet() const
{
    return serverGroupReferenceIsSet_;
}

void NodeManagement::unsetserverGroupReference()
{
    serverGroupReferenceIsSet_ = false;
}

}
}
}
}
}


