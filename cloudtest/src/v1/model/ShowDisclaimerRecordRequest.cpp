

#include "huaweicloud/cloudtest/v1/model/ShowDisclaimerRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowDisclaimerRecordRequest::ShowDisclaimerRecordRequest()
{
    type_ = "";
    typeIsSet_ = false;
}

ShowDisclaimerRecordRequest::~ShowDisclaimerRecordRequest() = default;

void ShowDisclaimerRecordRequest::validate()
{
}

web::json::value ShowDisclaimerRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowDisclaimerRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ShowDisclaimerRecordRequest::getType() const
{
    return type_;
}

void ShowDisclaimerRecordRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowDisclaimerRecordRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowDisclaimerRecordRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


