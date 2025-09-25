

#include "huaweicloud/codehub/v4/model/ApproverParamDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ApproverParamDto::ApproverParamDto()
{
    approverId_ = 0;
    approverIdIsSet_ = false;
    codeOwner_ = false;
    codeOwnerIsSet_ = false;
    accept_ = false;
    acceptIsSet_ = false;
}

ApproverParamDto::~ApproverParamDto() = default;

void ApproverParamDto::validate()
{
}

web::json::value ApproverParamDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(approverIdIsSet_) {
        val[utility::conversions::to_string_t("approver_id")] = ModelBase::toJson(approverId_);
    }
    if(codeOwnerIsSet_) {
        val[utility::conversions::to_string_t("code_owner")] = ModelBase::toJson(codeOwner_);
    }
    if(acceptIsSet_) {
        val[utility::conversions::to_string_t("accept")] = ModelBase::toJson(accept_);
    }

    return val;
}
bool ApproverParamDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("approver_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approver_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApproverId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_owner"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accept"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accept"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccept(refVal);
        }
    }
    return ok;
}


int32_t ApproverParamDto::getApproverId() const
{
    return approverId_;
}

void ApproverParamDto::setApproverId(int32_t value)
{
    approverId_ = value;
    approverIdIsSet_ = true;
}

bool ApproverParamDto::approverIdIsSet() const
{
    return approverIdIsSet_;
}

void ApproverParamDto::unsetapproverId()
{
    approverIdIsSet_ = false;
}

bool ApproverParamDto::isCodeOwner() const
{
    return codeOwner_;
}

void ApproverParamDto::setCodeOwner(bool value)
{
    codeOwner_ = value;
    codeOwnerIsSet_ = true;
}

bool ApproverParamDto::codeOwnerIsSet() const
{
    return codeOwnerIsSet_;
}

void ApproverParamDto::unsetcodeOwner()
{
    codeOwnerIsSet_ = false;
}

bool ApproverParamDto::isAccept() const
{
    return accept_;
}

void ApproverParamDto::setAccept(bool value)
{
    accept_ = value;
    acceptIsSet_ = true;
}

bool ApproverParamDto::acceptIsSet() const
{
    return acceptIsSet_;
}

void ApproverParamDto::unsetaccept()
{
    acceptIsSet_ = false;
}

}
}
}
}
}


