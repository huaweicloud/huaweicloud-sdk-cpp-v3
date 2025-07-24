

#include "huaweicloud/cloudtest/v1/model/TestPointPageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPointPageParam::TestPointPageParam()
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

TestPointPageParam::~TestPointPageParam() = default;

void TestPointPageParam::validate()
{
}

web::json::value TestPointPageParam::toJson() const
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
bool TestPointPageParam::fromJson(const web::json::value& val)
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


std::string TestPointPageParam::getDeleted() const
{
    return deleted_;
}

void TestPointPageParam::setDeleted(const std::string& value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool TestPointPageParam::deletedIsSet() const
{
    return deletedIsSet_;
}

void TestPointPageParam::unsetdeleted()
{
    deletedIsSet_ = false;
}

int32_t TestPointPageParam::getLimit() const
{
    return limit_;
}

void TestPointPageParam::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool TestPointPageParam::limitIsSet() const
{
    return limitIsSet_;
}

void TestPointPageParam::unsetlimit()
{
    limitIsSet_ = false;
}

std::string TestPointPageParam::getMindmapId() const
{
    return mindmapId_;
}

void TestPointPageParam::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool TestPointPageParam::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void TestPointPageParam::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string TestPointPageParam::getNodeId() const
{
    return nodeId_;
}

void TestPointPageParam::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool TestPointPageParam::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void TestPointPageParam::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t TestPointPageParam::getOffset() const
{
    return offset_;
}

void TestPointPageParam::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool TestPointPageParam::offsetIsSet() const
{
    return offsetIsSet_;
}

void TestPointPageParam::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


