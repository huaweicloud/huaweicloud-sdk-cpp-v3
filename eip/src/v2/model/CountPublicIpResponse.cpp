

#include "huaweicloud/eip/v2/model/CountPublicIpResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CountPublicIpResponse::CountPublicIpResponse()
{
    elasticipSize_ = 0;
    elasticipSizeIsSet_ = false;
}

CountPublicIpResponse::~CountPublicIpResponse() = default;

void CountPublicIpResponse::validate()
{
}

web::json::value CountPublicIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(elasticipSizeIsSet_) {
        val[utility::conversions::to_string_t("elasticip_size")] = ModelBase::toJson(elasticipSize_);
    }

    return val;
}

bool CountPublicIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("elasticip_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elasticip_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElasticipSize(refVal);
        }
    }
    return ok;
}

int32_t CountPublicIpResponse::getElasticipSize() const
{
    return elasticipSize_;
}

void CountPublicIpResponse::setElasticipSize(int32_t value)
{
    elasticipSize_ = value;
    elasticipSizeIsSet_ = true;
}

bool CountPublicIpResponse::elasticipSizeIsSet() const
{
    return elasticipSizeIsSet_;
}

void CountPublicIpResponse::unsetelasticipSize()
{
    elasticipSizeIsSet_ = false;
}

}
}
}
}
}


