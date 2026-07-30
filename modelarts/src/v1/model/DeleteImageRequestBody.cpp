

#include "huaweicloud/modelarts/v1/model/DeleteImageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteImageRequestBody::DeleteImageRequestBody()
{
    isForce_ = false;
    isForceIsSet_ = false;
}

DeleteImageRequestBody::~DeleteImageRequestBody() = default;

void DeleteImageRequestBody::validate()
{
}

web::json::value DeleteImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isForceIsSet_) {
        val[utility::conversions::to_string_t("is_force")] = ModelBase::toJson(isForce_);
    }

    return val;
}
bool DeleteImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_force"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_force"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsForce(refVal);
        }
    }
    return ok;
}


bool DeleteImageRequestBody::isIsForce() const
{
    return isForce_;
}

void DeleteImageRequestBody::setIsForce(bool value)
{
    isForce_ = value;
    isForceIsSet_ = true;
}

bool DeleteImageRequestBody::isForceIsSet() const
{
    return isForceIsSet_;
}

void DeleteImageRequestBody::unsetisForce()
{
    isForceIsSet_ = false;
}

}
}
}
}
}


