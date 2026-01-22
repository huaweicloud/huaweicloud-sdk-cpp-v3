

#include "huaweicloud/cfw/v1/model/EwPrivateNetworkSegmentsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EwPrivateNetworkSegmentsDto::EwPrivateNetworkSegmentsDto()
{
    privateNetworkSegmentsIsSet_ = false;
}

EwPrivateNetworkSegmentsDto::~EwPrivateNetworkSegmentsDto() = default;

void EwPrivateNetworkSegmentsDto::validate()
{
}

web::json::value EwPrivateNetworkSegmentsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privateNetworkSegmentsIsSet_) {
        val[utility::conversions::to_string_t("private_network_segments")] = ModelBase::toJson(privateNetworkSegments_);
    }

    return val;
}
bool EwPrivateNetworkSegmentsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("private_network_segments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_network_segments"));
        if(!fieldValue.is_null())
        {
            std::vector<PrivateNetworkSegmentVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateNetworkSegments(refVal);
        }
    }
    return ok;
}


std::vector<PrivateNetworkSegmentVO>& EwPrivateNetworkSegmentsDto::getPrivateNetworkSegments()
{
    return privateNetworkSegments_;
}

void EwPrivateNetworkSegmentsDto::setPrivateNetworkSegments(const std::vector<PrivateNetworkSegmentVO>& value)
{
    privateNetworkSegments_ = value;
    privateNetworkSegmentsIsSet_ = true;
}

bool EwPrivateNetworkSegmentsDto::privateNetworkSegmentsIsSet() const
{
    return privateNetworkSegmentsIsSet_;
}

void EwPrivateNetworkSegmentsDto::unsetprivateNetworkSegments()
{
    privateNetworkSegmentsIsSet_ = false;
}

}
}
}
}
}


