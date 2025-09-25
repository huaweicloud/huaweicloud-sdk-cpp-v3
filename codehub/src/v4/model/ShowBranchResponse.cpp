

#include "huaweicloud/codehub/v4/model/ShowBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowBranchResponse::ShowBranchResponse()
{
    name_ = "";
    nameIsSet_ = false;
    commitIsSet_ = false;
    merged_ = false;
    mergedIsSet_ = false;
    protected_ = false;
    protectedIsSet_ = false;
    developersCanPush_ = false;
    developersCanPushIsSet_ = false;
    developersCanMerge_ = false;
    developersCanMergeIsSet_ = false;
    canPush_ = false;
    canPushIsSet_ = false;
    default_ = false;
    defaultIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ShowBranchResponse::~ShowBranchResponse() = default;

void ShowBranchResponse::validate()
{
}

web::json::value ShowBranchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(developersCanPushIsSet_) {
        val[utility::conversions::to_string_t("developers_can_push")] = ModelBase::toJson(developersCanPush_);
    }
    if(developersCanMergeIsSet_) {
        val[utility::conversions::to_string_t("developers_can_merge")] = ModelBase::toJson(developersCanMerge_);
    }
    if(canPushIsSet_) {
        val[utility::conversions::to_string_t("can_push")] = ModelBase::toJson(canPush_);
    }
    if(defaultIsSet_) {
        val[utility::conversions::to_string_t("default")] = ModelBase::toJson(default_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ShowBranchResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("developers_can_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("developers_can_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevelopersCanPush(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("developers_can_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("developers_can_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevelopersCanMerge(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::string ShowBranchResponse::getName() const
{
    return name_;
}

void ShowBranchResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowBranchResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowBranchResponse::unsetname()
{
    nameIsSet_ = false;
}

CommitDto ShowBranchResponse::getCommit() const
{
    return commit_;
}

void ShowBranchResponse::setCommit(const CommitDto& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool ShowBranchResponse::commitIsSet() const
{
    return commitIsSet_;
}

void ShowBranchResponse::unsetcommit()
{
    commitIsSet_ = false;
}

bool ShowBranchResponse::isMerged() const
{
    return merged_;
}

void ShowBranchResponse::setMerged(bool value)
{
    merged_ = value;
    mergedIsSet_ = true;
}

bool ShowBranchResponse::mergedIsSet() const
{
    return mergedIsSet_;
}

void ShowBranchResponse::unsetmerged()
{
    mergedIsSet_ = false;
}

bool ShowBranchResponse::isProtected() const
{
    return protected_;
}

void ShowBranchResponse::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool ShowBranchResponse::protectedIsSet() const
{
    return protectedIsSet_;
}

void ShowBranchResponse::unsetprotected()
{
    protectedIsSet_ = false;
}

bool ShowBranchResponse::isDevelopersCanPush() const
{
    return developersCanPush_;
}

void ShowBranchResponse::setDevelopersCanPush(bool value)
{
    developersCanPush_ = value;
    developersCanPushIsSet_ = true;
}

bool ShowBranchResponse::developersCanPushIsSet() const
{
    return developersCanPushIsSet_;
}

void ShowBranchResponse::unsetdevelopersCanPush()
{
    developersCanPushIsSet_ = false;
}

bool ShowBranchResponse::isDevelopersCanMerge() const
{
    return developersCanMerge_;
}

void ShowBranchResponse::setDevelopersCanMerge(bool value)
{
    developersCanMerge_ = value;
    developersCanMergeIsSet_ = true;
}

bool ShowBranchResponse::developersCanMergeIsSet() const
{
    return developersCanMergeIsSet_;
}

void ShowBranchResponse::unsetdevelopersCanMerge()
{
    developersCanMergeIsSet_ = false;
}

bool ShowBranchResponse::isCanPush() const
{
    return canPush_;
}

void ShowBranchResponse::setCanPush(bool value)
{
    canPush_ = value;
    canPushIsSet_ = true;
}

bool ShowBranchResponse::canPushIsSet() const
{
    return canPushIsSet_;
}

void ShowBranchResponse::unsetcanPush()
{
    canPushIsSet_ = false;
}

bool ShowBranchResponse::isDefault() const
{
    return default_;
}

void ShowBranchResponse::setDefault(bool value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool ShowBranchResponse::defaultIsSet() const
{
    return defaultIsSet_;
}

void ShowBranchResponse::unsetdefault()
{
    defaultIsSet_ = false;
}

std::string ShowBranchResponse::getXTotal() const
{
    return xTotal_;
}

void ShowBranchResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ShowBranchResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ShowBranchResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


