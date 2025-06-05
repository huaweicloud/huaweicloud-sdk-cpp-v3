

#include "huaweicloud/codeartsbuild/v3/model/ListKeystore_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListKeystore_result::ListKeystore_result()
{
    keystoreName_ = "";
    keystoreNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ListKeystore_result::~ListKeystore_result() = default;

void ListKeystore_result::validate()
{
}

web::json::value ListKeystore_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreNameIsSet_) {
        val[utility::conversions::to_string_t("keystore_name")] = ModelBase::toJson(keystoreName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ListKeystore_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ListKeystore_result::getKeystoreName() const
{
    return keystoreName_;
}

void ListKeystore_result::setKeystoreName(const std::string& value)
{
    keystoreName_ = value;
    keystoreNameIsSet_ = true;
}

bool ListKeystore_result::keystoreNameIsSet() const
{
    return keystoreNameIsSet_;
}

void ListKeystore_result::unsetkeystoreName()
{
    keystoreNameIsSet_ = false;
}

std::string ListKeystore_result::getId() const
{
    return id_;
}

void ListKeystore_result::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListKeystore_result::idIsSet() const
{
    return idIsSet_;
}

void ListKeystore_result::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


