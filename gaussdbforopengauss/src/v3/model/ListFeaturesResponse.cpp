

#include "huaweicloud/gaussdbforopengauss/v3/model/ListFeaturesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListFeaturesResponse::ListFeaturesResponse()
{
    featuresIsSet_ = false;
}

ListFeaturesResponse::~ListFeaturesResponse() = default;

void ListFeaturesResponse::validate()
{
}

web::json::value ListFeaturesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(featuresIsSet_) {
        val[utility::conversions::to_string_t("features")] = ModelBase::toJson(features_);
    }

    return val;
}
bool ListFeaturesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("features"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("features"));
        if(!fieldValue.is_null())
        {
            std::vector<FeatureResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatures(refVal);
        }
    }
    return ok;
}


std::vector<FeatureResult>& ListFeaturesResponse::getFeatures()
{
    return features_;
}

void ListFeaturesResponse::setFeatures(const std::vector<FeatureResult>& value)
{
    features_ = value;
    featuresIsSet_ = true;
}

bool ListFeaturesResponse::featuresIsSet() const
{
    return featuresIsSet_;
}

void ListFeaturesResponse::unsetfeatures()
{
    featuresIsSet_ = false;
}

}
}
}
}
}


