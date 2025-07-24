

#include "huaweicloud/cloudtest/v1/model/DeleteRelationsByOneCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteRelationsByOneCaseRequest::DeleteRelationsByOneCaseRequest()
{
    caseId_ = "";
    caseIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteRelationsByOneCaseRequest::~DeleteRelationsByOneCaseRequest() = default;

void DeleteRelationsByOneCaseRequest::validate()
{
}

web::json::value DeleteRelationsByOneCaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseIdIsSet_) {
        val[utility::conversions::to_string_t("case_id")] = ModelBase::toJson(caseId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteRelationsByOneCaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteRelationsByOneCaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteRelationsByOneCaseRequest::getCaseId() const
{
    return caseId_;
}

void DeleteRelationsByOneCaseRequest::setCaseId(const std::string& value)
{
    caseId_ = value;
    caseIdIsSet_ = true;
}

bool DeleteRelationsByOneCaseRequest::caseIdIsSet() const
{
    return caseIdIsSet_;
}

void DeleteRelationsByOneCaseRequest::unsetcaseId()
{
    caseIdIsSet_ = false;
}

DeleteRelationsByOneCaseInfo DeleteRelationsByOneCaseRequest::getBody() const
{
    return body_;
}

void DeleteRelationsByOneCaseRequest::setBody(const DeleteRelationsByOneCaseInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteRelationsByOneCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteRelationsByOneCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


