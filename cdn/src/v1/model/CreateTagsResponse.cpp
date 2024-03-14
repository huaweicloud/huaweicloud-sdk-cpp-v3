

#include "huaweicloud/cdn/v1/model/CreateTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CreateTagsResponse::CreateTagsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateTagsResponse::~CreateTagsResponse() = default;

void CreateTagsResponse::validate()
{
}

web::json::value CreateTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


