

#include "huaweicloud/gaussdb/v3/model/IntelligentKillSessionsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




IntelligentKillSessionsReq::IntelligentKillSessionsReq()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

IntelligentKillSessionsReq::~IntelligentKillSessionsReq() = default;

void IntelligentKillSessionsReq::validate()
{
}

web::json::value IntelligentKillSessionsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool IntelligentKillSessionsReq::fromJson(const web::json::value& val)
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
    return ok;
}


std::string IntelligentKillSessionsReq::getNodeId() const
{
    return nodeId_;
}

void IntelligentKillSessionsReq::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool IntelligentKillSessionsReq::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void IntelligentKillSessionsReq::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


