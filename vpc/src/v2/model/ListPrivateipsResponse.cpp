

#include "huaweicloud/vpc/v2/model/ListPrivateipsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListPrivateipsResponse::ListPrivateipsResponse()
{
    privateipsIsSet_ = false;
}

ListPrivateipsResponse::~ListPrivateipsResponse() = default;

void ListPrivateipsResponse::validate()
{
}

web::json::value ListPrivateipsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privateipsIsSet_) {
        val[utility::conversions::to_string_t("privateips")] = ModelBase::toJson(privateips_);
    }

    return val;
}
bool ListPrivateipsResponse::fromJson(const web::json::value& val)
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


std::vector<Privateip>& ListPrivateipsResponse::getPrivateips()
{
    return privateips_;
}

void ListPrivateipsResponse::setPrivateips(const std::vector<Privateip>& value)
{
    privateips_ = value;
    privateipsIsSet_ = true;
}

bool ListPrivateipsResponse::privateipsIsSet() const
{
    return privateipsIsSet_;
}

void ListPrivateipsResponse::unsetprivateips()
{
    privateipsIsSet_ = false;
}

}
}
}
}
}


