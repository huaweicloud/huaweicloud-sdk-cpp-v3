

#include "huaweicloud/modelarts/v1/model/DeleteImageGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteImageGroupRequestBody::DeleteImageGroupRequestBody()
{
    isForce_ = false;
    isForceIsSet_ = false;
}

DeleteImageGroupRequestBody::~DeleteImageGroupRequestBody() = default;

void DeleteImageGroupRequestBody::validate()
{
}

web::json::value DeleteImageGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isForceIsSet_) {
        val[utility::conversions::to_string_t("is_force")] = ModelBase::toJson(isForce_);
    }

    return val;
}
bool DeleteImageGroupRequestBody::fromJson(const web::json::value& val)
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


bool DeleteImageGroupRequestBody::isIsForce() const
{
    return isForce_;
}

void DeleteImageGroupRequestBody::setIsForce(bool value)
{
    isForce_ = value;
    isForceIsSet_ = true;
}

bool DeleteImageGroupRequestBody::isForceIsSet() const
{
    return isForceIsSet_;
}

void DeleteImageGroupRequestBody::unsetisForce()
{
    isForceIsSet_ = false;
}

}
}
}
}
}


