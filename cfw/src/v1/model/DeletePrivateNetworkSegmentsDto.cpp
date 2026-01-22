

#include "huaweicloud/cfw/v1/model/DeletePrivateNetworkSegmentsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeletePrivateNetworkSegmentsDto::DeletePrivateNetworkSegmentsDto()
{
    confIdsIsSet_ = false;
}

DeletePrivateNetworkSegmentsDto::~DeletePrivateNetworkSegmentsDto() = default;

void DeletePrivateNetworkSegmentsDto::validate()
{
}

web::json::value DeletePrivateNetworkSegmentsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confIdsIsSet_) {
        val[utility::conversions::to_string_t("conf_ids")] = ModelBase::toJson(confIds_);
    }

    return val;
}
bool DeletePrivateNetworkSegmentsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conf_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conf_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeletePrivateNetworkSegmentsDto::getConfIds()
{
    return confIds_;
}

void DeletePrivateNetworkSegmentsDto::setConfIds(const std::vector<std::string>& value)
{
    confIds_ = value;
    confIdsIsSet_ = true;
}

bool DeletePrivateNetworkSegmentsDto::confIdsIsSet() const
{
    return confIdsIsSet_;
}

void DeletePrivateNetworkSegmentsDto::unsetconfIds()
{
    confIdsIsSet_ = false;
}

}
}
}
}
}


