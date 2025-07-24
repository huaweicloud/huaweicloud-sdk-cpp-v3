

#include "huaweicloud/cloudtest/v1/model/ShowAllFeatureChildrenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowAllFeatureChildrenRequest::ShowAllFeatureChildrenRequest()
{
    featureId_ = "";
    featureIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowAllFeatureChildrenRequest::~ShowAllFeatureChildrenRequest() = default;

void ShowAllFeatureChildrenRequest::validate()
{
}

web::json::value ShowAllFeatureChildrenRequest::toJson() const
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
bool ShowAllFeatureChildrenRequest::fromJson(const web::json::value& val)
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


std::string ShowAllFeatureChildrenRequest::getFeatureId() const
{
    return featureId_;
}

void ShowAllFeatureChildrenRequest::setFeatureId(const std::string& value)
{
    featureId_ = value;
    featureIdIsSet_ = true;
}

bool ShowAllFeatureChildrenRequest::featureIdIsSet() const
{
    return featureIdIsSet_;
}

void ShowAllFeatureChildrenRequest::unsetfeatureId()
{
    featureIdIsSet_ = false;
}

QueryTestItemTreeInfo ShowAllFeatureChildrenRequest::getBody() const
{
    return body_;
}

void ShowAllFeatureChildrenRequest::setBody(const QueryTestItemTreeInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowAllFeatureChildrenRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowAllFeatureChildrenRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


