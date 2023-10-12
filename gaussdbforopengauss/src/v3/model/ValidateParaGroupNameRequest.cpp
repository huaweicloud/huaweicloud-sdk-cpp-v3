

#include "huaweicloud/gaussdbforopengauss/v3/model/ValidateParaGroupNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ValidateParaGroupNameRequest::ValidateParaGroupNameRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ValidateParaGroupNameRequest::~ValidateParaGroupNameRequest() = default;

void ValidateParaGroupNameRequest::validate()
{
}

web::json::value ValidateParaGroupNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ValidateParaGroupNameRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ValidateParaGroupNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void ValidateParaGroupNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ValidateParaGroupNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ValidateParaGroupNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ValidateParaGroupNameRequest::getName() const
{
    return name_;
}

void ValidateParaGroupNameRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ValidateParaGroupNameRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ValidateParaGroupNameRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


