

#include "huaweicloud/cloudtest/v1/model/BatchRemoveTestCasesFromIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchRemoveTestCasesFromIteratorRequest::BatchRemoveTestCasesFromIteratorRequest()
{
    iteratorId_ = "";
    iteratorIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchRemoveTestCasesFromIteratorRequest::~BatchRemoveTestCasesFromIteratorRequest() = default;

void BatchRemoveTestCasesFromIteratorRequest::validate()
{
}

web::json::value BatchRemoveTestCasesFromIteratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iteratorIdIsSet_) {
        val[utility::conversions::to_string_t("iterator_id")] = ModelBase::toJson(iteratorId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchRemoveTestCasesFromIteratorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iterator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CaseRemoveInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchRemoveTestCasesFromIteratorRequest::getIteratorId() const
{
    return iteratorId_;
}

void BatchRemoveTestCasesFromIteratorRequest::setIteratorId(const std::string& value)
{
    iteratorId_ = value;
    iteratorIdIsSet_ = true;
}

bool BatchRemoveTestCasesFromIteratorRequest::iteratorIdIsSet() const
{
    return iteratorIdIsSet_;
}

void BatchRemoveTestCasesFromIteratorRequest::unsetiteratorId()
{
    iteratorIdIsSet_ = false;
}

CaseRemoveInfo BatchRemoveTestCasesFromIteratorRequest::getBody() const
{
    return body_;
}

void BatchRemoveTestCasesFromIteratorRequest::setBody(const CaseRemoveInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchRemoveTestCasesFromIteratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchRemoveTestCasesFromIteratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


