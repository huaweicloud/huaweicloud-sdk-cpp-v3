

#include "huaweicloud/functiongraph/v2/model/EnableAsyncStatusLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




EnableAsyncStatusLogRequest::EnableAsyncStatusLogRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

EnableAsyncStatusLogRequest::~EnableAsyncStatusLogRequest() = default;

void EnableAsyncStatusLogRequest::validate()
{
}

web::json::value EnableAsyncStatusLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool EnableAsyncStatusLogRequest::fromJson(const web::json::value& val)
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


std::string EnableAsyncStatusLogRequest::getContentType() const
{
    return contentType_;
}

void EnableAsyncStatusLogRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool EnableAsyncStatusLogRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void EnableAsyncStatusLogRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


