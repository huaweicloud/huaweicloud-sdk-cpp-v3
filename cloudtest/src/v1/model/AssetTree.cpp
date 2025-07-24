

#include "huaweicloud/cloudtest/v1/model/AssetTree.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AssetTree::AssetTree()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    creatorNum_ = "";
    creatorNumIsSet_ = false;
    updateName_ = "";
    updateNameIsSet_ = false;
    updateNum_ = "";
    updateNumIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    factorCnt_ = 0;
    factorCntIsSet_ = false;
}

AssetTree::~AssetTree() = default;

void AssetTree::validate()
{
}

web::json::value AssetTree::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
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
    if(updateNameIsSet_) {
        val[utility::conversions::to_string_t("update_name")] = ModelBase::toJson(updateName_);
    }
    if(updateNumIsSet_) {
        val[utility::conversions::to_string_t("update_num")] = ModelBase::toJson(updateNum_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(factorCntIsSet_) {
        val[utility::conversions::to_string_t("factor_cnt")] = ModelBase::toJson(factorCnt_);
    }

    return val;
}
bool AssetTree::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
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
    if(val.has_field(utility::conversions::to_string_t("update_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("factor_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("factor_cnt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFactorCnt(refVal);
        }
    }
    return ok;
}


std::string AssetTree::getId() const
{
    return id_;
}

void AssetTree::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AssetTree::idIsSet() const
{
    return idIsSet_;
}

void AssetTree::unsetid()
{
    idIsSet_ = false;
}

std::string AssetTree::getName() const
{
    return name_;
}

void AssetTree::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AssetTree::nameIsSet() const
{
    return nameIsSet_;
}

void AssetTree::unsetname()
{
    nameIsSet_ = false;
}

std::string AssetTree::getProjectId() const
{
    return projectId_;
}

void AssetTree::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AssetTree::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AssetTree::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime AssetTree::getCreateTime() const
{
    return createTime_;
}

void AssetTree::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AssetTree::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AssetTree::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AssetTree::getCreatorName() const
{
    return creatorName_;
}

void AssetTree::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool AssetTree::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void AssetTree::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string AssetTree::getCreatorNum() const
{
    return creatorNum_;
}

void AssetTree::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool AssetTree::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void AssetTree::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string AssetTree::getUpdateName() const
{
    return updateName_;
}

void AssetTree::setUpdateName(const std::string& value)
{
    updateName_ = value;
    updateNameIsSet_ = true;
}

bool AssetTree::updateNameIsSet() const
{
    return updateNameIsSet_;
}

void AssetTree::unsetupdateName()
{
    updateNameIsSet_ = false;
}

std::string AssetTree::getUpdateNum() const
{
    return updateNum_;
}

void AssetTree::setUpdateNum(const std::string& value)
{
    updateNum_ = value;
    updateNumIsSet_ = true;
}

bool AssetTree::updateNumIsSet() const
{
    return updateNumIsSet_;
}

void AssetTree::unsetupdateNum()
{
    updateNumIsSet_ = false;
}

utility::datetime AssetTree::getUpdateTime() const
{
    return updateTime_;
}

void AssetTree::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AssetTree::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AssetTree::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string AssetTree::getAssetId() const
{
    return assetId_;
}

void AssetTree::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool AssetTree::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void AssetTree::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string AssetTree::getParentId() const
{
    return parentId_;
}

void AssetTree::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool AssetTree::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void AssetTree::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t AssetTree::getFactorCnt() const
{
    return factorCnt_;
}

void AssetTree::setFactorCnt(int32_t value)
{
    factorCnt_ = value;
    factorCntIsSet_ = true;
}

bool AssetTree::factorCntIsSet() const
{
    return factorCntIsSet_;
}

void AssetTree::unsetfactorCnt()
{
    factorCntIsSet_ = false;
}

}
}
}
}
}


