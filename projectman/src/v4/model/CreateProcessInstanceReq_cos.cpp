

#include "huaweicloud/projectman/v4/model/CreateProcessInstanceReq_cos.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProcessInstanceReq_cos::CreateProcessInstanceReq_cos()
{
    number_ = "";
    numberIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    issueCategory_ = "";
    issueCategoryIsSet_ = false;
    changeType_ = "";
    changeTypeIsSet_ = false;
    beforeChange_ = "";
    beforeChangeIsSet_ = false;
    afterChange_ = "";
    afterChangeIsSet_ = false;
}

CreateProcessInstanceReq_cos::~CreateProcessInstanceReq_cos() = default;

void CreateProcessInstanceReq_cos::validate()
{
}

web::json::value CreateProcessInstanceReq_cos::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(issueCategoryIsSet_) {
        val[utility::conversions::to_string_t("issue_category")] = ModelBase::toJson(issueCategory_);
    }
    if(changeTypeIsSet_) {
        val[utility::conversions::to_string_t("change_type")] = ModelBase::toJson(changeType_);
    }
    if(beforeChangeIsSet_) {
        val[utility::conversions::to_string_t("before_change")] = ModelBase::toJson(beforeChange_);
    }
    if(afterChangeIsSet_) {
        val[utility::conversions::to_string_t("after_change")] = ModelBase::toJson(afterChange_);
    }

    return val;
}
bool CreateProcessInstanceReq_cos::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issue_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("before_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before_change"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeChange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("after_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("after_change"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAfterChange(refVal);
        }
    }
    return ok;
}


std::string CreateProcessInstanceReq_cos::getNumber() const
{
    return number_;
}

void CreateProcessInstanceReq_cos::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool CreateProcessInstanceReq_cos::numberIsSet() const
{
    return numberIsSet_;
}

void CreateProcessInstanceReq_cos::unsetnumber()
{
    numberIsSet_ = false;
}

std::string CreateProcessInstanceReq_cos::getIssueId() const
{
    return issueId_;
}

void CreateProcessInstanceReq_cos::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool CreateProcessInstanceReq_cos::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void CreateProcessInstanceReq_cos::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string CreateProcessInstanceReq_cos::getIssueCategory() const
{
    return issueCategory_;
}

void CreateProcessInstanceReq_cos::setIssueCategory(const std::string& value)
{
    issueCategory_ = value;
    issueCategoryIsSet_ = true;
}

bool CreateProcessInstanceReq_cos::issueCategoryIsSet() const
{
    return issueCategoryIsSet_;
}

void CreateProcessInstanceReq_cos::unsetissueCategory()
{
    issueCategoryIsSet_ = false;
}

std::string CreateProcessInstanceReq_cos::getChangeType() const
{
    return changeType_;
}

void CreateProcessInstanceReq_cos::setChangeType(const std::string& value)
{
    changeType_ = value;
    changeTypeIsSet_ = true;
}

bool CreateProcessInstanceReq_cos::changeTypeIsSet() const
{
    return changeTypeIsSet_;
}

void CreateProcessInstanceReq_cos::unsetchangeType()
{
    changeTypeIsSet_ = false;
}

std::string CreateProcessInstanceReq_cos::getBeforeChange() const
{
    return beforeChange_;
}

void CreateProcessInstanceReq_cos::setBeforeChange(const std::string& value)
{
    beforeChange_ = value;
    beforeChangeIsSet_ = true;
}

bool CreateProcessInstanceReq_cos::beforeChangeIsSet() const
{
    return beforeChangeIsSet_;
}

void CreateProcessInstanceReq_cos::unsetbeforeChange()
{
    beforeChangeIsSet_ = false;
}

std::string CreateProcessInstanceReq_cos::getAfterChange() const
{
    return afterChange_;
}

void CreateProcessInstanceReq_cos::setAfterChange(const std::string& value)
{
    afterChange_ = value;
    afterChangeIsSet_ = true;
}

bool CreateProcessInstanceReq_cos::afterChangeIsSet() const
{
    return afterChangeIsSet_;
}

void CreateProcessInstanceReq_cos::unsetafterChange()
{
    afterChangeIsSet_ = false;
}

}
}
}
}
}


