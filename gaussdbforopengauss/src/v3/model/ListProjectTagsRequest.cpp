

#include "huaweicloud/gaussdbforopengauss/v3/model/ListProjectTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListProjectTagsRequest::ListProjectTagsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListProjectTagsRequest::~ListProjectTagsRequest() = default;

void ListProjectTagsRequest::validate()
{
}

web::json::value ListProjectTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ListProjectTagsRequest::fromJson(const web::json::value& val)
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

std::string ListProjectTagsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListProjectTagsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListProjectTagsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListProjectTagsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


