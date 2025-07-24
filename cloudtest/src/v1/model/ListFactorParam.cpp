

#include "huaweicloud/cloudtest/v1/model/ListFactorParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListFactorParam::ListFactorParam()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    parentNodeIdsIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    creatorNum_ = "";
    creatorNumIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    testpointId_ = "";
    testpointIdIsSet_ = false;
    mindmapNodeId_ = "";
    mindmapNodeIdIsSet_ = false;
}

ListFactorParam::~ListFactorParam() = default;

void ListFactorParam::validate()
{
}

web::json::value ListFactorParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentNodeIdsIsSet_) {
        val[utility::conversions::to_string_t("parent_node_ids")] = ModelBase::toJson(parentNodeIds_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(creatorNumIsSet_) {
        val[utility::conversions::to_string_t("creator_num")] = ModelBase::toJson(creatorNum_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }
    if(testpointIdIsSet_) {
        val[utility::conversions::to_string_t("testpoint_id")] = ModelBase::toJson(testpointId_);
    }
    if(mindmapNodeIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_node_id")] = ModelBase::toJson(mindmapNodeId_);
    }

    return val;
}
bool ListFactorParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_node_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_node_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentNodeIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("testpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mindmap_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmapNodeId(refVal);
        }
    }
    return ok;
}


int32_t ListFactorParam::getOffset() const
{
    return offset_;
}

void ListFactorParam::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFactorParam::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFactorParam::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListFactorParam::getLimit() const
{
    return limit_;
}

void ListFactorParam::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFactorParam::limitIsSet() const
{
    return limitIsSet_;
}

void ListFactorParam::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListFactorParam::getType() const
{
    return type_;
}

void ListFactorParam::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListFactorParam::typeIsSet() const
{
    return typeIsSet_;
}

void ListFactorParam::unsettype()
{
    typeIsSet_ = false;
}

std::string ListFactorParam::getName() const
{
    return name_;
}

void ListFactorParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListFactorParam::nameIsSet() const
{
    return nameIsSet_;
}

void ListFactorParam::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& ListFactorParam::getParentNodeIds()
{
    return parentNodeIds_;
}

void ListFactorParam::setParentNodeIds(const std::vector<std::string>& value)
{
    parentNodeIds_ = value;
    parentNodeIdsIsSet_ = true;
}

bool ListFactorParam::parentNodeIdsIsSet() const
{
    return parentNodeIdsIsSet_;
}

void ListFactorParam::unsetparentNodeIds()
{
    parentNodeIdsIsSet_ = false;
}

std::string ListFactorParam::getAssetId() const
{
    return assetId_;
}

void ListFactorParam::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ListFactorParam::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ListFactorParam::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ListFactorParam::getCreatorNum() const
{
    return creatorNum_;
}

void ListFactorParam::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool ListFactorParam::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void ListFactorParam::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string ListFactorParam::getMindmapId() const
{
    return mindmapId_;
}

void ListFactorParam::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool ListFactorParam::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void ListFactorParam::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string ListFactorParam::getTestpointId() const
{
    return testpointId_;
}

void ListFactorParam::setTestpointId(const std::string& value)
{
    testpointId_ = value;
    testpointIdIsSet_ = true;
}

bool ListFactorParam::testpointIdIsSet() const
{
    return testpointIdIsSet_;
}

void ListFactorParam::unsettestpointId()
{
    testpointIdIsSet_ = false;
}

std::string ListFactorParam::getMindmapNodeId() const
{
    return mindmapNodeId_;
}

void ListFactorParam::setMindmapNodeId(const std::string& value)
{
    mindmapNodeId_ = value;
    mindmapNodeIdIsSet_ = true;
}

bool ListFactorParam::mindmapNodeIdIsSet() const
{
    return mindmapNodeIdIsSet_;
}

void ListFactorParam::unsetmindmapNodeId()
{
    mindmapNodeIdIsSet_ = false;
}

}
}
}
}
}


