

#include "huaweicloud/gaussdbforopengauss/v3/model/ListKmsTdeKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListKmsTdeKeyResponse::ListKmsTdeKeyResponse()
{
    keyDetailsIsSet_ = false;
    authorizedId_ = "";
    authorizedIdIsSet_ = false;
    authorizedName_ = "";
    authorizedNameIsSet_ = false;
}

ListKmsTdeKeyResponse::~ListKmsTdeKeyResponse() = default;

void ListKmsTdeKeyResponse::validate()
{
}

web::json::value ListKmsTdeKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyDetailsIsSet_) {
        val[utility::conversions::to_string_t("key_details")] = ModelBase::toJson(keyDetails_);
    }
    if(authorizedIdIsSet_) {
        val[utility::conversions::to_string_t("authorized_id")] = ModelBase::toJson(authorizedId_);
    }
    if(authorizedNameIsSet_) {
        val[utility::conversions::to_string_t("authorized_name")] = ModelBase::toJson(authorizedName_);
    }

    return val;
}
bool ListKmsTdeKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_details"));
        if(!fieldValue.is_null())
        {
            std::vector<ListKmsTdeKeyResponseBody_key_details> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorized_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorized_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizedId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorized_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorized_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizedName(refVal);
        }
    }
    return ok;
}


std::vector<ListKmsTdeKeyResponseBody_key_details>& ListKmsTdeKeyResponse::getKeyDetails()
{
    return keyDetails_;
}

void ListKmsTdeKeyResponse::setKeyDetails(const std::vector<ListKmsTdeKeyResponseBody_key_details>& value)
{
    keyDetails_ = value;
    keyDetailsIsSet_ = true;
}

bool ListKmsTdeKeyResponse::keyDetailsIsSet() const
{
    return keyDetailsIsSet_;
}

void ListKmsTdeKeyResponse::unsetkeyDetails()
{
    keyDetailsIsSet_ = false;
}

std::string ListKmsTdeKeyResponse::getAuthorizedId() const
{
    return authorizedId_;
}

void ListKmsTdeKeyResponse::setAuthorizedId(const std::string& value)
{
    authorizedId_ = value;
    authorizedIdIsSet_ = true;
}

bool ListKmsTdeKeyResponse::authorizedIdIsSet() const
{
    return authorizedIdIsSet_;
}

void ListKmsTdeKeyResponse::unsetauthorizedId()
{
    authorizedIdIsSet_ = false;
}

std::string ListKmsTdeKeyResponse::getAuthorizedName() const
{
    return authorizedName_;
}

void ListKmsTdeKeyResponse::setAuthorizedName(const std::string& value)
{
    authorizedName_ = value;
    authorizedNameIsSet_ = true;
}

bool ListKmsTdeKeyResponse::authorizedNameIsSet() const
{
    return authorizedNameIsSet_;
}

void ListKmsTdeKeyResponse::unsetauthorizedName()
{
    authorizedNameIsSet_ = false;
}

}
}
}
}
}


