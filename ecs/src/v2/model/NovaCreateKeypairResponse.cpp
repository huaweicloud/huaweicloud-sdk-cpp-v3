

#include "huaweicloud/ecs/v2/model/NovaCreateKeypairResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaCreateKeypairResponse::NovaCreateKeypairResponse()
{
    keypairIsSet_ = false;
}

NovaCreateKeypairResponse::~NovaCreateKeypairResponse() = default;

void NovaCreateKeypairResponse::validate()
{
}

web::json::value NovaCreateKeypairResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keypairIsSet_) {
        val[utility::conversions::to_string_t("keypair")] = ModelBase::toJson(keypair_);
    }

    return val;
}
bool NovaCreateKeypairResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keypair"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keypair"));
        if(!fieldValue.is_null())
        {
            NovaKeypair refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeypair(refVal);
        }
    }
    return ok;
}


NovaKeypair NovaCreateKeypairResponse::getKeypair() const
{
    return keypair_;
}

void NovaCreateKeypairResponse::setKeypair(const NovaKeypair& value)
{
    keypair_ = value;
    keypairIsSet_ = true;
}

bool NovaCreateKeypairResponse::keypairIsSet() const
{
    return keypairIsSet_;
}

void NovaCreateKeypairResponse::unsetkeypair()
{
    keypairIsSet_ = false;
}

}
}
}
}
}


