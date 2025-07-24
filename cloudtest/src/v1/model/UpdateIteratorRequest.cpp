

#include "huaweicloud/cloudtest/v1/model/UpdateIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateIteratorRequest::UpdateIteratorRequest()
{
    iteratorId_ = "";
    iteratorIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateIteratorRequest::~UpdateIteratorRequest() = default;

void UpdateIteratorRequest::validate()
{
}

web::json::value UpdateIteratorRequest::toJson() const
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
bool UpdateIteratorRequest::fromJson(const web::json::value& val)
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
            IteratorVersionInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateIteratorRequest::getIteratorId() const
{
    return iteratorId_;
}

void UpdateIteratorRequest::setIteratorId(const std::string& value)
{
    iteratorId_ = value;
    iteratorIdIsSet_ = true;
}

bool UpdateIteratorRequest::iteratorIdIsSet() const
{
    return iteratorIdIsSet_;
}

void UpdateIteratorRequest::unsetiteratorId()
{
    iteratorIdIsSet_ = false;
}

IteratorVersionInfo UpdateIteratorRequest::getBody() const
{
    return body_;
}

void UpdateIteratorRequest::setBody(const IteratorVersionInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIteratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIteratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


