

#include "huaweicloud/cloudtest/v1/model/MindmapBackupPageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




MindmapBackupPageParam::MindmapBackupPageParam()
{
    bakName_ = "";
    bakNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

MindmapBackupPageParam::~MindmapBackupPageParam() = default;

void MindmapBackupPageParam::validate()
{
}

web::json::value MindmapBackupPageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bakNameIsSet_) {
        val[utility::conversions::to_string_t("bak_name")] = ModelBase::toJson(bakName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool MindmapBackupPageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bak_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bak_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBakName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mindmap_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmapId(refVal);
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


std::string MindmapBackupPageParam::getBakName() const
{
    return bakName_;
}

void MindmapBackupPageParam::setBakName(const std::string& value)
{
    bakName_ = value;
    bakNameIsSet_ = true;
}

bool MindmapBackupPageParam::bakNameIsSet() const
{
    return bakNameIsSet_;
}

void MindmapBackupPageParam::unsetbakName()
{
    bakNameIsSet_ = false;
}

int32_t MindmapBackupPageParam::getLimit() const
{
    return limit_;
}

void MindmapBackupPageParam::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool MindmapBackupPageParam::limitIsSet() const
{
    return limitIsSet_;
}

void MindmapBackupPageParam::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t MindmapBackupPageParam::getOffset() const
{
    return offset_;
}

void MindmapBackupPageParam::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool MindmapBackupPageParam::offsetIsSet() const
{
    return offsetIsSet_;
}

void MindmapBackupPageParam::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string MindmapBackupPageParam::getMindmapId() const
{
    return mindmapId_;
}

void MindmapBackupPageParam::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool MindmapBackupPageParam::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void MindmapBackupPageParam::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string MindmapBackupPageParam::getType() const
{
    return type_;
}

void MindmapBackupPageParam::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MindmapBackupPageParam::typeIsSet() const
{
    return typeIsSet_;
}

void MindmapBackupPageParam::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


