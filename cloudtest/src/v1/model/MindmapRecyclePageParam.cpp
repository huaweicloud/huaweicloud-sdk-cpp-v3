

#include "huaweicloud/cloudtest/v1/model/MindmapRecyclePageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




MindmapRecyclePageParam::MindmapRecyclePageParam()
{
    creatorNum_ = "";
    creatorNumIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    text_ = "";
    textIsSet_ = false;
}

MindmapRecyclePageParam::~MindmapRecyclePageParam() = default;

void MindmapRecyclePageParam::validate()
{
}

web::json::value MindmapRecyclePageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creatorNumIsSet_) {
        val[utility::conversions::to_string_t("creator_num")] = ModelBase::toJson(creatorNum_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }

    return val;
}
bool MindmapRecyclePageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creator_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    return ok;
}


std::string MindmapRecyclePageParam::getCreatorNum() const
{
    return creatorNum_;
}

void MindmapRecyclePageParam::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool MindmapRecyclePageParam::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void MindmapRecyclePageParam::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

int32_t MindmapRecyclePageParam::getLimit() const
{
    return limit_;
}

void MindmapRecyclePageParam::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool MindmapRecyclePageParam::limitIsSet() const
{
    return limitIsSet_;
}

void MindmapRecyclePageParam::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t MindmapRecyclePageParam::getOffset() const
{
    return offset_;
}

void MindmapRecyclePageParam::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool MindmapRecyclePageParam::offsetIsSet() const
{
    return offsetIsSet_;
}

void MindmapRecyclePageParam::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string MindmapRecyclePageParam::getProjectId() const
{
    return projectId_;
}

void MindmapRecyclePageParam::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool MindmapRecyclePageParam::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void MindmapRecyclePageParam::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string MindmapRecyclePageParam::getText() const
{
    return text_;
}

void MindmapRecyclePageParam::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool MindmapRecyclePageParam::textIsSet() const
{
    return textIsSet_;
}

void MindmapRecyclePageParam::unsettext()
{
    textIsSet_ = false;
}

}
}
}
}
}


