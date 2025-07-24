

#include "huaweicloud/cloudtest/v1/model/BatchAddRelationsByOneCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchAddRelationsByOneCaseRequest::BatchAddRelationsByOneCaseRequest()
{
    workitemId_ = "";
    workitemIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddRelationsByOneCaseRequest::~BatchAddRelationsByOneCaseRequest() = default;

void BatchAddRelationsByOneCaseRequest::validate()
{
}

web::json::value BatchAddRelationsByOneCaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workitemIdIsSet_) {
        val[utility::conversions::to_string_t("workitem_id")] = ModelBase::toJson(workitemId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchAddRelationsByOneCaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workitem_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workitem_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkitemId(refVal);
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


std::string BatchAddRelationsByOneCaseRequest::getWorkitemId() const
{
    return workitemId_;
}

void BatchAddRelationsByOneCaseRequest::setWorkitemId(const std::string& value)
{
    workitemId_ = value;
    workitemIdIsSet_ = true;
}

bool BatchAddRelationsByOneCaseRequest::workitemIdIsSet() const
{
    return workitemIdIsSet_;
}

void BatchAddRelationsByOneCaseRequest::unsetworkitemId()
{
    workitemIdIsSet_ = false;
}

AddRelationsInfo BatchAddRelationsByOneCaseRequest::getBody() const
{
    return body_;
}

void BatchAddRelationsByOneCaseRequest::setBody(const AddRelationsInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddRelationsByOneCaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddRelationsByOneCaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


