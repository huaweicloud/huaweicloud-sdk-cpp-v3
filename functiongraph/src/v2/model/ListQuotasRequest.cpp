

#include "huaweicloud/functiongraph/v2/model/ListQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListQuotasRequest::ListQuotasRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListQuotasRequest::~ListQuotasRequest() = default;

void ListQuotasRequest::validate()
{
}

web::json::value ListQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListQuotasRequest::fromJson(const web::json::value& val)
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


std::string ListQuotasRequest::getContentType() const
{
    return contentType_;
}

void ListQuotasRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListQuotasRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListQuotasRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


