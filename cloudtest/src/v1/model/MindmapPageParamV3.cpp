

#include "huaweicloud/cloudtest/v1/model/MindmapPageParamV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




MindmapPageParamV3::MindmapPageParamV3()
{
    folderIdCollectionIsSet_ = false;
    creatorNumCollectionIsSet_ = false;
    updaterNumCollectionIsSet_ = false;
    folderRootId_ = "";
    folderRootIdIsSet_ = false;
    idCollectionIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    branchUri_ = "";
    branchUriIsSet_ = false;
    isMaster_ = 0;
    isMasterIsSet_ = false;
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
}

MindmapPageParamV3::~MindmapPageParamV3() = default;

void MindmapPageParamV3::validate()
{
}

web::json::value MindmapPageParamV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(folderIdCollectionIsSet_) {
        val[utility::conversions::to_string_t("folder_id_collection")] = ModelBase::toJson(folderIdCollection_);
    }
    if(creatorNumCollectionIsSet_) {
        val[utility::conversions::to_string_t("creator_num_collection")] = ModelBase::toJson(creatorNumCollection_);
    }
    if(updaterNumCollectionIsSet_) {
        val[utility::conversions::to_string_t("updater_num_collection")] = ModelBase::toJson(updaterNumCollection_);
    }
    if(folderRootIdIsSet_) {
        val[utility::conversions::to_string_t("folder_root_id")] = ModelBase::toJson(folderRootId_);
    }
    if(idCollectionIsSet_) {
        val[utility::conversions::to_string_t("id_collection")] = ModelBase::toJson(idCollection_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(branchUriIsSet_) {
        val[utility::conversions::to_string_t("branch_uri")] = ModelBase::toJson(branchUri_);
    }
    if(isMasterIsSet_) {
        val[utility::conversions::to_string_t("is_master")] = ModelBase::toJson(isMaster_);
    }
    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }

    return val;
}
bool MindmapPageParamV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("folder_id_collection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("folder_id_collection"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFolderIdCollection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_num_collection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_num_collection"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorNumCollection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updater_num_collection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater_num_collection"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdaterNumCollection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("folder_root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("folder_root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFolderRootId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("branch_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_master"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_master"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMaster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterator_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorUri(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& MindmapPageParamV3::getFolderIdCollection()
{
    return folderIdCollection_;
}

void MindmapPageParamV3::setFolderIdCollection(const std::vector<std::string>& value)
{
    folderIdCollection_ = value;
    folderIdCollectionIsSet_ = true;
}

bool MindmapPageParamV3::folderIdCollectionIsSet() const
{
    return folderIdCollectionIsSet_;
}

void MindmapPageParamV3::unsetfolderIdCollection()
{
    folderIdCollectionIsSet_ = false;
}

std::vector<std::string>& MindmapPageParamV3::getCreatorNumCollection()
{
    return creatorNumCollection_;
}

void MindmapPageParamV3::setCreatorNumCollection(const std::vector<std::string>& value)
{
    creatorNumCollection_ = value;
    creatorNumCollectionIsSet_ = true;
}

bool MindmapPageParamV3::creatorNumCollectionIsSet() const
{
    return creatorNumCollectionIsSet_;
}

void MindmapPageParamV3::unsetcreatorNumCollection()
{
    creatorNumCollectionIsSet_ = false;
}

std::vector<std::string>& MindmapPageParamV3::getUpdaterNumCollection()
{
    return updaterNumCollection_;
}

void MindmapPageParamV3::setUpdaterNumCollection(const std::vector<std::string>& value)
{
    updaterNumCollection_ = value;
    updaterNumCollectionIsSet_ = true;
}

bool MindmapPageParamV3::updaterNumCollectionIsSet() const
{
    return updaterNumCollectionIsSet_;
}

void MindmapPageParamV3::unsetupdaterNumCollection()
{
    updaterNumCollectionIsSet_ = false;
}

std::string MindmapPageParamV3::getFolderRootId() const
{
    return folderRootId_;
}

void MindmapPageParamV3::setFolderRootId(const std::string& value)
{
    folderRootId_ = value;
    folderRootIdIsSet_ = true;
}

bool MindmapPageParamV3::folderRootIdIsSet() const
{
    return folderRootIdIsSet_;
}

void MindmapPageParamV3::unsetfolderRootId()
{
    folderRootIdIsSet_ = false;
}

std::vector<std::string>& MindmapPageParamV3::getIdCollection()
{
    return idCollection_;
}

void MindmapPageParamV3::setIdCollection(const std::vector<std::string>& value)
{
    idCollection_ = value;
    idCollectionIsSet_ = true;
}

bool MindmapPageParamV3::idCollectionIsSet() const
{
    return idCollectionIsSet_;
}

void MindmapPageParamV3::unsetidCollection()
{
    idCollectionIsSet_ = false;
}

int32_t MindmapPageParamV3::getOffset() const
{
    return offset_;
}

void MindmapPageParamV3::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool MindmapPageParamV3::offsetIsSet() const
{
    return offsetIsSet_;
}

void MindmapPageParamV3::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t MindmapPageParamV3::getLimit() const
{
    return limit_;
}

void MindmapPageParamV3::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool MindmapPageParamV3::limitIsSet() const
{
    return limitIsSet_;
}

void MindmapPageParamV3::unsetlimit()
{
    limitIsSet_ = false;
}

std::string MindmapPageParamV3::getName() const
{
    return name_;
}

void MindmapPageParamV3::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MindmapPageParamV3::nameIsSet() const
{
    return nameIsSet_;
}

void MindmapPageParamV3::unsetname()
{
    nameIsSet_ = false;
}

std::string MindmapPageParamV3::getProjectId() const
{
    return projectId_;
}

void MindmapPageParamV3::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool MindmapPageParamV3::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void MindmapPageParamV3::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string MindmapPageParamV3::getBranchUri() const
{
    return branchUri_;
}

void MindmapPageParamV3::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool MindmapPageParamV3::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void MindmapPageParamV3::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

int32_t MindmapPageParamV3::getIsMaster() const
{
    return isMaster_;
}

void MindmapPageParamV3::setIsMaster(int32_t value)
{
    isMaster_ = value;
    isMasterIsSet_ = true;
}

bool MindmapPageParamV3::isMasterIsSet() const
{
    return isMasterIsSet_;
}

void MindmapPageParamV3::unsetisMaster()
{
    isMasterIsSet_ = false;
}

std::string MindmapPageParamV3::getIteratorUri() const
{
    return iteratorUri_;
}

void MindmapPageParamV3::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool MindmapPageParamV3::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void MindmapPageParamV3::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

}
}
}
}
}


