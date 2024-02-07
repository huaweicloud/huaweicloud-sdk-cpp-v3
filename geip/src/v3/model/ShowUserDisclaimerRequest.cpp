

#include "huaweicloud/geip/v3/model/ShowUserDisclaimerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowUserDisclaimerRequest::ShowUserDisclaimerRequest()
{
    fieldsIsSet_ = false;
}

ShowUserDisclaimerRequest::~ShowUserDisclaimerRequest() = default;

void ShowUserDisclaimerRequest::validate()
{
}

web::json::value ShowUserDisclaimerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool ShowUserDisclaimerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowUserDisclaimerRequest::getFields()
{
    return fields_;
}

void ShowUserDisclaimerRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ShowUserDisclaimerRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ShowUserDisclaimerRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

}
}
}
}
}


