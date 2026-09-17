

#include "huaweicloud/cloudtest/v1/model/UpdateTestIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestIteratorRequest::UpdateTestIteratorRequest()
{
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTestIteratorRequest::~UpdateTestIteratorRequest() = default;

void UpdateTestIteratorRequest::validate()
{
}

web::json::value UpdateTestIteratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTestIteratorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iterator_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorUri(refVal);
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


std::string UpdateTestIteratorRequest::getIteratorUri() const
{
    return iteratorUri_;
}

void UpdateTestIteratorRequest::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool UpdateTestIteratorRequest::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void UpdateTestIteratorRequest::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

IteratorVersionInfo UpdateTestIteratorRequest::getBody() const
{
    return body_;
}

void UpdateTestIteratorRequest::setBody(const IteratorVersionInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTestIteratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTestIteratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


