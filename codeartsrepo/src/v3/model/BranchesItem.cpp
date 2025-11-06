

#include "huaweicloud/codeartsrepo/v3/model/BranchesItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




BranchesItem::BranchesItem()
{
    commitIsSet_ = false;
    divergingCommitCountsIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

BranchesItem::~BranchesItem() = default;

void BranchesItem::validate()
{
}

web::json::value BranchesItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
    }
    if(divergingCommitCountsIsSet_) {
        val[utility::conversions::to_string_t("diverging_commit_counts")] = ModelBase::toJson(divergingCommitCounts_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool BranchesItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit"));
        if(!fieldValue.is_null())
        {
            CommitV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


CommitV2 BranchesItem::getCommit() const
{
    return commit_;
}

void BranchesItem::setCommit(const CommitV2& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool BranchesItem::commitIsSet() const
{
    return commitIsSet_;
}

void BranchesItem::unsetcommit()
{
    commitIsSet_ = false;
}

DivergingCommitCounts BranchesItem::getDivergingCommitCounts() const
{
    return divergingCommitCounts_;
}

void BranchesItem::setDivergingCommitCounts(const DivergingCommitCounts& value)
{
    divergingCommitCounts_ = value;
    divergingCommitCountsIsSet_ = true;
}

bool BranchesItem::divergingCommitCountsIsSet() const
{
    return divergingCommitCountsIsSet_;
}

void BranchesItem::unsetdivergingCommitCounts()
{
    divergingCommitCountsIsSet_ = false;
}

std::string BranchesItem::getName() const
{
    return name_;
}

void BranchesItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BranchesItem::nameIsSet() const
{
    return nameIsSet_;
}

void BranchesItem::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


