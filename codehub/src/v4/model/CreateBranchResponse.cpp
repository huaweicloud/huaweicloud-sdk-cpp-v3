

#include "huaweicloud/codehub/v4/model/CreateBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateBranchResponse::CreateBranchResponse()
{
    name_ = "";
    nameIsSet_ = false;
    default_ = false;
    defaultIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canRead_ = false;
    canReadIsSet_ = false;
    canDownload_ = false;
    canDownloadIsSet_ = false;
    canPush_ = false;
    canPushIsSet_ = false;
    commitIsSet_ = false;
    merged_ = false;
    mergedIsSet_ = false;
    protected_ = false;
    protectedIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    creatorIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createSource_ = "";
    createSourceIsSet_ = false;
    createSourceExists_ = false;
    createSourceExistsIsSet_ = false;
    latestPipelineIsSet_ = false;
    openedMrCount_ = 0;
    openedMrCountIsSet_ = false;
    divergingCommitCountsIsSet_ = false;
}

CreateBranchResponse::~CreateBranchResponse() = default;

void CreateBranchResponse::validate()
{
}

web::json::value CreateBranchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(defaultIsSet_) {
        val[utility::conversions::to_string_t("default")] = ModelBase::toJson(default_);
    }
    if(canDeleteIsSet_) {
        val[utility::conversions::to_string_t("can_delete")] = ModelBase::toJson(canDelete_);
    }
    if(canReadIsSet_) {
        val[utility::conversions::to_string_t("can_read")] = ModelBase::toJson(canRead_);
    }
    if(canDownloadIsSet_) {
        val[utility::conversions::to_string_t("can_download")] = ModelBase::toJson(canDownload_);
    }
    if(canPushIsSet_) {
        val[utility::conversions::to_string_t("can_push")] = ModelBase::toJson(canPush_);
    }
    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
    }
    if(mergedIsSet_) {
        val[utility::conversions::to_string_t("merged")] = ModelBase::toJson(merged_);
    }
    if(protectedIsSet_) {
        val[utility::conversions::to_string_t("protected")] = ModelBase::toJson(protected_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createSourceIsSet_) {
        val[utility::conversions::to_string_t("create_source")] = ModelBase::toJson(createSource_);
    }
    if(createSourceExistsIsSet_) {
        val[utility::conversions::to_string_t("create_source_exists")] = ModelBase::toJson(createSourceExists_);
    }
    if(latestPipelineIsSet_) {
        val[utility::conversions::to_string_t("latest_pipeline")] = ModelBase::toJson(latestPipeline_);
    }
    if(openedMrCountIsSet_) {
        val[utility::conversions::to_string_t("opened_mr_count")] = ModelBase::toJson(openedMrCount_);
    }
    if(divergingCommitCountsIsSet_) {
        val[utility::conversions::to_string_t("diverging_commit_counts")] = ModelBase::toJson(divergingCommitCounts_);
    }

    return val;
}
bool CreateBranchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_read"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_read"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanRead(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_download"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_download"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDownload(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanPush(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit"));
        if(!fieldValue.is_null())
        {
            CommitDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merged"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMerged(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_source_exists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_source_exists"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateSourceExists(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_pipeline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_pipeline"));
        if(!fieldValue.is_null())
        {
            PipelineBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestPipeline(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opened_mr_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opened_mr_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenedMrCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diverging_commit_counts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diverging_commit_counts"));
        if(!fieldValue.is_null())
        {
            DivergingCommitCounts refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDivergingCommitCounts(refVal);
        }
    }
    return ok;
}


std::string CreateBranchResponse::getName() const
{
    return name_;
}

void CreateBranchResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateBranchResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateBranchResponse::unsetname()
{
    nameIsSet_ = false;
}

bool CreateBranchResponse::isDefault() const
{
    return default_;
}

void CreateBranchResponse::setDefault(bool value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool CreateBranchResponse::defaultIsSet() const
{
    return defaultIsSet_;
}

void CreateBranchResponse::unsetdefault()
{
    defaultIsSet_ = false;
}

bool CreateBranchResponse::isCanDelete() const
{
    return canDelete_;
}

void CreateBranchResponse::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool CreateBranchResponse::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void CreateBranchResponse::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool CreateBranchResponse::isCanRead() const
{
    return canRead_;
}

void CreateBranchResponse::setCanRead(bool value)
{
    canRead_ = value;
    canReadIsSet_ = true;
}

bool CreateBranchResponse::canReadIsSet() const
{
    return canReadIsSet_;
}

void CreateBranchResponse::unsetcanRead()
{
    canReadIsSet_ = false;
}

bool CreateBranchResponse::isCanDownload() const
{
    return canDownload_;
}

void CreateBranchResponse::setCanDownload(bool value)
{
    canDownload_ = value;
    canDownloadIsSet_ = true;
}

bool CreateBranchResponse::canDownloadIsSet() const
{
    return canDownloadIsSet_;
}

void CreateBranchResponse::unsetcanDownload()
{
    canDownloadIsSet_ = false;
}

bool CreateBranchResponse::isCanPush() const
{
    return canPush_;
}

void CreateBranchResponse::setCanPush(bool value)
{
    canPush_ = value;
    canPushIsSet_ = true;
}

bool CreateBranchResponse::canPushIsSet() const
{
    return canPushIsSet_;
}

void CreateBranchResponse::unsetcanPush()
{
    canPushIsSet_ = false;
}

CommitDto CreateBranchResponse::getCommit() const
{
    return commit_;
}

void CreateBranchResponse::setCommit(const CommitDto& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool CreateBranchResponse::commitIsSet() const
{
    return commitIsSet_;
}

void CreateBranchResponse::unsetcommit()
{
    commitIsSet_ = false;
}

bool CreateBranchResponse::isMerged() const
{
    return merged_;
}

void CreateBranchResponse::setMerged(bool value)
{
    merged_ = value;
    mergedIsSet_ = true;
}

bool CreateBranchResponse::mergedIsSet() const
{
    return mergedIsSet_;
}

void CreateBranchResponse::unsetmerged()
{
    mergedIsSet_ = false;
}

bool CreateBranchResponse::isProtected() const
{
    return protected_;
}

void CreateBranchResponse::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool CreateBranchResponse::protectedIsSet() const
{
    return protectedIsSet_;
}

void CreateBranchResponse::unsetprotected()
{
    protectedIsSet_ = false;
}

std::string CreateBranchResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateBranchResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateBranchResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateBranchResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

UserBasicDto CreateBranchResponse::getCreator() const
{
    return creator_;
}

void CreateBranchResponse::setCreator(const UserBasicDto& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool CreateBranchResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void CreateBranchResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string CreateBranchResponse::getDescription() const
{
    return description_;
}

void CreateBranchResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateBranchResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateBranchResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateBranchResponse::getCreateSource() const
{
    return createSource_;
}

void CreateBranchResponse::setCreateSource(const std::string& value)
{
    createSource_ = value;
    createSourceIsSet_ = true;
}

bool CreateBranchResponse::createSourceIsSet() const
{
    return createSourceIsSet_;
}

void CreateBranchResponse::unsetcreateSource()
{
    createSourceIsSet_ = false;
}

bool CreateBranchResponse::isCreateSourceExists() const
{
    return createSourceExists_;
}

void CreateBranchResponse::setCreateSourceExists(bool value)
{
    createSourceExists_ = value;
    createSourceExistsIsSet_ = true;
}

bool CreateBranchResponse::createSourceExistsIsSet() const
{
    return createSourceExistsIsSet_;
}

void CreateBranchResponse::unsetcreateSourceExists()
{
    createSourceExistsIsSet_ = false;
}

PipelineBasicDto CreateBranchResponse::getLatestPipeline() const
{
    return latestPipeline_;
}

void CreateBranchResponse::setLatestPipeline(const PipelineBasicDto& value)
{
    latestPipeline_ = value;
    latestPipelineIsSet_ = true;
}

bool CreateBranchResponse::latestPipelineIsSet() const
{
    return latestPipelineIsSet_;
}

void CreateBranchResponse::unsetlatestPipeline()
{
    latestPipelineIsSet_ = false;
}

int32_t CreateBranchResponse::getOpenedMrCount() const
{
    return openedMrCount_;
}

void CreateBranchResponse::setOpenedMrCount(int32_t value)
{
    openedMrCount_ = value;
    openedMrCountIsSet_ = true;
}

bool CreateBranchResponse::openedMrCountIsSet() const
{
    return openedMrCountIsSet_;
}

void CreateBranchResponse::unsetopenedMrCount()
{
    openedMrCountIsSet_ = false;
}

DivergingCommitCounts CreateBranchResponse::getDivergingCommitCounts() const
{
    return divergingCommitCounts_;
}

void CreateBranchResponse::setDivergingCommitCounts(const DivergingCommitCounts& value)
{
    divergingCommitCounts_ = value;
    divergingCommitCountsIsSet_ = true;
}

bool CreateBranchResponse::divergingCommitCountsIsSet() const
{
    return divergingCommitCountsIsSet_;
}

void CreateBranchResponse::unsetdivergingCommitCounts()
{
    divergingCommitCountsIsSet_ = false;
}

}
}
}
}
}


