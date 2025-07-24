

#include "huaweicloud/cloudtest/v1/model/MindmapBackup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




MindmapBackup::MindmapBackup()
{
    bakName_ = "";
    bakNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    creatorNum_ = "";
    creatorNumIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    memo_ = "";
    memoIsSet_ = false;
    mindmap_ = "";
    mindmapIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

MindmapBackup::~MindmapBackup() = default;

void MindmapBackup::validate()
{
}

web::json::value MindmapBackup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bakNameIsSet_) {
        val[utility::conversions::to_string_t("bak_name")] = ModelBase::toJson(bakName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(creatorNumIsSet_) {
        val[utility::conversions::to_string_t("creator_num")] = ModelBase::toJson(creatorNum_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(memoIsSet_) {
        val[utility::conversions::to_string_t("memo")] = ModelBase::toJson(memo_);
    }
    if(mindmapIsSet_) {
        val[utility::conversions::to_string_t("mindmap")] = ModelBase::toJson(mindmap_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool MindmapBackup::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mindmap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmap(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string MindmapBackup::getBakName() const
{
    return bakName_;
}

void MindmapBackup::setBakName(const std::string& value)
{
    bakName_ = value;
    bakNameIsSet_ = true;
}

bool MindmapBackup::bakNameIsSet() const
{
    return bakNameIsSet_;
}

void MindmapBackup::unsetbakName()
{
    bakNameIsSet_ = false;
}

std::string MindmapBackup::getCreateTime() const
{
    return createTime_;
}

void MindmapBackup::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool MindmapBackup::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void MindmapBackup::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string MindmapBackup::getCreatorName() const
{
    return creatorName_;
}

void MindmapBackup::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool MindmapBackup::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void MindmapBackup::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string MindmapBackup::getCreatorNum() const
{
    return creatorNum_;
}

void MindmapBackup::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool MindmapBackup::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void MindmapBackup::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string MindmapBackup::getId() const
{
    return id_;
}

void MindmapBackup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MindmapBackup::idIsSet() const
{
    return idIsSet_;
}

void MindmapBackup::unsetid()
{
    idIsSet_ = false;
}

std::string MindmapBackup::getMemo() const
{
    return memo_;
}

void MindmapBackup::setMemo(const std::string& value)
{
    memo_ = value;
    memoIsSet_ = true;
}

bool MindmapBackup::memoIsSet() const
{
    return memoIsSet_;
}

void MindmapBackup::unsetmemo()
{
    memoIsSet_ = false;
}

std::string MindmapBackup::getMindmap() const
{
    return mindmap_;
}

void MindmapBackup::setMindmap(const std::string& value)
{
    mindmap_ = value;
    mindmapIsSet_ = true;
}

bool MindmapBackup::mindmapIsSet() const
{
    return mindmapIsSet_;
}

void MindmapBackup::unsetmindmap()
{
    mindmapIsSet_ = false;
}

std::string MindmapBackup::getMindmapId() const
{
    return mindmapId_;
}

void MindmapBackup::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool MindmapBackup::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void MindmapBackup::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string MindmapBackup::getType() const
{
    return type_;
}

void MindmapBackup::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MindmapBackup::typeIsSet() const
{
    return typeIsSet_;
}

void MindmapBackup::unsettype()
{
    typeIsSet_ = false;
}

std::string MindmapBackup::getUpdateTime() const
{
    return updateTime_;
}

void MindmapBackup::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool MindmapBackup::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void MindmapBackup::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


