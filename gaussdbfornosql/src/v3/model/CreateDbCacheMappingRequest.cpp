

#include "huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheMappingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateDbCacheMappingRequest::CreateDbCacheMappingRequest()
{
    bodyIsSet_ = false;
}

CreateDbCacheMappingRequest::~CreateDbCacheMappingRequest() = default;

void CreateDbCacheMappingRequest::validate()
{
}

web::json::value CreateDbCacheMappingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDbCacheMappingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDbCacheMappingRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateDbCacheMappingRequestBody CreateDbCacheMappingRequest::getBody() const
{
    return body_;
}

void CreateDbCacheMappingRequest::setBody(const CreateDbCacheMappingRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDbCacheMappingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDbCacheMappingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


