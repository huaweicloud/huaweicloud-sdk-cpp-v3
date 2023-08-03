

#include "huaweicloud/rds/v3/model/ListPredefinedTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPredefinedTagRequest::ListPredefinedTagRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListPredefinedTagRequest::~ListPredefinedTagRequest() = default;

void ListPredefinedTagRequest::validate()
{
}

web::json::value ListPredefinedTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ListPredefinedTagRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string ListPredefinedTagRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPredefinedTagRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPredefinedTagRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPredefinedTagRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


