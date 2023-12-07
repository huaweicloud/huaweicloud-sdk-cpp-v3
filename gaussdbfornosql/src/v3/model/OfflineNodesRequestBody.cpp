

#include "huaweicloud/gaussdbfornosql/v3/model/OfflineNodesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




OfflineNodesRequestBody::OfflineNodesRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    nodeIdsIsSet_ = false;
}

OfflineNodesRequestBody::~OfflineNodesRequestBody() = default;

void OfflineNodesRequestBody::validate()
{
}

web::json::value OfflineNodesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(nodeIdsIsSet_) {
        val[utility::conversions::to_string_t("node_ids")] = ModelBase::toJson(nodeIds_);
    }

    return val;
}
bool OfflineNodesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIds(refVal);
        }
    }
    return ok;
}


std::string OfflineNodesRequestBody::getAction() const
{
    return action_;
}

void OfflineNodesRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool OfflineNodesRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void OfflineNodesRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<std::string>& OfflineNodesRequestBody::getNodeIds()
{
    return nodeIds_;
}

void OfflineNodesRequestBody::setNodeIds(const std::vector<std::string>& value)
{
    nodeIds_ = value;
    nodeIdsIsSet_ = true;
}

bool OfflineNodesRequestBody::nodeIdsIsSet() const
{
    return nodeIdsIsSet_;
}

void OfflineNodesRequestBody::unsetnodeIds()
{
    nodeIdsIsSet_ = false;
}

}
}
}
}
}


