

#include "huaweicloud/cloudtest/v1/model/TestCasePageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCasePageParam::TestCasePageParam()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    deleted_ = "";
    deletedIsSet_ = false;
    idCollectionIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeIdCollectionIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    isArchive_ = false;
    isArchiveIsSet_ = false;
    caseName_ = "";
    caseNameIsSet_ = false;
    hasSubMindmap_ = false;
    hasSubMindmapIsSet_ = false;
    subMindmapIdIsSet_ = false;
}

TestCasePageParam::~TestCasePageParam() = default;

void TestCasePageParam::validate()
{
}

web::json::value TestCasePageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(idCollectionIsSet_) {
        val[utility::conversions::to_string_t("id_collection")] = ModelBase::toJson(idCollection_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeIdCollectionIsSet_) {
        val[utility::conversions::to_string_t("node_id_collection")] = ModelBase::toJson(nodeIdCollection_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(isArchiveIsSet_) {
        val[utility::conversions::to_string_t("is_archive")] = ModelBase::toJson(isArchive_);
    }
    if(caseNameIsSet_) {
        val[utility::conversions::to_string_t("case_name")] = ModelBase::toJson(caseName_);
    }
    if(hasSubMindmapIsSet_) {
        val[utility::conversions::to_string_t("has_sub_mindmap")] = ModelBase::toJson(hasSubMindmap_);
    }
    if(subMindmapIdIsSet_) {
        val[utility::conversions::to_string_t("sub_mindmap_id")] = ModelBase::toJson(subMindmapId_);
    }

    return val;
}
bool TestCasePageParam::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_collection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_collection"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdCollection(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_id_collection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id_collection"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIdCollection(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_archive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_archive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsArchive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_sub_mindmap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_sub_mindmap"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasSubMindmap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_mindmap_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_mindmap_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubMindmapId(refVal);
        }
    }
    return ok;
}


int32_t TestCasePageParam::getOffset() const
{
    return offset_;
}

void TestCasePageParam::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool TestCasePageParam::offsetIsSet() const
{
    return offsetIsSet_;
}

void TestCasePageParam::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t TestCasePageParam::getLimit() const
{
    return limit_;
}

void TestCasePageParam::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool TestCasePageParam::limitIsSet() const
{
    return limitIsSet_;
}

void TestCasePageParam::unsetlimit()
{
    limitIsSet_ = false;
}

std::string TestCasePageParam::getDeleted() const
{
    return deleted_;
}

void TestCasePageParam::setDeleted(const std::string& value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool TestCasePageParam::deletedIsSet() const
{
    return deletedIsSet_;
}

void TestCasePageParam::unsetdeleted()
{
    deletedIsSet_ = false;
}

std::vector<std::string>& TestCasePageParam::getIdCollection()
{
    return idCollection_;
}

void TestCasePageParam::setIdCollection(const std::vector<std::string>& value)
{
    idCollection_ = value;
    idCollectionIsSet_ = true;
}

bool TestCasePageParam::idCollectionIsSet() const
{
    return idCollectionIsSet_;
}

void TestCasePageParam::unsetidCollection()
{
    idCollectionIsSet_ = false;
}

std::string TestCasePageParam::getMindmapId() const
{
    return mindmapId_;
}

void TestCasePageParam::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool TestCasePageParam::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void TestCasePageParam::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string TestCasePageParam::getNodeId() const
{
    return nodeId_;
}

void TestCasePageParam::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool TestCasePageParam::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void TestCasePageParam::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<std::string>& TestCasePageParam::getNodeIdCollection()
{
    return nodeIdCollection_;
}

void TestCasePageParam::setNodeIdCollection(const std::vector<std::string>& value)
{
    nodeIdCollection_ = value;
    nodeIdCollectionIsSet_ = true;
}

bool TestCasePageParam::nodeIdCollectionIsSet() const
{
    return nodeIdCollectionIsSet_;
}

void TestCasePageParam::unsetnodeIdCollection()
{
    nodeIdCollectionIsSet_ = false;
}

std::string TestCasePageParam::getProjectId() const
{
    return projectId_;
}

void TestCasePageParam::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TestCasePageParam::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TestCasePageParam::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool TestCasePageParam::isIsArchive() const
{
    return isArchive_;
}

void TestCasePageParam::setIsArchive(bool value)
{
    isArchive_ = value;
    isArchiveIsSet_ = true;
}

bool TestCasePageParam::isArchiveIsSet() const
{
    return isArchiveIsSet_;
}

void TestCasePageParam::unsetisArchive()
{
    isArchiveIsSet_ = false;
}

std::string TestCasePageParam::getCaseName() const
{
    return caseName_;
}

void TestCasePageParam::setCaseName(const std::string& value)
{
    caseName_ = value;
    caseNameIsSet_ = true;
}

bool TestCasePageParam::caseNameIsSet() const
{
    return caseNameIsSet_;
}

void TestCasePageParam::unsetcaseName()
{
    caseNameIsSet_ = false;
}

bool TestCasePageParam::isHasSubMindmap() const
{
    return hasSubMindmap_;
}

void TestCasePageParam::setHasSubMindmap(bool value)
{
    hasSubMindmap_ = value;
    hasSubMindmapIsSet_ = true;
}

bool TestCasePageParam::hasSubMindmapIsSet() const
{
    return hasSubMindmapIsSet_;
}

void TestCasePageParam::unsethasSubMindmap()
{
    hasSubMindmapIsSet_ = false;
}

std::vector<std::string>& TestCasePageParam::getSubMindmapId()
{
    return subMindmapId_;
}

void TestCasePageParam::setSubMindmapId(const std::vector<std::string>& value)
{
    subMindmapId_ = value;
    subMindmapIdIsSet_ = true;
}

bool TestCasePageParam::subMindmapIdIsSet() const
{
    return subMindmapIdIsSet_;
}

void TestCasePageParam::unsetsubMindmapId()
{
    subMindmapIdIsSet_ = false;
}

}
}
}
}
}


