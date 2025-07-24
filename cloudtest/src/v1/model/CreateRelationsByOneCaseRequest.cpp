

#include "huaweicloud/cloudtest/v1/model/CreateRelationsByOneCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateRelationsByOneCaseRequest::CreateRelationsByOneCaseRequest()
{
    caseId_ = "";
    caseIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRelationsByOneCaseRequest::~CreateRelationsByOneCaseRequest() = default;

void CreateRelationsByOneCaseRequest::validate()
{
}

web::json::value CreateRelationsByOneCaseRequest::toJson() const
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
bool CreateRelationsByOneCaseRequest::fromJson(const web::json::value& val)
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
            AddRelationsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRelationsByOneCaseRequest::getCaseId() const
{
    return caseId_;
}

void CreateRelationsByOneCaseRequest::setCaseId(const std::string& value)
{
    caseId_ = value;
    caseIdIsSet_ = true;
}

bool CreateRelationsByOneCaseRequest::caseIdIsSet() const
{
    return caseIdIsSet_;
}

void CreateRelationsByOneCaseRequest::unsetcaseId()
{
    caseIdIsSet_ = false;
}

AddRelationsInfo CreateRelationsByOneCaseRequest::getBody() const
{
    return body_;
}

void CreateRelationsByOneCaseRequest::setBody(const AddRelationsInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRelationsByOneCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRelationsByOneCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


