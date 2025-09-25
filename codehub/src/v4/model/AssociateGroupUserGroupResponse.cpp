

#include "huaweicloud/codehub/v4/model/AssociateGroupUserGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AssociateGroupUserGroupResponse::AssociateGroupUserGroupResponse()
{
    successIsSet_ = false;
    failureIsSet_ = false;
}

AssociateGroupUserGroupResponse::~AssociateGroupUserGroupResponse() = default;

void AssociateGroupUserGroupResponse::validate()
{
}

web::json::value AssociateGroupUserGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(failureIsSet_) {
        val[utility::conversions::to_string_t("failure")] = ModelBase::toJson(failure_);
    }

    return val;
}
bool AssociateGroupUserGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            std::vector<MemberBaseDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure"));
        if(!fieldValue.is_null())
        {
            std::vector<FailureForBatchCreateGroupMembersDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailure(refVal);
        }
    }
    return ok;
}


std::vector<MemberBaseDto>& AssociateGroupUserGroupResponse::getSuccess()
{
    return success_;
}

void AssociateGroupUserGroupResponse::setSuccess(const std::vector<MemberBaseDto>& value)
{
    success_ = value;
    successIsSet_ = true;
}

bool AssociateGroupUserGroupResponse::successIsSet() const
{
    return successIsSet_;
}

void AssociateGroupUserGroupResponse::unsetsuccess()
{
    successIsSet_ = false;
}

std::vector<FailureForBatchCreateGroupMembersDto>& AssociateGroupUserGroupResponse::getFailure()
{
    return failure_;
}

void AssociateGroupUserGroupResponse::setFailure(const std::vector<FailureForBatchCreateGroupMembersDto>& value)
{
    failure_ = value;
    failureIsSet_ = true;
}

bool AssociateGroupUserGroupResponse::failureIsSet() const
{
    return failureIsSet_;
}

void AssociateGroupUserGroupResponse::unsetfailure()
{
    failureIsSet_ = false;
}

}
}
}
}
}


