

#include "huaweicloud/kms/v2/model/ShowKeyUsageFlowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyUsageFlowResponse::ShowKeyUsageFlowResponse()
{
    nodesIsSet_ = false;
    edgesIsSet_ = false;
}

ShowKeyUsageFlowResponse::~ShowKeyUsageFlowResponse() = default;

void ShowKeyUsageFlowResponse::validate()
{
}

web::json::value ShowKeyUsageFlowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(edgesIsSet_) {
        val[utility::conversions::to_string_t("edges")] = ModelBase::toJson(edges_);
    }

    return val;
}
bool ShowKeyUsageFlowResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowKeyUsageFlowResponseBody_nodes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("edges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edges"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowKeyUsageFlowResponseBody_edges> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEdges(refVal);
        }
    }
    return ok;
}


std::vector<ShowKeyUsageFlowResponseBody_nodes>& ShowKeyUsageFlowResponse::getNodes()
{
    return nodes_;
}

void ShowKeyUsageFlowResponse::setNodes(const std::vector<ShowKeyUsageFlowResponseBody_nodes>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ShowKeyUsageFlowResponse::nodesIsSet() const
{
    return nodesIsSet_;
}

void ShowKeyUsageFlowResponse::unsetnodes()
{
    nodesIsSet_ = false;
}

std::vector<ShowKeyUsageFlowResponseBody_edges>& ShowKeyUsageFlowResponse::getEdges()
{
    return edges_;
}

void ShowKeyUsageFlowResponse::setEdges(const std::vector<ShowKeyUsageFlowResponseBody_edges>& value)
{
    edges_ = value;
    edgesIsSet_ = true;
}

bool ShowKeyUsageFlowResponse::edgesIsSet() const
{
    return edgesIsSet_;
}

void ShowKeyUsageFlowResponse::unsetedges()
{
    edgesIsSet_ = false;
}

}
}
}
}
}


