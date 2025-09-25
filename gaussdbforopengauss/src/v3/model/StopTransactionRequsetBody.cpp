

#include "huaweicloud/gaussdbforopengauss/v3/model/StopTransactionRequsetBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopTransactionRequsetBody::StopTransactionRequsetBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    sessionIdsIsSet_ = false;
}

StopTransactionRequsetBody::~StopTransactionRequsetBody() = default;

void StopTransactionRequsetBody::validate()
{
}

web::json::value StopTransactionRequsetBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(sessionIdsIsSet_) {
        val[utility::conversions::to_string_t("session_ids")] = ModelBase::toJson(sessionIds_);
    }

    return val;
}
bool StopTransactionRequsetBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionIds(refVal);
        }
    }
    return ok;
}


std::string StopTransactionRequsetBody::getNodeId() const
{
    return nodeId_;
}

void StopTransactionRequsetBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool StopTransactionRequsetBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void StopTransactionRequsetBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string StopTransactionRequsetBody::getComponentId() const
{
    return componentId_;
}

void StopTransactionRequsetBody::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool StopTransactionRequsetBody::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void StopTransactionRequsetBody::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::vector<int32_t>& StopTransactionRequsetBody::getSessionIds()
{
    return sessionIds_;
}

void StopTransactionRequsetBody::setSessionIds(std::vector<int32_t> value)
{
    sessionIds_ = value;
    sessionIdsIsSet_ = true;
}

bool StopTransactionRequsetBody::sessionIdsIsSet() const
{
    return sessionIdsIsSet_;
}

void StopTransactionRequsetBody::unsetsessionIds()
{
    sessionIdsIsSet_ = false;
}

}
}
}
}
}


