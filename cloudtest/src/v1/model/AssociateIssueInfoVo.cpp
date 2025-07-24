

#include "huaweicloud/cloudtest/v1/model/AssociateIssueInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AssociateIssueInfoVo::AssociateIssueInfoVo()
{
    associate_ = false;
    associateIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    trackerId_ = "";
    trackerIdIsSet_ = false;
    boardId_ = "";
    boardIdIsSet_ = false;
    trackerName_ = "";
    trackerNameIsSet_ = false;
}

AssociateIssueInfoVo::~AssociateIssueInfoVo() = default;

void AssociateIssueInfoVo::validate()
{
}

web::json::value AssociateIssueInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associateIsSet_) {
        val[utility::conversions::to_string_t("associate")] = ModelBase::toJson(associate_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(boardIdIsSet_) {
        val[utility::conversions::to_string_t("board_id")] = ModelBase::toJson(boardId_);
    }
    if(trackerNameIsSet_) {
        val[utility::conversions::to_string_t("tracker_name")] = ModelBase::toJson(trackerName_);
    }

    return val;
}
bool AssociateIssueInfoVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("board_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("board_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoardId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerName(refVal);
        }
    }
    return ok;
}


bool AssociateIssueInfoVo::isAssociate() const
{
    return associate_;
}

void AssociateIssueInfoVo::setAssociate(bool value)
{
    associate_ = value;
    associateIsSet_ = true;
}

bool AssociateIssueInfoVo::associateIsSet() const
{
    return associateIsSet_;
}

void AssociateIssueInfoVo::unsetassociate()
{
    associateIsSet_ = false;
}

std::string AssociateIssueInfoVo::getIssueId() const
{
    return issueId_;
}

void AssociateIssueInfoVo::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool AssociateIssueInfoVo::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void AssociateIssueInfoVo::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string AssociateIssueInfoVo::getTrackerId() const
{
    return trackerId_;
}

void AssociateIssueInfoVo::setTrackerId(const std::string& value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool AssociateIssueInfoVo::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void AssociateIssueInfoVo::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::string AssociateIssueInfoVo::getBoardId() const
{
    return boardId_;
}

void AssociateIssueInfoVo::setBoardId(const std::string& value)
{
    boardId_ = value;
    boardIdIsSet_ = true;
}

bool AssociateIssueInfoVo::boardIdIsSet() const
{
    return boardIdIsSet_;
}

void AssociateIssueInfoVo::unsetboardId()
{
    boardIdIsSet_ = false;
}

std::string AssociateIssueInfoVo::getTrackerName() const
{
    return trackerName_;
}

void AssociateIssueInfoVo::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool AssociateIssueInfoVo::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void AssociateIssueInfoVo::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

}
}
}
}
}


