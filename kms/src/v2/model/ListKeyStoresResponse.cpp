

#include "huaweicloud/kms/v2/model/ListKeyStoresResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeyStoresResponse::ListKeyStoresResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    keystoresIsSet_ = false;
}

ListKeyStoresResponse::~ListKeyStoresResponse() = default;

void ListKeyStoresResponse::validate()
{
}

web::json::value ListKeyStoresResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(keystoresIsSet_) {
        val[utility::conversions::to_string_t("keystores")] = ModelBase::toJson(keystores_);
    }

    return val;
}
bool ListKeyStoresResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystores"));
        if(!fieldValue.is_null())
        {
            std::vector<KeystoreDetails> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystores(refVal);
        }
    }
    return ok;
}


int32_t ListKeyStoresResponse::getTotal() const
{
    return total_;
}

void ListKeyStoresResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListKeyStoresResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListKeyStoresResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<KeystoreDetails>& ListKeyStoresResponse::getKeystores()
{
    return keystores_;
}

void ListKeyStoresResponse::setKeystores(const std::vector<KeystoreDetails>& value)
{
    keystores_ = value;
    keystoresIsSet_ = true;
}

bool ListKeyStoresResponse::keystoresIsSet() const
{
    return keystoresIsSet_;
}

void ListKeyStoresResponse::unsetkeystores()
{
    keystoresIsSet_ = false;
}

}
}
}
}
}


