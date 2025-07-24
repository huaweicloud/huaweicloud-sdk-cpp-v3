

#include "huaweicloud/cloudtest/v1/model/ScenePageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ScenePageParam::ScenePageParam()
{
    deleted_ = "";
    deletedIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ScenePageParam::~ScenePageParam() = default;

void ScenePageParam::validate()
{
}

web::json::value ScenePageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ScenePageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mindmap_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmapId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ScenePageParam::getDeleted() const
{
    return deleted_;
}

void ScenePageParam::setDeleted(const std::string& value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool ScenePageParam::deletedIsSet() const
{
    return deletedIsSet_;
}

void ScenePageParam::unsetdeleted()
{
    deletedIsSet_ = false;
}

int32_t ScenePageParam::getLimit() const
{
    return limit_;
}

void ScenePageParam::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ScenePageParam::limitIsSet() const
{
    return limitIsSet_;
}

void ScenePageParam::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ScenePageParam::getMindmapId() const
{
    return mindmapId_;
}

void ScenePageParam::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool ScenePageParam::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void ScenePageParam::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string ScenePageParam::getNodeId() const
{
    return nodeId_;
}

void ScenePageParam::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ScenePageParam::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ScenePageParam::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t ScenePageParam::getOffset() const
{
    return offset_;
}

void ScenePageParam::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ScenePageParam::offsetIsSet() const
{
    return offsetIsSet_;
}

void ScenePageParam::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


