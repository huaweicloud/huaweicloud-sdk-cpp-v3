

#include "huaweicloud/gaussdbforopengauss/v3/model/ReduceDnRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ReduceDnRequestBody::ReduceDnRequestBody()
{
    contractionNum_ = 0;
    contractionNumIsSet_ = false;
}

ReduceDnRequestBody::~ReduceDnRequestBody() = default;

void ReduceDnRequestBody::validate()
{
}

web::json::value ReduceDnRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contractionNumIsSet_) {
        val[utility::conversions::to_string_t("contraction_num")] = ModelBase::toJson(contractionNum_);
    }

    return val;
}
bool ReduceDnRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("contraction_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contraction_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContractionNum(refVal);
        }
    }
    return ok;
}


int32_t ReduceDnRequestBody::getContractionNum() const
{
    return contractionNum_;
}

void ReduceDnRequestBody::setContractionNum(int32_t value)
{
    contractionNum_ = value;
    contractionNumIsSet_ = true;
}

bool ReduceDnRequestBody::contractionNumIsSet() const
{
    return contractionNumIsSet_;
}

void ReduceDnRequestBody::unsetcontractionNum()
{
    contractionNumIsSet_ = false;
}

}
}
}
}
}


