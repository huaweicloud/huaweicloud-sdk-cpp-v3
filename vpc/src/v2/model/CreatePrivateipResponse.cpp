

#include "huaweicloud/vpc/v2/model/CreatePrivateipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreatePrivateipResponse::CreatePrivateipResponse()
{
    privateipsIsSet_ = false;
}

CreatePrivateipResponse::~CreatePrivateipResponse() = default;

void CreatePrivateipResponse::validate()
{
}

web::json::value CreatePrivateipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privateipsIsSet_) {
        val[utility::conversions::to_string_t("privateips")] = ModelBase::toJson(privateips_);
    }

    return val;
}
bool CreatePrivateipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("privateips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privateips"));
        if(!fieldValue.is_null())
        {
            std::vector<Privateip> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateips(refVal);
        }
    }
    return ok;
}


std::vector<Privateip>& CreatePrivateipResponse::getPrivateips()
{
    return privateips_;
}

void CreatePrivateipResponse::setPrivateips(const std::vector<Privateip>& value)
{
    privateips_ = value;
    privateipsIsSet_ = true;
}

bool CreatePrivateipResponse::privateipsIsSet() const
{
    return privateipsIsSet_;
}

void CreatePrivateipResponse::unsetprivateips()
{
    privateipsIsSet_ = false;
}

}
}
}
}
}


