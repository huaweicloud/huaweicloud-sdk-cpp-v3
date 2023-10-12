

#include "huaweicloud/kms/v2/model/KeyStoreStateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




KeyStoreStateInfo::KeyStoreStateInfo()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    keystoreState_ = "";
    keystoreStateIsSet_ = false;
}

KeyStoreStateInfo::~KeyStoreStateInfo() = default;

void KeyStoreStateInfo::validate()
{
}

web::json::value KeyStoreStateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }
    if(keystoreStateIsSet_) {
        val[utility::conversions::to_string_t("keystore_state")] = ModelBase::toJson(keystoreState_);
    }

    return val;
}
bool KeyStoreStateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystore_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreState(refVal);
        }
    }
    return ok;
}


std::string KeyStoreStateInfo::getKeystoreId() const
{
    return keystoreId_;
}

void KeyStoreStateInfo::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool KeyStoreStateInfo::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void KeyStoreStateInfo::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

std::string KeyStoreStateInfo::getKeystoreState() const
{
    return keystoreState_;
}

void KeyStoreStateInfo::setKeystoreState(const std::string& value)
{
    keystoreState_ = value;
    keystoreStateIsSet_ = true;
}

bool KeyStoreStateInfo::keystoreStateIsSet() const
{
    return keystoreStateIsSet_;
}

void KeyStoreStateInfo::unsetkeystoreState()
{
    keystoreStateIsSet_ = false;
}

}
}
}
}
}


