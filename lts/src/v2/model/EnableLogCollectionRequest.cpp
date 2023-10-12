

#include "huaweicloud/lts/v2/model/EnableLogCollectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




EnableLogCollectionRequest::EnableLogCollectionRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

EnableLogCollectionRequest::~EnableLogCollectionRequest() = default;

void EnableLogCollectionRequest::validate()
{
}

web::json::value EnableLogCollectionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool EnableLogCollectionRequest::fromJson(const web::json::value& val)
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


std::string EnableLogCollectionRequest::getContentType() const
{
    return contentType_;
}

void EnableLogCollectionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool EnableLogCollectionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void EnableLogCollectionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


