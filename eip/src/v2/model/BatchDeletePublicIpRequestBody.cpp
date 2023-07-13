

#include "huaweicloud/eip/v2/model/BatchDeletePublicIpRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchDeletePublicIpRequestBody::BatchDeletePublicIpRequestBody()
{
    publicipIdsIsSet_ = false;
}

BatchDeletePublicIpRequestBody::~BatchDeletePublicIpRequestBody() = default;

void BatchDeletePublicIpRequestBody::validate()
{
}

web::json::value BatchDeletePublicIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdsIsSet_) {
        val[utility::conversions::to_string_t("publicip_ids")] = ModelBase::toJson(publicipIds_);
    }

    return val;
}

bool BatchDeletePublicIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipIds(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& BatchDeletePublicIpRequestBody::getPublicipIds()
{
    return publicipIds_;
}

void BatchDeletePublicIpRequestBody::setPublicipIds(const std::vector<std::string>& value)
{
    publicipIds_ = value;
    publicipIdsIsSet_ = true;
}

bool BatchDeletePublicIpRequestBody::publicipIdsIsSet() const
{
    return publicipIdsIsSet_;
}

void BatchDeletePublicIpRequestBody::unsetpublicipIds()
{
    publicipIdsIsSet_ = false;
}

}
}
}
}
}


