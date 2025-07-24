

#include "huaweicloud/cloudtest/v1/model/Scene.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




Scene::Scene()
{
    app_ = "";
    appIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    creatorNum_ = "";
    creatorNumIsSet_ = false;
    deleteTime_ = "";
    deleteTimeIsSet_ = false;
    deleted_ = "";
    deletedIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusType_ = "";
    statusTypeIsSet_ = false;
    tcCounts_ = "";
    tcCountsIsSet_ = false;
    testCases_ = "";
    testCasesIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

Scene::~Scene() = default;

void Scene::validate()
{
}

web::json::value Scene::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
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
    if(deleteTimeIsSet_) {
        val[utility::conversions::to_string_t("delete_time")] = ModelBase::toJson(deleteTime_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusTypeIsSet_) {
        val[utility::conversions::to_string_t("status_type")] = ModelBase::toJson(statusType_);
    }
    if(tcCountsIsSet_) {
        val[utility::conversions::to_string_t("tc_counts")] = ModelBase::toJson(tcCounts_);
    }
    if(testCasesIsSet_) {
        val[utility::conversions::to_string_t("test_cases")] = ModelBase::toJson(testCases_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool Scene::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("delete_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mindmap_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmapId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tc_counts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tc_counts"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTcCounts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_cases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_cases"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCases(refVal);
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


std::string Scene::getApp() const
{
    return app_;
}

void Scene::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool Scene::appIsSet() const
{
    return appIsSet_;
}

void Scene::unsetapp()
{
    appIsSet_ = false;
}

std::string Scene::getCreateTime() const
{
    return createTime_;
}

void Scene::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Scene::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Scene::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Scene::getCreatorName() const
{
    return creatorName_;
}

void Scene::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool Scene::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void Scene::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string Scene::getCreatorNum() const
{
    return creatorNum_;
}

void Scene::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool Scene::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void Scene::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string Scene::getDeleteTime() const
{
    return deleteTime_;
}

void Scene::setDeleteTime(const std::string& value)
{
    deleteTime_ = value;
    deleteTimeIsSet_ = true;
}

bool Scene::deleteTimeIsSet() const
{
    return deleteTimeIsSet_;
}

void Scene::unsetdeleteTime()
{
    deleteTimeIsSet_ = false;
}

std::string Scene::getDeleted() const
{
    return deleted_;
}

void Scene::setDeleted(const std::string& value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool Scene::deletedIsSet() const
{
    return deletedIsSet_;
}

void Scene::unsetdeleted()
{
    deletedIsSet_ = false;
}

std::string Scene::getId() const
{
    return id_;
}

void Scene::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Scene::idIsSet() const
{
    return idIsSet_;
}

void Scene::unsetid()
{
    idIsSet_ = false;
}

std::string Scene::getMindmapId() const
{
    return mindmapId_;
}

void Scene::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool Scene::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void Scene::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string Scene::getName() const
{
    return name_;
}

void Scene::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Scene::nameIsSet() const
{
    return nameIsSet_;
}

void Scene::unsetname()
{
    nameIsSet_ = false;
}

std::string Scene::getNodeId() const
{
    return nodeId_;
}

void Scene::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool Scene::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void Scene::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string Scene::getStatus() const
{
    return status_;
}

void Scene::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Scene::statusIsSet() const
{
    return statusIsSet_;
}

void Scene::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Scene::getStatusType() const
{
    return statusType_;
}

void Scene::setStatusType(const std::string& value)
{
    statusType_ = value;
    statusTypeIsSet_ = true;
}

bool Scene::statusTypeIsSet() const
{
    return statusTypeIsSet_;
}

void Scene::unsetstatusType()
{
    statusTypeIsSet_ = false;
}

std::string Scene::getTcCounts() const
{
    return tcCounts_;
}

void Scene::setTcCounts(const std::string& value)
{
    tcCounts_ = value;
    tcCountsIsSet_ = true;
}

bool Scene::tcCountsIsSet() const
{
    return tcCountsIsSet_;
}

void Scene::unsettcCounts()
{
    tcCountsIsSet_ = false;
}

std::string Scene::getTestCases() const
{
    return testCases_;
}

void Scene::setTestCases(const std::string& value)
{
    testCases_ = value;
    testCasesIsSet_ = true;
}

bool Scene::testCasesIsSet() const
{
    return testCasesIsSet_;
}

void Scene::unsettestCases()
{
    testCasesIsSet_ = false;
}

std::string Scene::getUpdateTime() const
{
    return updateTime_;
}

void Scene::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool Scene::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void Scene::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


