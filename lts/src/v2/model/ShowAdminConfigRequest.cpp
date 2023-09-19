

#include "huaweicloud/lts/v2/model/ShowAdminConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowAdminConfigRequest::ShowAdminConfigRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowAdminConfigRequest::~ShowAdminConfigRequest() = default;

void ShowAdminConfigRequest::validate()
{
}

web::json::value ShowAdminConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool ShowAdminConfigRequest::fromJson(const web::json::value& val)
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

std::string ShowAdminConfigRequest::getContentType() const
{
    return contentType_;
}

void ShowAdminConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowAdminConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowAdminConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


