

#include "huaweicloud/gaussdb/v3/model/TaurusProxyScaleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TaurusProxyScaleRequest::TaurusProxyScaleRequest()
{
    flavorRef_ = "";
    flavorRefIsSet_ = false;
}

TaurusProxyScaleRequest::~TaurusProxyScaleRequest() = default;

void TaurusProxyScaleRequest::validate()
{
}

web::json::value TaurusProxyScaleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }

    return val;
}

bool TaurusProxyScaleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    return ok;
}

std::string TaurusProxyScaleRequest::getFlavorRef() const
{
    return flavorRef_;
}

void TaurusProxyScaleRequest::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool TaurusProxyScaleRequest::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void TaurusProxyScaleRequest::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

}
}
}
}
}


