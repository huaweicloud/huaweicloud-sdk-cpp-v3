

#include "huaweicloud/codeartsrepo/v4/model/CreateCherryPickMergeRequestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateCherryPickMergeRequestResponse::CreateCherryPickMergeRequestResponse()
{
    state_ = "";
    stateIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    cherryPickBranchName_ = "";
    cherryPickBranchNameIsSet_ = false;
}

CreateCherryPickMergeRequestResponse::~CreateCherryPickMergeRequestResponse() = default;

void CreateCherryPickMergeRequestResponse::validate()
{
}

web::json::value CreateCherryPickMergeRequestResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(cherryPickBranchNameIsSet_) {
        val[utility::conversions::to_string_t("cherry_pick_branch_name")] = ModelBase::toJson(cherryPickBranchName_);
    }

    return val;
}
bool CreateCherryPickMergeRequestResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cherry_pick_branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cherry_pick_branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCherryPickBranchName(refVal);
        }
    }
    return ok;
}


std::string CreateCherryPickMergeRequestResponse::getState() const
{
    return state_;
}

void CreateCherryPickMergeRequestResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CreateCherryPickMergeRequestResponse::stateIsSet() const
{
    return stateIsSet_;
}

void CreateCherryPickMergeRequestResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string CreateCherryPickMergeRequestResponse::getTitle() const
{
    return title_;
}

void CreateCherryPickMergeRequestResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateCherryPickMergeRequestResponse::titleIsSet() const
{
    return titleIsSet_;
}

void CreateCherryPickMergeRequestResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateCherryPickMergeRequestResponse::getCherryPickBranchName() const
{
    return cherryPickBranchName_;
}

void CreateCherryPickMergeRequestResponse::setCherryPickBranchName(const std::string& value)
{
    cherryPickBranchName_ = value;
    cherryPickBranchNameIsSet_ = true;
}

bool CreateCherryPickMergeRequestResponse::cherryPickBranchNameIsSet() const
{
    return cherryPickBranchNameIsSet_;
}

void CreateCherryPickMergeRequestResponse::unsetcherryPickBranchName()
{
    cherryPickBranchNameIsSet_ = false;
}

}
}
}
}
}


