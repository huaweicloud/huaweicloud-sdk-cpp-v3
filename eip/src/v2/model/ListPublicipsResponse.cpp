

#include "huaweicloud/eip/v2/model/ListPublicipsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListPublicipsResponse::ListPublicipsResponse()
{
    publicipsIsSet_ = false;
}

ListPublicipsResponse::~ListPublicipsResponse() = default;

void ListPublicipsResponse::validate()
{
}

web::json::value ListPublicipsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipsIsSet_) {
        val[utility::conversions::to_string_t("publicips")] = ModelBase::toJson(publicips_);
    }

    return val;
}
bool ListPublicipsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicips"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicipShowResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicips(refVal);
        }
    }
    return ok;
}


std::vector<PublicipShowResp>& ListPublicipsResponse::getPublicips()
{
    return publicips_;
}

void ListPublicipsResponse::setPublicips(const std::vector<PublicipShowResp>& value)
{
    publicips_ = value;
    publicipsIsSet_ = true;
}

bool ListPublicipsResponse::publicipsIsSet() const
{
    return publicipsIsSet_;
}

void ListPublicipsResponse::unsetpublicips()
{
    publicipsIsSet_ = false;
}

}
}
}
}
}


