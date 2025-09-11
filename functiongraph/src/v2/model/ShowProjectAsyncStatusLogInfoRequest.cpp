

#include "huaweicloud/functiongraph/v2/model/ShowProjectAsyncStatusLogInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowProjectAsyncStatusLogInfoRequest::ShowProjectAsyncStatusLogInfoRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowProjectAsyncStatusLogInfoRequest::~ShowProjectAsyncStatusLogInfoRequest() = default;

void ShowProjectAsyncStatusLogInfoRequest::validate()
{
}

web::json::value ShowProjectAsyncStatusLogInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowProjectAsyncStatusLogInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowProjectAsyncStatusLogInfoRequest::getContentType() const
{
    return contentType_;
}

void ShowProjectAsyncStatusLogInfoRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowProjectAsyncStatusLogInfoRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowProjectAsyncStatusLogInfoRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


