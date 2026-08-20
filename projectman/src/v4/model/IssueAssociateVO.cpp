

#include "huaweicloud/projectman/v4/model/IssueAssociateVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueAssociateVO::IssueAssociateVO()
{
    associatedIds_ = "";
    associatedIdsIsSet_ = false;
    operationFlag_ = 0;
    operationFlagIsSet_ = false;
    associateIssueType_ = "";
    associateIssueTypeIsSet_ = false;
    sourceIssueType_ = "";
    sourceIssueTypeIsSet_ = false;
    isReplace_ = false;
    isReplaceIsSet_ = false;
    linkFieldCode_ = "";
    linkFieldCodeIsSet_ = false;
}

IssueAssociateVO::~IssueAssociateVO() = default;

void IssueAssociateVO::validate()
{
}

web::json::value IssueAssociateVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associatedIdsIsSet_) {
        val[utility::conversions::to_string_t("associated_ids")] = ModelBase::toJson(associatedIds_);
    }
    if(operationFlagIsSet_) {
        val[utility::conversions::to_string_t("operation_flag")] = ModelBase::toJson(operationFlag_);
    }
    if(associateIssueTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_issue_type")] = ModelBase::toJson(associateIssueType_);
    }
    if(sourceIssueTypeIsSet_) {
        val[utility::conversions::to_string_t("source_issue_type")] = ModelBase::toJson(sourceIssueType_);
    }
    if(isReplaceIsSet_) {
        val[utility::conversions::to_string_t("is_replace")] = ModelBase::toJson(isReplace_);
    }
    if(linkFieldCodeIsSet_) {
        val[utility::conversions::to_string_t("link_field_code")] = ModelBase::toJson(linkFieldCode_);
    }

    return val;
}
bool IssueAssociateVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associated_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_issue_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_issue_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateIssueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_issue_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_issue_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceIssueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_replace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_replace"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReplace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link_field_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link_field_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinkFieldCode(refVal);
        }
    }
    return ok;
}


std::string IssueAssociateVO::getAssociatedIds() const
{
    return associatedIds_;
}

void IssueAssociateVO::setAssociatedIds(const std::string& value)
{
    associatedIds_ = value;
    associatedIdsIsSet_ = true;
}

bool IssueAssociateVO::associatedIdsIsSet() const
{
    return associatedIdsIsSet_;
}

void IssueAssociateVO::unsetassociatedIds()
{
    associatedIdsIsSet_ = false;
}

int32_t IssueAssociateVO::getOperationFlag() const
{
    return operationFlag_;
}

void IssueAssociateVO::setOperationFlag(int32_t value)
{
    operationFlag_ = value;
    operationFlagIsSet_ = true;
}

bool IssueAssociateVO::operationFlagIsSet() const
{
    return operationFlagIsSet_;
}

void IssueAssociateVO::unsetoperationFlag()
{
    operationFlagIsSet_ = false;
}

std::string IssueAssociateVO::getAssociateIssueType() const
{
    return associateIssueType_;
}

void IssueAssociateVO::setAssociateIssueType(const std::string& value)
{
    associateIssueType_ = value;
    associateIssueTypeIsSet_ = true;
}

bool IssueAssociateVO::associateIssueTypeIsSet() const
{
    return associateIssueTypeIsSet_;
}

void IssueAssociateVO::unsetassociateIssueType()
{
    associateIssueTypeIsSet_ = false;
}

std::string IssueAssociateVO::getSourceIssueType() const
{
    return sourceIssueType_;
}

void IssueAssociateVO::setSourceIssueType(const std::string& value)
{
    sourceIssueType_ = value;
    sourceIssueTypeIsSet_ = true;
}

bool IssueAssociateVO::sourceIssueTypeIsSet() const
{
    return sourceIssueTypeIsSet_;
}

void IssueAssociateVO::unsetsourceIssueType()
{
    sourceIssueTypeIsSet_ = false;
}

bool IssueAssociateVO::isIsReplace() const
{
    return isReplace_;
}

void IssueAssociateVO::setIsReplace(bool value)
{
    isReplace_ = value;
    isReplaceIsSet_ = true;
}

bool IssueAssociateVO::isReplaceIsSet() const
{
    return isReplaceIsSet_;
}

void IssueAssociateVO::unsetisReplace()
{
    isReplaceIsSet_ = false;
}

std::string IssueAssociateVO::getLinkFieldCode() const
{
    return linkFieldCode_;
}

void IssueAssociateVO::setLinkFieldCode(const std::string& value)
{
    linkFieldCode_ = value;
    linkFieldCodeIsSet_ = true;
}

bool IssueAssociateVO::linkFieldCodeIsSet() const
{
    return linkFieldCodeIsSet_;
}

void IssueAssociateVO::unsetlinkFieldCode()
{
    linkFieldCodeIsSet_ = false;
}

}
}
}
}
}


