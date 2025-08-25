

#include "huaweicloud/cce/v5/model/ImageCacheBuildingConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




ImageCacheBuildingConfig::ImageCacheBuildingConfig()
{
    cluster_ = "";
    clusterIsSet_ = false;
    imagePullSecretsIsSet_ = false;
}

ImageCacheBuildingConfig::~ImageCacheBuildingConfig() = default;

void ImageCacheBuildingConfig::validate()
{
}

web::json::value ImageCacheBuildingConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIsSet_) {
        val[utility::conversions::to_string_t("cluster")] = ModelBase::toJson(cluster_);
    }
    if(imagePullSecretsIsSet_) {
        val[utility::conversions::to_string_t("image_pull_secrets")] = ModelBase::toJson(imagePullSecrets_);
    }

    return val;
}
bool ImageCacheBuildingConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCluster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_pull_secrets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_pull_secrets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImagePullSecrets(refVal);
        }
    }
    return ok;
}


std::string ImageCacheBuildingConfig::getCluster() const
{
    return cluster_;
}

void ImageCacheBuildingConfig::setCluster(const std::string& value)
{
    cluster_ = value;
    clusterIsSet_ = true;
}

bool ImageCacheBuildingConfig::clusterIsSet() const
{
    return clusterIsSet_;
}

void ImageCacheBuildingConfig::unsetcluster()
{
    clusterIsSet_ = false;
}

std::vector<std::string>& ImageCacheBuildingConfig::getImagePullSecrets()
{
    return imagePullSecrets_;
}

void ImageCacheBuildingConfig::setImagePullSecrets(const std::vector<std::string>& value)
{
    imagePullSecrets_ = value;
    imagePullSecretsIsSet_ = true;
}

bool ImageCacheBuildingConfig::imagePullSecretsIsSet() const
{
    return imagePullSecretsIsSet_;
}

void ImageCacheBuildingConfig::unsetimagePullSecrets()
{
    imagePullSecretsIsSet_ = false;
}

}
}
}
}
}


