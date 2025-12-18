

#include "huaweicloud/cce/v3/model/UpdateLongAKSKConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateLongAKSKConfigRequestBody::UpdateLongAKSKConfigRequestBody()
{
    enableLongAKSKInNewCluster_ = false;
    enableLongAKSKInNewClusterIsSet_ = false;
}

UpdateLongAKSKConfigRequestBody::~UpdateLongAKSKConfigRequestBody() = default;

void UpdateLongAKSKConfigRequestBody::validate()
{
}

web::json::value UpdateLongAKSKConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableLongAKSKInNewClusterIsSet_) {
        val[utility::conversions::to_string_t("enableLongAKSKInNewCluster")] = ModelBase::toJson(enableLongAKSKInNewCluster_);
    }

    return val;
}
bool UpdateLongAKSKConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enableLongAKSKInNewCluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableLongAKSKInNewCluster"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableLongAKSKInNewCluster(refVal);
        }
    }
    return ok;
}


bool UpdateLongAKSKConfigRequestBody::isEnableLongAKSKInNewCluster() const
{
    return enableLongAKSKInNewCluster_;
}

void UpdateLongAKSKConfigRequestBody::setEnableLongAKSKInNewCluster(bool value)
{
    enableLongAKSKInNewCluster_ = value;
    enableLongAKSKInNewClusterIsSet_ = true;
}

bool UpdateLongAKSKConfigRequestBody::enableLongAKSKInNewClusterIsSet() const
{
    return enableLongAKSKInNewClusterIsSet_;
}

void UpdateLongAKSKConfigRequestBody::unsetenableLongAKSKInNewCluster()
{
    enableLongAKSKInNewClusterIsSet_ = false;
}

}
}
}
}
}


