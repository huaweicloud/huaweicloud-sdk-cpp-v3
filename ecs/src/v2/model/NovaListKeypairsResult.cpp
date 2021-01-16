

#include "huaweicloud/ecs/v2/model/NovaListKeypairsResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListKeypairsResult::NovaListKeypairsResult()
{
    keypairIsSet_ = false;
}

NovaListKeypairsResult::~NovaListKeypairsResult() = default;

void NovaListKeypairsResult::validate()
{
}

web::json::value NovaListKeypairsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keypairIsSet_) {
        val[utility::conversions::to_string_t("keypair")] = ModelBase::toJson(keypair_);
    }

    return val;
}

bool NovaListKeypairsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keypair"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keypair"));
        if(!fieldValue.is_null())
        {
            NovaSimpleKeypair refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeypair(refVal);
        }
    }
    return ok;
}


NovaSimpleKeypair NovaListKeypairsResult::getKeypair() const
{
    return keypair_;
}

void NovaListKeypairsResult::setKeypair(const NovaSimpleKeypair& value)
{
    keypair_ = value;
    keypairIsSet_ = true;
}

bool NovaListKeypairsResult::keypairIsSet() const
{
    return keypairIsSet_;
}

void NovaListKeypairsResult::unsetkeypair()
{
    keypairIsSet_ = false;
}

}
}
}
}
}


