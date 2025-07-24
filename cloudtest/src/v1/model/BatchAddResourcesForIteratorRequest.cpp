

#include "huaweicloud/cloudtest/v1/model/BatchAddResourcesForIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchAddResourcesForIteratorRequest::BatchAddResourcesForIteratorRequest()
{
    iteratorId_ = "";
    iteratorIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddResourcesForIteratorRequest::~BatchAddResourcesForIteratorRequest() = default;

void BatchAddResourcesForIteratorRequest::validate()
{
}

web::json::value BatchAddResourcesForIteratorRequest::toJson() const
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
bool BatchAddResourcesForIteratorRequest::fromJson(const web::json::value& val)
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
            AddResourceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchAddResourcesForIteratorRequest::getIteratorId() const
{
    return iteratorId_;
}

void BatchAddResourcesForIteratorRequest::setIteratorId(const std::string& value)
{
    iteratorId_ = value;
    iteratorIdIsSet_ = true;
}

bool BatchAddResourcesForIteratorRequest::iteratorIdIsSet() const
{
    return iteratorIdIsSet_;
}

void BatchAddResourcesForIteratorRequest::unsetiteratorId()
{
    iteratorIdIsSet_ = false;
}

AddResourceInfo BatchAddResourcesForIteratorRequest::getBody() const
{
    return body_;
}

void BatchAddResourcesForIteratorRequest::setBody(const AddResourceInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddResourcesForIteratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddResourcesForIteratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


