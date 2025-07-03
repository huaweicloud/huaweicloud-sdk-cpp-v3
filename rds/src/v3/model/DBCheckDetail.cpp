

#include "huaweicloud/rds/v3/model/DBCheckDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DBCheckDetail::DBCheckDetail()
{
    documentationLink_ = "";
    documentationLinkIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    detectedProblemsIsSet_ = false;
}

DBCheckDetail::~DBCheckDetail() = default;

void DBCheckDetail::validate()
{
}

web::json::value DBCheckDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(documentationLinkIsSet_) {
        val[utility::conversions::to_string_t("documentation_link")] = ModelBase::toJson(documentationLink_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(detectedProblemsIsSet_) {
        val[utility::conversions::to_string_t("detected_problems")] = ModelBase::toJson(detectedProblems_);
    }

    return val;
}
bool DBCheckDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("documentation_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("documentation_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentationLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detected_problems"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detected_problems"));
        if(!fieldValue.is_null())
        {
            std::vector<DetectedProblem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectedProblems(refVal);
        }
    }
    return ok;
}


std::string DBCheckDetail::getDocumentationLink() const
{
    return documentationLink_;
}

void DBCheckDetail::setDocumentationLink(const std::string& value)
{
    documentationLink_ = value;
    documentationLinkIsSet_ = true;
}

bool DBCheckDetail::documentationLinkIsSet() const
{
    return documentationLinkIsSet_;
}

void DBCheckDetail::unsetdocumentationLink()
{
    documentationLinkIsSet_ = false;
}

std::string DBCheckDetail::getDescription() const
{
    return description_;
}

void DBCheckDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DBCheckDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DBCheckDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DBCheckDetail::getId() const
{
    return id_;
}

void DBCheckDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DBCheckDetail::idIsSet() const
{
    return idIsSet_;
}

void DBCheckDetail::unsetid()
{
    idIsSet_ = false;
}

std::string DBCheckDetail::getTitle() const
{
    return title_;
}

void DBCheckDetail::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool DBCheckDetail::titleIsSet() const
{
    return titleIsSet_;
}

void DBCheckDetail::unsettitle()
{
    titleIsSet_ = false;
}

std::string DBCheckDetail::getStatus() const
{
    return status_;
}

void DBCheckDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DBCheckDetail::statusIsSet() const
{
    return statusIsSet_;
}

void DBCheckDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<DetectedProblem>& DBCheckDetail::getDetectedProblems()
{
    return detectedProblems_;
}

void DBCheckDetail::setDetectedProblems(const std::vector<DetectedProblem>& value)
{
    detectedProblems_ = value;
    detectedProblemsIsSet_ = true;
}

bool DBCheckDetail::detectedProblemsIsSet() const
{
    return detectedProblemsIsSet_;
}

void DBCheckDetail::unsetdetectedProblems()
{
    detectedProblemsIsSet_ = false;
}

}
}
}
}
}


