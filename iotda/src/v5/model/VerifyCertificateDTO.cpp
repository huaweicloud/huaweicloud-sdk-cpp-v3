

#include "huaweicloud/iotda/v5/model/VerifyCertificateDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




VerifyCertificateDTO::VerifyCertificateDTO()
{
    verifyContent_ = "";
    verifyContentIsSet_ = false;
}

VerifyCertificateDTO::~VerifyCertificateDTO() = default;

void VerifyCertificateDTO::validate()
{
}

web::json::value VerifyCertificateDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(verifyContentIsSet_) {
        val[utility::conversions::to_string_t("verify_content")] = ModelBase::toJson(verifyContent_);
    }

    return val;
}
bool VerifyCertificateDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("verify_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyContent(refVal);
        }
    }
    return ok;
}


std::string VerifyCertificateDTO::getVerifyContent() const
{
    return verifyContent_;
}

void VerifyCertificateDTO::setVerifyContent(const std::string& value)
{
    verifyContent_ = value;
    verifyContentIsSet_ = true;
}

bool VerifyCertificateDTO::verifyContentIsSet() const
{
    return verifyContentIsSet_;
}

void VerifyCertificateDTO::unsetverifyContent()
{
    verifyContentIsSet_ = false;
}

}
}
}
}
}


