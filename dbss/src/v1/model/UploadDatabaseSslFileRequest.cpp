

#include "huaweicloud/dbss/v1/model/UploadDatabaseSslFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UploadDatabaseSslFileRequest::UploadDatabaseSslFileRequest()
{
    pemKeyTxt_ = "";
    pemKeyTxtIsSet_ = false;
}

UploadDatabaseSslFileRequest::~UploadDatabaseSslFileRequest() = default;

void UploadDatabaseSslFileRequest::validate()
{
}

web::json::value UploadDatabaseSslFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pemKeyTxtIsSet_) {
        val[utility::conversions::to_string_t("pem_key_txt")] = ModelBase::toJson(pemKeyTxt_);
    }

    return val;
}
bool UploadDatabaseSslFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pem_key_txt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pem_key_txt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPemKeyTxt(refVal);
        }
    }
    return ok;
}


std::string UploadDatabaseSslFileRequest::getPemKeyTxt() const
{
    return pemKeyTxt_;
}

void UploadDatabaseSslFileRequest::setPemKeyTxt(const std::string& value)
{
    pemKeyTxt_ = value;
    pemKeyTxtIsSet_ = true;
}

bool UploadDatabaseSslFileRequest::pemKeyTxtIsSet() const
{
    return pemKeyTxtIsSet_;
}

void UploadDatabaseSslFileRequest::unsetpemKeyTxt()
{
    pemKeyTxtIsSet_ = false;
}

}
}
}
}
}


