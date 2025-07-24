

#include "huaweicloud/cloudtest/v1/model/IssuesRelationTestCaseVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IssuesRelationTestCaseVo::IssuesRelationTestCaseVo()
{
    uri_ = "";
    uriIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    drRelationId_ = "";
    drRelationIdIsSet_ = false;
    statusCode_ = "";
    statusCodeIsSet_ = false;
    statusName_ = "";
    statusNameIsSet_ = false;
    author_ = "";
    authorIsSet_ = false;
    authorId_ = "";
    authorIdIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    creationDate_ = "";
    creationDateIsSet_ = false;
}

IssuesRelationTestCaseVo::~IssuesRelationTestCaseVo() = default;

void IssuesRelationTestCaseVo::validate()
{
}

web::json::value IssuesRelationTestCaseVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(drRelationIdIsSet_) {
        val[utility::conversions::to_string_t("dr_relation_id")] = ModelBase::toJson(drRelationId_);
    }
    if(statusCodeIsSet_) {
        val[utility::conversions::to_string_t("status_code")] = ModelBase::toJson(statusCode_);
    }
    if(statusNameIsSet_) {
        val[utility::conversions::to_string_t("status_name")] = ModelBase::toJson(statusName_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }

    return val;
}
bool IssuesRelationTestCaseVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_relation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_relation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrRelationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
        }
    }
    return ok;
}


std::string IssuesRelationTestCaseVo::getUri() const
{
    return uri_;
}

void IssuesRelationTestCaseVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool IssuesRelationTestCaseVo::uriIsSet() const
{
    return uriIsSet_;
}

void IssuesRelationTestCaseVo::unseturi()
{
    uriIsSet_ = false;
}

std::string IssuesRelationTestCaseVo::getNumber() const
{
    return number_;
}

void IssuesRelationTestCaseVo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IssuesRelationTestCaseVo::numberIsSet() const
{
    return numberIsSet_;
}

void IssuesRelationTestCaseVo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string IssuesRelationTestCaseVo::getName() const
{
    return name_;
}

void IssuesRelationTestCaseVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssuesRelationTestCaseVo::nameIsSet() const
{
    return nameIsSet_;
}

void IssuesRelationTestCaseVo::unsetname()
{
    nameIsSet_ = false;
}

std::string IssuesRelationTestCaseVo::getDrRelationId() const
{
    return drRelationId_;
}

void IssuesRelationTestCaseVo::setDrRelationId(const std::string& value)
{
    drRelationId_ = value;
    drRelationIdIsSet_ = true;
}

bool IssuesRelationTestCaseVo::drRelationIdIsSet() const
{
    return drRelationIdIsSet_;
}

void IssuesRelationTestCaseVo::unsetdrRelationId()
{
    drRelationIdIsSet_ = false;
}

std::string IssuesRelationTestCaseVo::getStatusCode() const
{
    return statusCode_;
}

void IssuesRelationTestCaseVo::setStatusCode(const std::string& value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool IssuesRelationTestCaseVo::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void IssuesRelationTestCaseVo::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

std::string IssuesRelationTestCaseVo::getStatusName() const
{
    return statusName_;
}

void IssuesRelationTestCaseVo::setStatusName(const std::string& value)
{
    statusName_ = value;
    statusNameIsSet_ = true;
}

bool IssuesRelationTestCaseVo::statusNameIsSet() const
{
    return statusNameIsSet_;
}

void IssuesRelationTestCaseVo::unsetstatusName()
{
    statusNameIsSet_ = false;
}

std::string IssuesRelationTestCaseVo::getAuthor() const
{
    return author_;
}

void IssuesRelationTestCaseVo::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool IssuesRelationTestCaseVo::authorIsSet() const
{
    return authorIsSet_;
}

void IssuesRelationTestCaseVo::unsetauthor()
{
    authorIsSet_ = false;
}

std::string IssuesRelationTestCaseVo::getAuthorId() const
{
    return authorId_;
}

void IssuesRelationTestCaseVo::setAuthorId(const std::string& value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool IssuesRelationTestCaseVo::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void IssuesRelationTestCaseVo::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string IssuesRelationTestCaseVo::getOwner() const
{
    return owner_;
}

void IssuesRelationTestCaseVo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool IssuesRelationTestCaseVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void IssuesRelationTestCaseVo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string IssuesRelationTestCaseVo::getProjectUuid() const
{
    return projectUuid_;
}

void IssuesRelationTestCaseVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool IssuesRelationTestCaseVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void IssuesRelationTestCaseVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string IssuesRelationTestCaseVo::getCreationDate() const
{
    return creationDate_;
}

void IssuesRelationTestCaseVo::setCreationDate(const std::string& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool IssuesRelationTestCaseVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void IssuesRelationTestCaseVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

}
}
}
}
}


