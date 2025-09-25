

#include "huaweicloud/codehub/v4/model/ListMergeRequestApproversResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestApproversResponse::ListMergeRequestApproversResponse()
{
    requiredApproversListIsSet_ = false;
    optionalApproversListIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListMergeRequestApproversResponse::~ListMergeRequestApproversResponse() = default;

void ListMergeRequestApproversResponse::validate()
{
}

web::json::value ListMergeRequestApproversResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requiredApproversListIsSet_) {
        val[utility::conversions::to_string_t("required_approvers_list")] = ModelBase::toJson(requiredApproversList_);
    }
    if(optionalApproversListIsSet_) {
        val[utility::conversions::to_string_t("optional_approvers_list")] = ModelBase::toJson(optionalApproversList_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListMergeRequestApproversResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("required_approvers_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required_approvers_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequiredApproversList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("optional_approvers_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("optional_approvers_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionalApproversList(refVal);
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


std::vector<UserBasicDto>& ListMergeRequestApproversResponse::getRequiredApproversList()
{
    return requiredApproversList_;
}

void ListMergeRequestApproversResponse::setRequiredApproversList(const std::vector<UserBasicDto>& value)
{
    requiredApproversList_ = value;
    requiredApproversListIsSet_ = true;
}

bool ListMergeRequestApproversResponse::requiredApproversListIsSet() const
{
    return requiredApproversListIsSet_;
}

void ListMergeRequestApproversResponse::unsetrequiredApproversList()
{
    requiredApproversListIsSet_ = false;
}

std::vector<UserBasicDto>& ListMergeRequestApproversResponse::getOptionalApproversList()
{
    return optionalApproversList_;
}

void ListMergeRequestApproversResponse::setOptionalApproversList(const std::vector<UserBasicDto>& value)
{
    optionalApproversList_ = value;
    optionalApproversListIsSet_ = true;
}

bool ListMergeRequestApproversResponse::optionalApproversListIsSet() const
{
    return optionalApproversListIsSet_;
}

void ListMergeRequestApproversResponse::unsetoptionalApproversList()
{
    optionalApproversListIsSet_ = false;
}

std::string ListMergeRequestApproversResponse::getXTotal() const
{
    return xTotal_;
}

void ListMergeRequestApproversResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListMergeRequestApproversResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListMergeRequestApproversResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


