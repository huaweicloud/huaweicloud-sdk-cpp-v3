

#include "huaweicloud/cloudtest/v1/model/ReviewPageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ReviewPageParam::ReviewPageParam()
{
    deleted_ = "";
    deletedIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeValue_ = "";
    nodeValueIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ReviewPageParam::~ReviewPageParam() = default;

void ReviewPageParam::validate()
{
}

web::json::value ReviewPageParam::toJson() const
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
    if(nodeValueIsSet_) {
        val[utility::conversions::to_string_t("node_value")] = ModelBase::toJson(nodeValue_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ReviewPageParam::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ReviewPageParam::getDeleted() const
{
    return deleted_;
}

void ReviewPageParam::setDeleted(const std::string& value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool ReviewPageParam::deletedIsSet() const
{
    return deletedIsSet_;
}

void ReviewPageParam::unsetdeleted()
{
    deletedIsSet_ = false;
}

int32_t ReviewPageParam::getLimit() const
{
    return limit_;
}

void ReviewPageParam::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ReviewPageParam::limitIsSet() const
{
    return limitIsSet_;
}

void ReviewPageParam::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ReviewPageParam::getMindmapId() const
{
    return mindmapId_;
}

void ReviewPageParam::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool ReviewPageParam::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void ReviewPageParam::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string ReviewPageParam::getNodeId() const
{
    return nodeId_;
}

void ReviewPageParam::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ReviewPageParam::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ReviewPageParam::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ReviewPageParam::getNodeValue() const
{
    return nodeValue_;
}

void ReviewPageParam::setNodeValue(const std::string& value)
{
    nodeValue_ = value;
    nodeValueIsSet_ = true;
}

bool ReviewPageParam::nodeValueIsSet() const
{
    return nodeValueIsSet_;
}

void ReviewPageParam::unsetnodeValue()
{
    nodeValueIsSet_ = false;
}

int32_t ReviewPageParam::getOffset() const
{
    return offset_;
}

void ReviewPageParam::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ReviewPageParam::offsetIsSet() const
{
    return offsetIsSet_;
}

void ReviewPageParam::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ReviewPageParam::getStatus() const
{
    return status_;
}

void ReviewPageParam::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReviewPageParam::statusIsSet() const
{
    return statusIsSet_;
}

void ReviewPageParam::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ReviewPageParam::getType() const
{
    return type_;
}

void ReviewPageParam::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ReviewPageParam::typeIsSet() const
{
    return typeIsSet_;
}

void ReviewPageParam::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


