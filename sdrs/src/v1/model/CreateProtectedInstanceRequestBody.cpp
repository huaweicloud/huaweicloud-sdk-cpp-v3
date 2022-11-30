

#include "huaweicloud/sdrs/v1/model/CreateProtectedInstanceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateProtectedInstanceRequestBody::CreateProtectedInstanceRequestBody()
{
    protectedInstanceIsSet_ = false;
}

CreateProtectedInstanceRequestBody::~CreateProtectedInstanceRequestBody() = default;

void CreateProtectedInstanceRequestBody::validate()
{
}

web::json::value CreateProtectedInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIsSet_) {
        val[utility::conversions::to_string_t("protected_instance")] = ModelBase::toJson(protectedInstance_);
    }

    return val;
}

bool CreateProtectedInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance"));
        if(!fieldValue.is_null())
        {
            CreateProtectedInstanceRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstance(refVal);
        }
    }
    return ok;
}


CreateProtectedInstanceRequestParams CreateProtectedInstanceRequestBody::getProtectedInstance() const
{
    return protectedInstance_;
}

void CreateProtectedInstanceRequestBody::setProtectedInstance(const CreateProtectedInstanceRequestParams& value)
{
    protectedInstance_ = value;
    protectedInstanceIsSet_ = true;
}

bool CreateProtectedInstanceRequestBody::protectedInstanceIsSet() const
{
    return protectedInstanceIsSet_;
}

void CreateProtectedInstanceRequestBody::unsetprotectedInstance()
{
    protectedInstanceIsSet_ = false;
}

}
}
}
}
}


