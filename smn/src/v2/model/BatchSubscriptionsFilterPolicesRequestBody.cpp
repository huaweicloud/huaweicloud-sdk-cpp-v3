

#include "huaweicloud/smn/v2/model/BatchSubscriptionsFilterPolicesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchSubscriptionsFilterPolicesRequestBody::BatchSubscriptionsFilterPolicesRequestBody()
{
    policesIsSet_ = false;
}

BatchSubscriptionsFilterPolicesRequestBody::~BatchSubscriptionsFilterPolicesRequestBody() = default;

void BatchSubscriptionsFilterPolicesRequestBody::validate()
{
}

web::json::value BatchSubscriptionsFilterPolicesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policesIsSet_) {
        val[utility::conversions::to_string_t("polices")] = ModelBase::toJson(polices_);
    }

    return val;
}
bool BatchSubscriptionsFilterPolicesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("polices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("polices"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchSubscriptionsFilterPolicesRequestBody_polices> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolices(refVal);
        }
    }
    return ok;
}


std::vector<BatchSubscriptionsFilterPolicesRequestBody_polices>& BatchSubscriptionsFilterPolicesRequestBody::getPolices()
{
    return polices_;
}

void BatchSubscriptionsFilterPolicesRequestBody::setPolices(const std::vector<BatchSubscriptionsFilterPolicesRequestBody_polices>& value)
{
    polices_ = value;
    policesIsSet_ = true;
}

bool BatchSubscriptionsFilterPolicesRequestBody::policesIsSet() const
{
    return policesIsSet_;
}

void BatchSubscriptionsFilterPolicesRequestBody::unsetpolices()
{
    policesIsSet_ = false;
}

}
}
}
}
}


