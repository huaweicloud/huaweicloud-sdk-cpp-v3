

#include "huaweicloud/cloudtest/v1/model/AddResourceToIteratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddResourceToIteratorRequest::AddResourceToIteratorRequest()
{
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
    isAsync_ = false;
    isAsyncIsSet_ = false;
    bodyIsSet_ = false;
}

AddResourceToIteratorRequest::~AddResourceToIteratorRequest() = default;

void AddResourceToIteratorRequest::validate()
{
}

web::json::value AddResourceToIteratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }
    if(isAsyncIsSet_) {
        val[utility::conversions::to_string_t("is_async")] = ModelBase::toJson(isAsync_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddResourceToIteratorRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_async"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_async"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAsync(refVal);
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


std::string AddResourceToIteratorRequest::getIteratorUri() const
{
    return iteratorUri_;
}

void AddResourceToIteratorRequest::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool AddResourceToIteratorRequest::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void AddResourceToIteratorRequest::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

bool AddResourceToIteratorRequest::isIsAsync() const
{
    return isAsync_;
}

void AddResourceToIteratorRequest::setIsAsync(bool value)
{
    isAsync_ = value;
    isAsyncIsSet_ = true;
}

bool AddResourceToIteratorRequest::isAsyncIsSet() const
{
    return isAsyncIsSet_;
}

void AddResourceToIteratorRequest::unsetisAsync()
{
    isAsyncIsSet_ = false;
}

AddResourceInfo AddResourceToIteratorRequest::getBody() const
{
    return body_;
}

void AddResourceToIteratorRequest::setBody(const AddResourceInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddResourceToIteratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddResourceToIteratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


