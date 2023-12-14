

#include "huaweicloud/live/v1/model/CreateUrlAuthchainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateUrlAuthchainResponse::CreateUrlAuthchainResponse()
{
    keychainIsSet_ = false;
}

CreateUrlAuthchainResponse::~CreateUrlAuthchainResponse() = default;

void CreateUrlAuthchainResponse::validate()
{
}

web::json::value CreateUrlAuthchainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keychainIsSet_) {
        val[utility::conversions::to_string_t("keychain")] = ModelBase::toJson(keychain_);
    }

    return val;
}
bool CreateUrlAuthchainResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keychain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keychain"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeychain(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CreateUrlAuthchainResponse::getKeychain()
{
    return keychain_;
}

void CreateUrlAuthchainResponse::setKeychain(const std::vector<std::string>& value)
{
    keychain_ = value;
    keychainIsSet_ = true;
}

bool CreateUrlAuthchainResponse::keychainIsSet() const
{
    return keychainIsSet_;
}

void CreateUrlAuthchainResponse::unsetkeychain()
{
    keychainIsSet_ = false;
}

}
}
}
}
}


