

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateFeaturesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateFeaturesRequestBody::UpdateFeaturesRequestBody()
{
    paramsIsSet_ = false;
}

UpdateFeaturesRequestBody::~UpdateFeaturesRequestBody() = default;

void UpdateFeaturesRequestBody::validate()
{
}

web::json::value UpdateFeaturesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool UpdateFeaturesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


Object UpdateFeaturesRequestBody::getParams() const
{
    return params_;
}

void UpdateFeaturesRequestBody::setParams(const Object& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool UpdateFeaturesRequestBody::paramsIsSet() const
{
    return paramsIsSet_;
}

void UpdateFeaturesRequestBody::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


