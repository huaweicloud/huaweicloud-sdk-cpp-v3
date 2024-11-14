

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheMappingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteDbCacheMappingRequest::DeleteDbCacheMappingRequest()
{
    bodyIsSet_ = false;
}

DeleteDbCacheMappingRequest::~DeleteDbCacheMappingRequest() = default;

void DeleteDbCacheMappingRequest::validate()
{
}

web::json::value DeleteDbCacheMappingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteDbCacheMappingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteDbCacheMappingRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteDbCacheMappingRequestBody DeleteDbCacheMappingRequest::getBody() const
{
    return body_;
}

void DeleteDbCacheMappingRequest::setBody(const DeleteDbCacheMappingRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDbCacheMappingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDbCacheMappingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


