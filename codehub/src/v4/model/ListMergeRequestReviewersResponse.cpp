

#include "huaweicloud/codehub/v4/model/ListMergeRequestReviewersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestReviewersResponse::ListMergeRequestReviewersResponse()
{
    requiredReviewersListIsSet_ = false;
    optionalReviewersListIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListMergeRequestReviewersResponse::~ListMergeRequestReviewersResponse() = default;

void ListMergeRequestReviewersResponse::validate()
{
}

web::json::value ListMergeRequestReviewersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requiredReviewersListIsSet_) {
        val[utility::conversions::to_string_t("required_reviewers_list")] = ModelBase::toJson(requiredReviewersList_);
    }
    if(optionalReviewersListIsSet_) {
        val[utility::conversions::to_string_t("optional_reviewers_list")] = ModelBase::toJson(optionalReviewersList_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListMergeRequestReviewersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("required_reviewers_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required_reviewers_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequiredReviewersList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("optional_reviewers_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("optional_reviewers_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionalReviewersList(refVal);
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


std::vector<UserBasicDto>& ListMergeRequestReviewersResponse::getRequiredReviewersList()
{
    return requiredReviewersList_;
}

void ListMergeRequestReviewersResponse::setRequiredReviewersList(const std::vector<UserBasicDto>& value)
{
    requiredReviewersList_ = value;
    requiredReviewersListIsSet_ = true;
}

bool ListMergeRequestReviewersResponse::requiredReviewersListIsSet() const
{
    return requiredReviewersListIsSet_;
}

void ListMergeRequestReviewersResponse::unsetrequiredReviewersList()
{
    requiredReviewersListIsSet_ = false;
}

std::vector<UserBasicDto>& ListMergeRequestReviewersResponse::getOptionalReviewersList()
{
    return optionalReviewersList_;
}

void ListMergeRequestReviewersResponse::setOptionalReviewersList(const std::vector<UserBasicDto>& value)
{
    optionalReviewersList_ = value;
    optionalReviewersListIsSet_ = true;
}

bool ListMergeRequestReviewersResponse::optionalReviewersListIsSet() const
{
    return optionalReviewersListIsSet_;
}

void ListMergeRequestReviewersResponse::unsetoptionalReviewersList()
{
    optionalReviewersListIsSet_ = false;
}

std::string ListMergeRequestReviewersResponse::getXTotal() const
{
    return xTotal_;
}

void ListMergeRequestReviewersResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListMergeRequestReviewersResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListMergeRequestReviewersResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


