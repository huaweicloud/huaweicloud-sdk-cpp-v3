

#include "huaweicloud/ecs/v2/model/NovaCreateKeypairRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaCreateKeypairRequestBody::NovaCreateKeypairRequestBody()
{
    keypairIsSet_ = false;
}

NovaCreateKeypairRequestBody::~NovaCreateKeypairRequestBody() = default;

void NovaCreateKeypairRequestBody::validate()
{
}

web::json::value NovaCreateKeypairRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keypairIsSet_) {
        val[utility::conversions::to_string_t("keypair")] = ModelBase::toJson(keypair_);
    }

    return val;
}

bool NovaCreateKeypairRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keypair"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keypair"));
        if(!fieldValue.is_null())
        {
            NovaCreateKeypairOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeypair(refVal);
        }
    }
    return ok;
}

NovaCreateKeypairOption NovaCreateKeypairRequestBody::getKeypair() const
{
    return keypair_;
}

void NovaCreateKeypairRequestBody::setKeypair(const NovaCreateKeypairOption& value)
{
    keypair_ = value;
    keypairIsSet_ = true;
}

bool NovaCreateKeypairRequestBody::keypairIsSet() const
{
    return keypairIsSet_;
}

void NovaCreateKeypairRequestBody::unsetkeypair()
{
    keypairIsSet_ = false;
}

}
}
}
}
}


