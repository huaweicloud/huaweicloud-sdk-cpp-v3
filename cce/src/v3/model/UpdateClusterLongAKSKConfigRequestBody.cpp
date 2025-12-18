

#include "huaweicloud/cce/v3/model/UpdateClusterLongAKSKConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateClusterLongAKSKConfigRequestBody::UpdateClusterLongAKSKConfigRequestBody()
{
    enableLongAKSK_ = false;
    enableLongAKSKIsSet_ = false;
}

UpdateClusterLongAKSKConfigRequestBody::~UpdateClusterLongAKSKConfigRequestBody() = default;

void UpdateClusterLongAKSKConfigRequestBody::validate()
{
}

web::json::value UpdateClusterLongAKSKConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableLongAKSKIsSet_) {
        val[utility::conversions::to_string_t("enableLongAKSK")] = ModelBase::toJson(enableLongAKSK_);
    }

    return val;
}
bool UpdateClusterLongAKSKConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enableLongAKSK"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableLongAKSK"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableLongAKSK(refVal);
        }
    }
    return ok;
}


bool UpdateClusterLongAKSKConfigRequestBody::isEnableLongAKSK() const
{
    return enableLongAKSK_;
}

void UpdateClusterLongAKSKConfigRequestBody::setEnableLongAKSK(bool value)
{
    enableLongAKSK_ = value;
    enableLongAKSKIsSet_ = true;
}

bool UpdateClusterLongAKSKConfigRequestBody::enableLongAKSKIsSet() const
{
    return enableLongAKSKIsSet_;
}

void UpdateClusterLongAKSKConfigRequestBody::unsetenableLongAKSK()
{
    enableLongAKSKIsSet_ = false;
}

}
}
}
}
}


