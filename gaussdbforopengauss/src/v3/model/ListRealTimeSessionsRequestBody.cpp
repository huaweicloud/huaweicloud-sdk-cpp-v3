

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRealTimeSessionsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRealTimeSessionsRequestBody::ListRealTimeSessionsRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    queryInfoIsSet_ = false;
}

ListRealTimeSessionsRequestBody::~ListRealTimeSessionsRequestBody() = default;

void ListRealTimeSessionsRequestBody::validate()
{
}

web::json::value ListRealTimeSessionsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(queryInfoIsSet_) {
        val[utility::conversions::to_string_t("query_info")] = ModelBase::toJson(queryInfo_);
    }

    return val;
}
bool ListRealTimeSessionsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_info"));
        if(!fieldValue.is_null())
        {
            SessionQueryInfoOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryInfo(refVal);
        }
    }
    return ok;
}


std::string ListRealTimeSessionsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListRealTimeSessionsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListRealTimeSessionsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListRealTimeSessionsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListRealTimeSessionsRequestBody::getComponentId() const
{
    return componentId_;
}

void ListRealTimeSessionsRequestBody::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ListRealTimeSessionsRequestBody::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ListRealTimeSessionsRequestBody::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

SessionQueryInfoOption ListRealTimeSessionsRequestBody::getQueryInfo() const
{
    return queryInfo_;
}

void ListRealTimeSessionsRequestBody::setQueryInfo(const SessionQueryInfoOption& value)
{
    queryInfo_ = value;
    queryInfoIsSet_ = true;
}

bool ListRealTimeSessionsRequestBody::queryInfoIsSet() const
{
    return queryInfoIsSet_;
}

void ListRealTimeSessionsRequestBody::unsetqueryInfo()
{
    queryInfoIsSet_ = false;
}

}
}
}
}
}


