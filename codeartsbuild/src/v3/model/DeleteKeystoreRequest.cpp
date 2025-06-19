

#include "huaweicloud/codeartsbuild/v3/model/DeleteKeystoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteKeystoreRequest::DeleteKeystoreRequest()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
}

DeleteKeystoreRequest::~DeleteKeystoreRequest() = default;

void DeleteKeystoreRequest::validate()
{
}

web::json::value DeleteKeystoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }

    return val;
}
bool DeleteKeystoreRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteKeystoreRequest::getKeystoreId() const
{
    return keystoreId_;
}

void DeleteKeystoreRequest::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool DeleteKeystoreRequest::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void DeleteKeystoreRequest::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

}
}
}
}
}


