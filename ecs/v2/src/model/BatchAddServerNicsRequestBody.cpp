

#include "huaweicloud/ecs/model/BatchAddServerNicsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAddServerNicsRequestBody::BatchAddServerNicsRequestBody()
{
    nicsIsSet_ = false;
}

BatchAddServerNicsRequestBody::~BatchAddServerNicsRequestBody() = default;

void BatchAddServerNicsRequestBody::validate()
{
}

web::json::value BatchAddServerNicsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nicsIsSet_) {
        val[utility::conversions::to_string_t("nics")] = ModelBase::toJson(nics_);
    }

    return val;
}

bool BatchAddServerNicsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nics"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchAddServerNicOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNics(refVal);
        }
    }
    return ok;
}


std::vector<BatchAddServerNicOption>& BatchAddServerNicsRequestBody::getNics()
{
    return nics_;
}

void BatchAddServerNicsRequestBody::setNics(const std::vector<BatchAddServerNicOption>& value)
{
    nics_ = value;
    nicsIsSet_ = true;
}

bool BatchAddServerNicsRequestBody::nicsIsSet() const
{
    return nicsIsSet_;
}

void BatchAddServerNicsRequestBody::unsetnics()
{
    nicsIsSet_ = false;
}

}
}
}
}
}


