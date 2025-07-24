

#include "huaweicloud/cloudtest/v1/model/TestPoint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPoint::TestPoint()
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
    groupId_ = "";
    groupIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    requirementId_ = "";
    requirementIdIsSet_ = false;
    requirementName_ = "";
    requirementNameIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusType_ = "";
    statusTypeIsSet_ = false;
    tcCounts_ = "";
    tcCountsIsSet_ = false;
    testCases_ = "";
    testCasesIsSet_ = false;
    updateName_ = "";
    updateNameIsSet_ = false;
    updateNum_ = "";
    updateNumIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

TestPoint::~TestPoint() = default;

void TestPoint::validate()
{
}

web::json::value TestPoint::toJson() const
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
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
    if(requirementIdIsSet_) {
        val[utility::conversions::to_string_t("requirement_id")] = ModelBase::toJson(requirementId_);
    }
    if(requirementNameIsSet_) {
        val[utility::conversions::to_string_t("requirement_name")] = ModelBase::toJson(requirementName_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
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
    if(updateNameIsSet_) {
        val[utility::conversions::to_string_t("update_name")] = ModelBase::toJson(updateName_);
    }
    if(updateNumIsSet_) {
        val[utility::conversions::to_string_t("update_num")] = ModelBase::toJson(updateNum_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool TestPoint::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("requirement_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requirement_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequirementId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("requirement_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requirement_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequirementName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string TestPoint::getApp() const
{
    return app_;
}

void TestPoint::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool TestPoint::appIsSet() const
{
    return appIsSet_;
}

void TestPoint::unsetapp()
{
    appIsSet_ = false;
}

std::string TestPoint::getCreateTime() const
{
    return createTime_;
}

void TestPoint::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TestPoint::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TestPoint::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TestPoint::getCreatorName() const
{
    return creatorName_;
}

void TestPoint::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TestPoint::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TestPoint::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string TestPoint::getCreatorNum() const
{
    return creatorNum_;
}

void TestPoint::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool TestPoint::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void TestPoint::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

std::string TestPoint::getDeleteTime() const
{
    return deleteTime_;
}

void TestPoint::setDeleteTime(const std::string& value)
{
    deleteTime_ = value;
    deleteTimeIsSet_ = true;
}

bool TestPoint::deleteTimeIsSet() const
{
    return deleteTimeIsSet_;
}

void TestPoint::unsetdeleteTime()
{
    deleteTimeIsSet_ = false;
}

std::string TestPoint::getDeleted() const
{
    return deleted_;
}

void TestPoint::setDeleted(const std::string& value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool TestPoint::deletedIsSet() const
{
    return deletedIsSet_;
}

void TestPoint::unsetdeleted()
{
    deletedIsSet_ = false;
}

std::string TestPoint::getGroupId() const
{
    return groupId_;
}

void TestPoint::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool TestPoint::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void TestPoint::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string TestPoint::getId() const
{
    return id_;
}

void TestPoint::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TestPoint::idIsSet() const
{
    return idIsSet_;
}

void TestPoint::unsetid()
{
    idIsSet_ = false;
}

std::string TestPoint::getMindmapId() const
{
    return mindmapId_;
}

void TestPoint::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool TestPoint::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void TestPoint::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string TestPoint::getName() const
{
    return name_;
}

void TestPoint::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestPoint::nameIsSet() const
{
    return nameIsSet_;
}

void TestPoint::unsetname()
{
    nameIsSet_ = false;
}

std::string TestPoint::getNodeId() const
{
    return nodeId_;
}

void TestPoint::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool TestPoint::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void TestPoint::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string TestPoint::getRequirementId() const
{
    return requirementId_;
}

void TestPoint::setRequirementId(const std::string& value)
{
    requirementId_ = value;
    requirementIdIsSet_ = true;
}

bool TestPoint::requirementIdIsSet() const
{
    return requirementIdIsSet_;
}

void TestPoint::unsetrequirementId()
{
    requirementIdIsSet_ = false;
}

std::string TestPoint::getRequirementName() const
{
    return requirementName_;
}

void TestPoint::setRequirementName(const std::string& value)
{
    requirementName_ = value;
    requirementNameIsSet_ = true;
}

bool TestPoint::requirementNameIsSet() const
{
    return requirementNameIsSet_;
}

void TestPoint::unsetrequirementName()
{
    requirementNameIsSet_ = false;
}

std::string TestPoint::getServiceId() const
{
    return serviceId_;
}

void TestPoint::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool TestPoint::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void TestPoint::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string TestPoint::getStatus() const
{
    return status_;
}

void TestPoint::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TestPoint::statusIsSet() const
{
    return statusIsSet_;
}

void TestPoint::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TestPoint::getStatusType() const
{
    return statusType_;
}

void TestPoint::setStatusType(const std::string& value)
{
    statusType_ = value;
    statusTypeIsSet_ = true;
}

bool TestPoint::statusTypeIsSet() const
{
    return statusTypeIsSet_;
}

void TestPoint::unsetstatusType()
{
    statusTypeIsSet_ = false;
}

std::string TestPoint::getTcCounts() const
{
    return tcCounts_;
}

void TestPoint::setTcCounts(const std::string& value)
{
    tcCounts_ = value;
    tcCountsIsSet_ = true;
}

bool TestPoint::tcCountsIsSet() const
{
    return tcCountsIsSet_;
}

void TestPoint::unsettcCounts()
{
    tcCountsIsSet_ = false;
}

std::string TestPoint::getTestCases() const
{
    return testCases_;
}

void TestPoint::setTestCases(const std::string& value)
{
    testCases_ = value;
    testCasesIsSet_ = true;
}

bool TestPoint::testCasesIsSet() const
{
    return testCasesIsSet_;
}

void TestPoint::unsettestCases()
{
    testCasesIsSet_ = false;
}

std::string TestPoint::getUpdateName() const
{
    return updateName_;
}

void TestPoint::setUpdateName(const std::string& value)
{
    updateName_ = value;
    updateNameIsSet_ = true;
}

bool TestPoint::updateNameIsSet() const
{
    return updateNameIsSet_;
}

void TestPoint::unsetupdateName()
{
    updateNameIsSet_ = false;
}

std::string TestPoint::getUpdateNum() const
{
    return updateNum_;
}

void TestPoint::setUpdateNum(const std::string& value)
{
    updateNum_ = value;
    updateNumIsSet_ = true;
}

bool TestPoint::updateNumIsSet() const
{
    return updateNumIsSet_;
}

void TestPoint::unsetupdateNum()
{
    updateNumIsSet_ = false;
}

std::string TestPoint::getUpdateTime() const
{
    return updateTime_;
}

void TestPoint::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TestPoint::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TestPoint::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string TestPoint::getVersion() const
{
    return version_;
}

void TestPoint::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool TestPoint::versionIsSet() const
{
    return versionIsSet_;
}

void TestPoint::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


