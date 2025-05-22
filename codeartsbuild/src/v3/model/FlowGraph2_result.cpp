

#include "huaweicloud/codeartsbuild/v3/model/FlowGraph2_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




FlowGraph2_result::FlowGraph2_result()
{
    edgesIsSet_ = false;
    verticesIsSet_ = false;
}

FlowGraph2_result::~FlowGraph2_result() = default;

void FlowGraph2_result::validate()
{
}

web::json::value FlowGraph2_result::toJson() const
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
bool FlowGraph2_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("edges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edges"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowGraph2_result_edges> refVal;
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


std::vector<FlowGraph2_result_edges>& FlowGraph2_result::getEdges()
{
    return edges_;
}

void FlowGraph2_result::setEdges(const std::vector<FlowGraph2_result_edges>& value)
{
    edges_ = value;
    edgesIsSet_ = true;
}

bool FlowGraph2_result::edgesIsSet() const
{
    return edgesIsSet_;
}

void FlowGraph2_result::unsetedges()
{
    edgesIsSet_ = false;
}

std::vector<Vertices>& FlowGraph2_result::getVertices()
{
    return vertices_;
}

void FlowGraph2_result::setVertices(const std::vector<Vertices>& value)
{
    vertices_ = value;
    verticesIsSet_ = true;
}

bool FlowGraph2_result::verticesIsSet() const
{
    return verticesIsSet_;
}

void FlowGraph2_result::unsetvertices()
{
    verticesIsSet_ = false;
}

}
}
}
}
}


