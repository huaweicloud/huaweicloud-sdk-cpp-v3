

#include "huaweicloud/codeartsbuild/v3/model/FlowGraph_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




FlowGraph_result::FlowGraph_result()
{
    edgesIsSet_ = false;
    verticesIsSet_ = false;
}

FlowGraph_result::~FlowGraph_result() = default;

void FlowGraph_result::validate()
{
}

web::json::value FlowGraph_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(edgesIsSet_) {
        val[utility::conversions::to_string_t("edges")] = ModelBase::toJson(edges_);
    }
    if(verticesIsSet_) {
        val[utility::conversions::to_string_t("vertices")] = ModelBase::toJson(vertices_);
    }

    return val;
}
bool FlowGraph_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("edges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edges"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowGraph_result_edges> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEdges(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vertices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vertices"));
        if(!fieldValue.is_null())
        {
            std::vector<Vertices> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVertices(refVal);
        }
    }
    return ok;
}


std::vector<FlowGraph_result_edges>& FlowGraph_result::getEdges()
{
    return edges_;
}

void FlowGraph_result::setEdges(const std::vector<FlowGraph_result_edges>& value)
{
    edges_ = value;
    edgesIsSet_ = true;
}

bool FlowGraph_result::edgesIsSet() const
{
    return edgesIsSet_;
}

void FlowGraph_result::unsetedges()
{
    edgesIsSet_ = false;
}

std::vector<Vertices>& FlowGraph_result::getVertices()
{
    return vertices_;
}

void FlowGraph_result::setVertices(const std::vector<Vertices>& value)
{
    vertices_ = value;
    verticesIsSet_ = true;
}

bool FlowGraph_result::verticesIsSet() const
{
    return verticesIsSet_;
}

void FlowGraph_result::unsetvertices()
{
    verticesIsSet_ = false;
}

}
}
}
}
}


