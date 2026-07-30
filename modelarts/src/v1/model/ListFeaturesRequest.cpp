

#include "huaweicloud/modelarts/v1/model/ListFeaturesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListFeaturesRequest::ListFeaturesRequest()
{
    feature_ = "";
    featureIsSet_ = false;
}

ListFeaturesRequest::~ListFeaturesRequest() = default;

void ListFeaturesRequest::validate()
{
}

web::json::value ListFeaturesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(featureIsSet_) {
        val[utility::conversions::to_string_t("feature")] = ModelBase::toJson(feature_);
    }

    return val;
}
bool ListFeaturesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeature(refVal);
        }
    }
    return ok;
}


std::string ListFeaturesRequest::getFeature() const
{
    return feature_;
}

void ListFeaturesRequest::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool ListFeaturesRequest::featureIsSet() const
{
    return featureIsSet_;
}

void ListFeaturesRequest::unsetfeature()
{
    featureIsSet_ = false;
}

}
}
}
}
}


