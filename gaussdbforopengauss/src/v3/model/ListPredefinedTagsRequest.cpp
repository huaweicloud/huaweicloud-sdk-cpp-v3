

#include "huaweicloud/gaussdbforopengauss/v3/model/ListPredefinedTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListPredefinedTagsRequest::ListPredefinedTagsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListPredefinedTagsRequest::~ListPredefinedTagsRequest() = default;

void ListPredefinedTagsRequest::validate()
{
}

web::json::value ListPredefinedTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ListPredefinedTagsRequest::fromJson(const web::json::value& val)
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

std::string ListPredefinedTagsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPredefinedTagsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPredefinedTagsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPredefinedTagsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


