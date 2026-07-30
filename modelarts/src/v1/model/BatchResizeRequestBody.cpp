

#include "huaweicloud/modelarts/v1/model/BatchResizeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchResizeRequestBody::BatchResizeRequestBody()
{
    nodesIsSet_ = false;
    sourceIsSet_ = false;
    targetIsSet_ = false;
}

BatchResizeRequestBody::~BatchResizeRequestBody() = default;

void BatchResizeRequestBody::validate()
{
}

web::json::value BatchResizeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }

    return val;
}
bool BatchResizeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<ResizeNodeInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            NodeResizeParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            NodeResizeParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    return ok;
}


std::vector<ResizeNodeInfo>& BatchResizeRequestBody::getNodes()
{
    return nodes_;
}

void BatchResizeRequestBody::setNodes(const std::vector<ResizeNodeInfo>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool BatchResizeRequestBody::nodesIsSet() const
{
    return nodesIsSet_;
}

void BatchResizeRequestBody::unsetnodes()
{
    nodesIsSet_ = false;
}

NodeResizeParams BatchResizeRequestBody::getSource() const
{
    return source_;
}

void BatchResizeRequestBody::setSource(const NodeResizeParams& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool BatchResizeRequestBody::sourceIsSet() const
{
    return sourceIsSet_;
}

void BatchResizeRequestBody::unsetsource()
{
    sourceIsSet_ = false;
}

NodeResizeParams BatchResizeRequestBody::getTarget() const
{
    return target_;
}

void BatchResizeRequestBody::setTarget(const NodeResizeParams& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool BatchResizeRequestBody::targetIsSet() const
{
    return targetIsSet_;
}

void BatchResizeRequestBody::unsettarget()
{
    targetIsSet_ = false;
}

}
}
}
}
}


