

#include "huaweicloud/codeartsrepo/v3/model/AddProtectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AddProtectResponse::AddProtectResponse()
{
    name_ = "";
    nameIsSet_ = false;
    commitIsSet_ = false;
    protected_ = false;
    protectedIsSet_ = false;
    developersCanPush_ = false;
    developersCanPushIsSet_ = false;
    developersCanMerge_ = false;
    developersCanMergeIsSet_ = false;
    masterCanPush_ = false;
    masterCanPushIsSet_ = false;
    masterCanMerge_ = false;
    masterCanMergeIsSet_ = false;
    noOneCanPush_ = false;
    noOneCanPushIsSet_ = false;
    noOneCanMerge_ = false;
    noOneCanMergeIsSet_ = false;
    inAnOpenedMergeRequest_ = false;
    inAnOpenedMergeRequestIsSet_ = false;
}

AddProtectResponse::~AddProtectResponse() = default;

void AddProtectResponse::validate()
{
}

web::json::value AddProtectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
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
    if(masterCanPushIsSet_) {
        val[utility::conversions::to_string_t("master_can_push")] = ModelBase::toJson(masterCanPush_);
    }
    if(masterCanMergeIsSet_) {
        val[utility::conversions::to_string_t("master_can_merge")] = ModelBase::toJson(masterCanMerge_);
    }
    if(noOneCanPushIsSet_) {
        val[utility::conversions::to_string_t("no_one_can_push")] = ModelBase::toJson(noOneCanPush_);
    }
    if(noOneCanMergeIsSet_) {
        val[utility::conversions::to_string_t("no_one_can_merge")] = ModelBase::toJson(noOneCanMerge_);
    }
    if(inAnOpenedMergeRequestIsSet_) {
        val[utility::conversions::to_string_t("in_an_opened_merge_request")] = ModelBase::toJson(inAnOpenedMergeRequest_);
    }

    return val;
}
bool AddProtectResponse::fromJson(const web::json::value& val)
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
            CommitRepoV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("master_can_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_can_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterCanPush(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_can_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_can_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterCanMerge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("no_one_can_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_one_can_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoOneCanPush(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("no_one_can_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_one_can_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoOneCanMerge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in_an_opened_merge_request"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_an_opened_merge_request"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInAnOpenedMergeRequest(refVal);
        }
    }
    return ok;
}


std::string AddProtectResponse::getName() const
{
    return name_;
}

void AddProtectResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddProtectResponse::nameIsSet() const
{
    return nameIsSet_;
}

void AddProtectResponse::unsetname()
{
    nameIsSet_ = false;
}

CommitRepoV2 AddProtectResponse::getCommit() const
{
    return commit_;
}

void AddProtectResponse::setCommit(const CommitRepoV2& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool AddProtectResponse::commitIsSet() const
{
    return commitIsSet_;
}

void AddProtectResponse::unsetcommit()
{
    commitIsSet_ = false;
}

bool AddProtectResponse::isProtected() const
{
    return protected_;
}

void AddProtectResponse::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool AddProtectResponse::protectedIsSet() const
{
    return protectedIsSet_;
}

void AddProtectResponse::unsetprotected()
{
    protectedIsSet_ = false;
}

bool AddProtectResponse::isDevelopersCanPush() const
{
    return developersCanPush_;
}

void AddProtectResponse::setDevelopersCanPush(bool value)
{
    developersCanPush_ = value;
    developersCanPushIsSet_ = true;
}

bool AddProtectResponse::developersCanPushIsSet() const
{
    return developersCanPushIsSet_;
}

void AddProtectResponse::unsetdevelopersCanPush()
{
    developersCanPushIsSet_ = false;
}

bool AddProtectResponse::isDevelopersCanMerge() const
{
    return developersCanMerge_;
}

void AddProtectResponse::setDevelopersCanMerge(bool value)
{
    developersCanMerge_ = value;
    developersCanMergeIsSet_ = true;
}

bool AddProtectResponse::developersCanMergeIsSet() const
{
    return developersCanMergeIsSet_;
}

void AddProtectResponse::unsetdevelopersCanMerge()
{
    developersCanMergeIsSet_ = false;
}

bool AddProtectResponse::isMasterCanPush() const
{
    return masterCanPush_;
}

void AddProtectResponse::setMasterCanPush(bool value)
{
    masterCanPush_ = value;
    masterCanPushIsSet_ = true;
}

bool AddProtectResponse::masterCanPushIsSet() const
{
    return masterCanPushIsSet_;
}

void AddProtectResponse::unsetmasterCanPush()
{
    masterCanPushIsSet_ = false;
}

bool AddProtectResponse::isMasterCanMerge() const
{
    return masterCanMerge_;
}

void AddProtectResponse::setMasterCanMerge(bool value)
{
    masterCanMerge_ = value;
    masterCanMergeIsSet_ = true;
}

bool AddProtectResponse::masterCanMergeIsSet() const
{
    return masterCanMergeIsSet_;
}

void AddProtectResponse::unsetmasterCanMerge()
{
    masterCanMergeIsSet_ = false;
}

bool AddProtectResponse::isNoOneCanPush() const
{
    return noOneCanPush_;
}

void AddProtectResponse::setNoOneCanPush(bool value)
{
    noOneCanPush_ = value;
    noOneCanPushIsSet_ = true;
}

bool AddProtectResponse::noOneCanPushIsSet() const
{
    return noOneCanPushIsSet_;
}

void AddProtectResponse::unsetnoOneCanPush()
{
    noOneCanPushIsSet_ = false;
}

bool AddProtectResponse::isNoOneCanMerge() const
{
    return noOneCanMerge_;
}

void AddProtectResponse::setNoOneCanMerge(bool value)
{
    noOneCanMerge_ = value;
    noOneCanMergeIsSet_ = true;
}

bool AddProtectResponse::noOneCanMergeIsSet() const
{
    return noOneCanMergeIsSet_;
}

void AddProtectResponse::unsetnoOneCanMerge()
{
    noOneCanMergeIsSet_ = false;
}

bool AddProtectResponse::isInAnOpenedMergeRequest() const
{
    return inAnOpenedMergeRequest_;
}

void AddProtectResponse::setInAnOpenedMergeRequest(bool value)
{
    inAnOpenedMergeRequest_ = value;
    inAnOpenedMergeRequestIsSet_ = true;
}

bool AddProtectResponse::inAnOpenedMergeRequestIsSet() const
{
    return inAnOpenedMergeRequestIsSet_;
}

void AddProtectResponse::unsetinAnOpenedMergeRequest()
{
    inAnOpenedMergeRequestIsSet_ = false;
}

}
}
}
}
}


