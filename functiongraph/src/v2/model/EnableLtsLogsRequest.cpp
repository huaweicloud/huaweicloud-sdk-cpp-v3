

#include "huaweicloud/functiongraph/v2/model/EnableLtsLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




EnableLtsLogsRequest::EnableLtsLogsRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

EnableLtsLogsRequest::~EnableLtsLogsRequest() = default;

void EnableLtsLogsRequest::validate()
{
}

web::json::value EnableLtsLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool EnableLtsLogsRequest::fromJson(const web::json::value& val)
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


std::string EnableLtsLogsRequest::getContentType() const
{
    return contentType_;
}

void EnableLtsLogsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool EnableLtsLogsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void EnableLtsLogsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


