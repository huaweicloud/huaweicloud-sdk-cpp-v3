

#include "huaweicloud/vpc/model/ShowPrivateipResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowPrivateipResponse::ShowPrivateipResponse()
{
    privateipIsSet_ = false;
}

ShowPrivateipResponse::~ShowPrivateipResponse() = default;

void ShowPrivateipResponse::validate()
{
}

web::json::value ShowPrivateipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privateipIsSet_) {
        val[utility::conversions::to_string_t("privateip")] = ModelBase::toJson(privateip_);
    }

    return val;
}

bool ShowPrivateipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("privateip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privateip"));
        if(!fieldValue.is_null())
        {
            Privateip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateip(refVal);
        }
    }
    return ok;
}


Privateip ShowPrivateipResponse::getPrivateip() const
{
    return privateip_;
}

void ShowPrivateipResponse::setPrivateip(const Privateip& value)
{
    privateip_ = value;
    privateipIsSet_ = true;
}

bool ShowPrivateipResponse::privateipIsSet() const
{
    return privateipIsSet_;
}

void ShowPrivateipResponse::unsetprivateip()
{
    privateipIsSet_ = false;
}

}
}
}
}
}


