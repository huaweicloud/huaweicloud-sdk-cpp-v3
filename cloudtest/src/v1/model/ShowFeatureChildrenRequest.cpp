

#include "huaweicloud/cloudtest/v1/model/ShowFeatureChildrenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowFeatureChildrenRequest::ShowFeatureChildrenRequest()
{
    featureId_ = "";
    featureIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowFeatureChildrenRequest::~ShowFeatureChildrenRequest() = default;

void ShowFeatureChildrenRequest::validate()
{
}

web::json::value ShowFeatureChildrenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(featureIdIsSet_) {
        val[utility::conversions::to_string_t("feature_id")] = ModelBase::toJson(featureId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowFeatureChildrenRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("feature_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryTestItemTreeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowFeatureChildrenRequest::getFeatureId() const
{
    return featureId_;
}

void ShowFeatureChildrenRequest::setFeatureId(const std::string& value)
{
    featureId_ = value;
    featureIdIsSet_ = true;
}

bool ShowFeatureChildrenRequest::featureIdIsSet() const
{
    return featureIdIsSet_;
}

void ShowFeatureChildrenRequest::unsetfeatureId()
{
    featureIdIsSet_ = false;
}

QueryTestItemTreeInfo ShowFeatureChildrenRequest::getBody() const
{
    return body_;
}

void ShowFeatureChildrenRequest::setBody(const QueryTestItemTreeInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowFeatureChildrenRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowFeatureChildrenRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


