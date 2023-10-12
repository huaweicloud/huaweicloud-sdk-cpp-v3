

#include "huaweicloud/ecs/v2/model/NovaShowKeypairResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaShowKeypairResponse::NovaShowKeypairResponse()
{
    keypairIsSet_ = false;
}

NovaShowKeypairResponse::~NovaShowKeypairResponse() = default;

void NovaShowKeypairResponse::validate()
{
}

web::json::value NovaShowKeypairResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keypairIsSet_) {
        val[utility::conversions::to_string_t("keypair")] = ModelBase::toJson(keypair_);
    }

    return val;
}
bool NovaShowKeypairResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keypair"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keypair"));
        if(!fieldValue.is_null())
        {
            NovaKeypairDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeypair(refVal);
        }
    }
    return ok;
}


NovaKeypairDetail NovaShowKeypairResponse::getKeypair() const
{
    return keypair_;
}

void NovaShowKeypairResponse::setKeypair(const NovaKeypairDetail& value)
{
    keypair_ = value;
    keypairIsSet_ = true;
}

bool NovaShowKeypairResponse::keypairIsSet() const
{
    return keypairIsSet_;
}

void NovaShowKeypairResponse::unsetkeypair()
{
    keypairIsSet_ = false;
}

}
}
}
}
}


