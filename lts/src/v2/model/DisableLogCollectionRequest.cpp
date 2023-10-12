

#include "huaweicloud/lts/v2/model/DisableLogCollectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DisableLogCollectionRequest::DisableLogCollectionRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DisableLogCollectionRequest::~DisableLogCollectionRequest() = default;

void DisableLogCollectionRequest::validate()
{
}

web::json::value DisableLogCollectionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool DisableLogCollectionRequest::fromJson(const web::json::value& val)
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


std::string DisableLogCollectionRequest::getContentType() const
{
    return contentType_;
}

void DisableLogCollectionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DisableLogCollectionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DisableLogCollectionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


