

#include "huaweicloud/cpcs/v1/model/ResourceDistribution.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ResourceDistribution::ResourceDistribution()
{
    kms_ = 0;
    kmsIsSet_ = false;
}

ResourceDistribution::~ResourceDistribution() = default;

void ResourceDistribution::validate()
{
}

web::json::value ResourceDistribution::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kmsIsSet_) {
        val[utility::conversions::to_string_t("kms")] = ModelBase::toJson(kms_);
    }

    return val;
}
bool ResourceDistribution::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKms(refVal);
        }
    }
    return ok;
}


int32_t ResourceDistribution::getKms() const
{
    return kms_;
}

void ResourceDistribution::setKms(int32_t value)
{
    kms_ = value;
    kmsIsSet_ = true;
}

bool ResourceDistribution::kmsIsSet() const
{
    return kmsIsSet_;
}

void ResourceDistribution::unsetkms()
{
    kmsIsSet_ = false;
}

}
}
}
}
}


