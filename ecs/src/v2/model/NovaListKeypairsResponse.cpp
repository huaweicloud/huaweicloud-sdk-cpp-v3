

#include "huaweicloud/ecs/v2/model/NovaListKeypairsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListKeypairsResponse::NovaListKeypairsResponse()
{
    keypairsIsSet_ = false;
}

NovaListKeypairsResponse::~NovaListKeypairsResponse() = default;

void NovaListKeypairsResponse::validate()
{
}

web::json::value NovaListKeypairsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keypairsIsSet_) {
        val[utility::conversions::to_string_t("keypairs")] = ModelBase::toJson(keypairs_);
    }

    return val;
}

bool NovaListKeypairsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keypairs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keypairs"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaListKeypairsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeypairs(refVal);
        }
    }
    return ok;
}


std::vector<NovaListKeypairsResult>& NovaListKeypairsResponse::getKeypairs()
{
    return keypairs_;
}

void NovaListKeypairsResponse::setKeypairs(const std::vector<NovaListKeypairsResult>& value)
{
    keypairs_ = value;
    keypairsIsSet_ = true;
}

bool NovaListKeypairsResponse::keypairsIsSet() const
{
    return keypairsIsSet_;
}

void NovaListKeypairsResponse::unsetkeypairs()
{
    keypairsIsSet_ = false;
}

}
}
}
}
}


