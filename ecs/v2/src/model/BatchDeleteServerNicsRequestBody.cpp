

#include "huaweicloud/ecs/model/BatchDeleteServerNicsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchDeleteServerNicsRequestBody::BatchDeleteServerNicsRequestBody()
{
    nicsIsSet_ = false;
}

BatchDeleteServerNicsRequestBody::~BatchDeleteServerNicsRequestBody() = default;

void BatchDeleteServerNicsRequestBody::validate()
{
}

web::json::value BatchDeleteServerNicsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nicsIsSet_) {
        val[utility::conversions::to_string_t("nics")] = ModelBase::toJson(nics_);
    }

    return val;
}

bool BatchDeleteServerNicsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nics"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeleteServerNicOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNics(refVal);
        }
    }
    return ok;
}


std::vector<BatchDeleteServerNicOption>& BatchDeleteServerNicsRequestBody::getNics()
{
    return nics_;
}

void BatchDeleteServerNicsRequestBody::setNics(const std::vector<BatchDeleteServerNicOption>& value)
{
    nics_ = value;
    nicsIsSet_ = true;
}

bool BatchDeleteServerNicsRequestBody::nicsIsSet() const
{
    return nicsIsSet_;
}

void BatchDeleteServerNicsRequestBody::unsetnics()
{
    nicsIsSet_ = false;
}

}
}
}
}
}


