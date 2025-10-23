

#include "huaweicloud/rds/v3/model/ReplaceNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ReplaceNodeRequest::ReplaceNodeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    replaceAction_ = "";
    replaceActionIsSet_ = false;
}

ReplaceNodeRequest::~ReplaceNodeRequest() = default;

void ReplaceNodeRequest::validate()
{
}

web::json::value ReplaceNodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(replaceActionIsSet_) {
        val[utility::conversions::to_string_t("replace_action")] = ModelBase::toJson(replaceAction_);
    }

    return val;
}
bool ReplaceNodeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replace_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replace_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplaceAction(refVal);
        }
    }
    return ok;
}


std::string ReplaceNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void ReplaceNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ReplaceNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ReplaceNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ReplaceNodeRequest::getNodeId() const
{
    return nodeId_;
}

void ReplaceNodeRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ReplaceNodeRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ReplaceNodeRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ReplaceNodeRequest::getReplaceAction() const
{
    return replaceAction_;
}

void ReplaceNodeRequest::setReplaceAction(const std::string& value)
{
    replaceAction_ = value;
    replaceActionIsSet_ = true;
}

bool ReplaceNodeRequest::replaceActionIsSet() const
{
    return replaceActionIsSet_;
}

void ReplaceNodeRequest::unsetreplaceAction()
{
    replaceActionIsSet_ = false;
}

}
}
}
}
}


