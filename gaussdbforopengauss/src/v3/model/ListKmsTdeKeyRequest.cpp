

#include "huaweicloud/gaussdbforopengauss/v3/model/ListKmsTdeKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListKmsTdeKeyRequest::ListKmsTdeKeyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    kmsProjectName_ = "";
    kmsProjectNameIsSet_ = false;
}

ListKmsTdeKeyRequest::~ListKmsTdeKeyRequest() = default;

void ListKmsTdeKeyRequest::validate()
{
}

web::json::value ListKmsTdeKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(kmsProjectNameIsSet_) {
        val[utility::conversions::to_string_t("kms_project_name")] = ModelBase::toJson(kmsProjectName_);
    }

    return val;
}
bool ListKmsTdeKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kms_project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsProjectName(refVal);
        }
    }
    return ok;
}


std::string ListKmsTdeKeyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListKmsTdeKeyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListKmsTdeKeyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListKmsTdeKeyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListKmsTdeKeyRequest::getKmsProjectName() const
{
    return kmsProjectName_;
}

void ListKmsTdeKeyRequest::setKmsProjectName(const std::string& value)
{
    kmsProjectName_ = value;
    kmsProjectNameIsSet_ = true;
}

bool ListKmsTdeKeyRequest::kmsProjectNameIsSet() const
{
    return kmsProjectNameIsSet_;
}

void ListKmsTdeKeyRequest::unsetkmsProjectName()
{
    kmsProjectNameIsSet_ = false;
}

}
}
}
}
}


