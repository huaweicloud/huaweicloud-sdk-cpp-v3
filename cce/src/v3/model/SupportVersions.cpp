

#include "huaweicloud/cce/v3/model/SupportVersions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SupportVersions::SupportVersions()
{
    clusterType_ = "";
    clusterTypeIsSet_ = false;
    clusterVersionIsSet_ = false;
    categoryIsSet_ = false;
}

SupportVersions::~SupportVersions() = default;

void SupportVersions::validate()
{
}

web::json::value SupportVersions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterTypeIsSet_) {
        val[utility::conversions::to_string_t("clusterType")] = ModelBase::toJson(clusterType_);
    }
    if(clusterVersionIsSet_) {
        val[utility::conversions::to_string_t("clusterVersion")] = ModelBase::toJson(clusterVersion_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool SupportVersions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterVersion"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}


std::string SupportVersions::getClusterType() const
{
    return clusterType_;
}

void SupportVersions::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool SupportVersions::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void SupportVersions::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

std::vector<std::string>& SupportVersions::getClusterVersion()
{
    return clusterVersion_;
}

void SupportVersions::setClusterVersion(const std::vector<std::string>& value)
{
    clusterVersion_ = value;
    clusterVersionIsSet_ = true;
}

bool SupportVersions::clusterVersionIsSet() const
{
    return clusterVersionIsSet_;
}

void SupportVersions::unsetclusterVersion()
{
    clusterVersionIsSet_ = false;
}

std::vector<std::string>& SupportVersions::getCategory()
{
    return category_;
}

void SupportVersions::setCategory(const std::vector<std::string>& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool SupportVersions::categoryIsSet() const
{
    return categoryIsSet_;
}

void SupportVersions::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


