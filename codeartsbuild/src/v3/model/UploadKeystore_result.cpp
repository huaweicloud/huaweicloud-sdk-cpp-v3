

#include "huaweicloud/codeartsbuild/v3/model/UploadKeystore_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UploadKeystore_result::UploadKeystore_result()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
}

UploadKeystore_result::~UploadKeystore_result() = default;

void UploadKeystore_result::validate()
{
}

web::json::value UploadKeystore_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }

    return val;
}
bool UploadKeystore_result::fromJson(const web::json::value& val)
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


std::string UploadKeystore_result::getKeystoreId() const
{
    return keystoreId_;
}

void UploadKeystore_result::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool UploadKeystore_result::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void UploadKeystore_result::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

}
}
}
}
}


