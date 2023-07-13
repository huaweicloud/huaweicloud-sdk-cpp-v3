

#include "huaweicloud/ecs/v2/model/NovaDeleteKeypairRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaDeleteKeypairRequest::NovaDeleteKeypairRequest()
{
    keypairName_ = "";
    keypairNameIsSet_ = false;
}

NovaDeleteKeypairRequest::~NovaDeleteKeypairRequest() = default;

void NovaDeleteKeypairRequest::validate()
{
}

web::json::value NovaDeleteKeypairRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keypairNameIsSet_) {
        val[utility::conversions::to_string_t("keypair_name")] = ModelBase::toJson(keypairName_);
    }

    return val;
}

bool NovaDeleteKeypairRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keypair_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keypair_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeypairName(refVal);
        }
    }
    return ok;
}

std::string NovaDeleteKeypairRequest::getKeypairName() const
{
    return keypairName_;
}

void NovaDeleteKeypairRequest::setKeypairName(const std::string& value)
{
    keypairName_ = value;
    keypairNameIsSet_ = true;
}

bool NovaDeleteKeypairRequest::keypairNameIsSet() const
{
    return keypairNameIsSet_;
}

void NovaDeleteKeypairRequest::unsetkeypairName()
{
    keypairNameIsSet_ = false;
}

}
}
}
}
}


