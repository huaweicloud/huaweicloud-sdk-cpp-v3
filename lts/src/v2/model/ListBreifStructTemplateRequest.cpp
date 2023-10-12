

#include "huaweicloud/lts/v2/model/ListBreifStructTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListBreifStructTemplateRequest::ListBreifStructTemplateRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListBreifStructTemplateRequest::~ListBreifStructTemplateRequest() = default;

void ListBreifStructTemplateRequest::validate()
{
}

web::json::value ListBreifStructTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListBreifStructTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListBreifStructTemplateRequest::getContentType() const
{
    return contentType_;
}

void ListBreifStructTemplateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListBreifStructTemplateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListBreifStructTemplateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


