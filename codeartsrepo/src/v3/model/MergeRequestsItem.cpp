

#include "huaweicloud/codeartsrepo/v3/model/MergeRequestsItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




MergeRequestsItem::MergeRequestsItem()
{
    authorIsSet_ = false;
    closedAt_ = "";
    closedAtIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    devcloudSourceBranch_ = "";
    devcloudSourceBranchIsSet_ = false;
    id_ = 0.0;
    idIsSet_ = false;
    iid_ = 0.0;
    iidIsSet_ = false;
    mergeRequestAssigneeListIsSet_ = false;
    mergeStatus_ = "";
    mergeStatusIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

MergeRequestsItem::~MergeRequestsItem() = default;

void MergeRequestsItem::validate()
{
}

web::json::value MergeRequestsItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(closedAtIsSet_) {
        val[utility::conversions::to_string_t("closed_at")] = ModelBase::toJson(closedAt_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(devcloudSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("devcloud_source_branch")] = ModelBase::toJson(devcloudSourceBranch_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iidIsSet_) {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(iid_);
    }
    if(mergeRequestAssigneeListIsSet_) {
        val[utility::conversions::to_string_t("merge_request_assignee_list")] = ModelBase::toJson(mergeRequestAssigneeList_);
    }
    if(mergeStatusIsSet_) {
        val[utility::conversions::to_string_t("merge_status")] = ModelBase::toJson(mergeStatus_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool MergeRequestsItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            Author refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closed_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("devcloud_source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devcloud_source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevcloudSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iid"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_assignee_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_assignee_list"));
        if(!fieldValue.is_null())
        {
            std::vector<Author> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestAssigneeList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


Author MergeRequestsItem::getAuthor() const
{
    return author_;
}

void MergeRequestsItem::setAuthor(const Author& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool MergeRequestsItem::authorIsSet() const
{
    return authorIsSet_;
}

void MergeRequestsItem::unsetauthor()
{
    authorIsSet_ = false;
}

std::string MergeRequestsItem::getClosedAt() const
{
    return closedAt_;
}

void MergeRequestsItem::setClosedAt(const std::string& value)
{
    closedAt_ = value;
    closedAtIsSet_ = true;
}

bool MergeRequestsItem::closedAtIsSet() const
{
    return closedAtIsSet_;
}

void MergeRequestsItem::unsetclosedAt()
{
    closedAtIsSet_ = false;
}

std::string MergeRequestsItem::getCreatedAt() const
{
    return createdAt_;
}

void MergeRequestsItem::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeRequestsItem::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeRequestsItem::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MergeRequestsItem::getDescription() const
{
    return description_;
}

void MergeRequestsItem::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MergeRequestsItem::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MergeRequestsItem::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string MergeRequestsItem::getDevcloudSourceBranch() const
{
    return devcloudSourceBranch_;
}

void MergeRequestsItem::setDevcloudSourceBranch(const std::string& value)
{
    devcloudSourceBranch_ = value;
    devcloudSourceBranchIsSet_ = true;
}

bool MergeRequestsItem::devcloudSourceBranchIsSet() const
{
    return devcloudSourceBranchIsSet_;
}

void MergeRequestsItem::unsetdevcloudSourceBranch()
{
    devcloudSourceBranchIsSet_ = false;
}

double MergeRequestsItem::getId() const
{
    return id_;
}

void MergeRequestsItem::setId(double value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestsItem::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestsItem::unsetid()
{
    idIsSet_ = false;
}

double MergeRequestsItem::getIid() const
{
    return iid_;
}

void MergeRequestsItem::setIid(double value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool MergeRequestsItem::iidIsSet() const
{
    return iidIsSet_;
}

void MergeRequestsItem::unsetiid()
{
    iidIsSet_ = false;
}

std::vector<Author>& MergeRequestsItem::getMergeRequestAssigneeList()
{
    return mergeRequestAssigneeList_;
}

void MergeRequestsItem::setMergeRequestAssigneeList(const std::vector<Author>& value)
{
    mergeRequestAssigneeList_ = value;
    mergeRequestAssigneeListIsSet_ = true;
}

bool MergeRequestsItem::mergeRequestAssigneeListIsSet() const
{
    return mergeRequestAssigneeListIsSet_;
}

void MergeRequestsItem::unsetmergeRequestAssigneeList()
{
    mergeRequestAssigneeListIsSet_ = false;
}

std::string MergeRequestsItem::getMergeStatus() const
{
    return mergeStatus_;
}

void MergeRequestsItem::setMergeStatus(const std::string& value)
{
    mergeStatus_ = value;
    mergeStatusIsSet_ = true;
}

bool MergeRequestsItem::mergeStatusIsSet() const
{
    return mergeStatusIsSet_;
}

void MergeRequestsItem::unsetmergeStatus()
{
    mergeStatusIsSet_ = false;
}

std::string MergeRequestsItem::getSourceBranch() const
{
    return sourceBranch_;
}

void MergeRequestsItem::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool MergeRequestsItem::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void MergeRequestsItem::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string MergeRequestsItem::getState() const
{
    return state_;
}

void MergeRequestsItem::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeRequestsItem::stateIsSet() const
{
    return stateIsSet_;
}

void MergeRequestsItem::unsetstate()
{
    stateIsSet_ = false;
}

std::string MergeRequestsItem::getTargetBranch() const
{
    return targetBranch_;
}

void MergeRequestsItem::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool MergeRequestsItem::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void MergeRequestsItem::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string MergeRequestsItem::getTitle() const
{
    return title_;
}

void MergeRequestsItem::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool MergeRequestsItem::titleIsSet() const
{
    return titleIsSet_;
}

void MergeRequestsItem::unsettitle()
{
    titleIsSet_ = false;
}

std::string MergeRequestsItem::getUpdatedAt() const
{
    return updatedAt_;
}

void MergeRequestsItem::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MergeRequestsItem::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MergeRequestsItem::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


