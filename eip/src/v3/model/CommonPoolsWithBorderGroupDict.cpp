

#include "huaweicloud/eip/v3/model/CommonPoolsWithBorderGroupDict.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




CommonPoolsWithBorderGroupDict::CommonPoolsWithBorderGroupDict()
{
    publicipPoolsIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
}

CommonPoolsWithBorderGroupDict::~CommonPoolsWithBorderGroupDict() = default;

void CommonPoolsWithBorderGroupDict::validate()
{
}

web::json::value CommonPoolsWithBorderGroupDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipPoolsIsSet_) {
        val[utility::conversions::to_string_t("publicip_pools")] = ModelBase::toJson(publicipPools_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }

    return val;
}

bool CommonPoolsWithBorderGroupDict::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_pools"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_pools"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipPools(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CommonPoolsWithBorderGroupDict::getPublicipPools()
{
    return publicipPools_;
}

void CommonPoolsWithBorderGroupDict::setPublicipPools(const std::vector<std::string>& value)
{
    publicipPools_ = value;
    publicipPoolsIsSet_ = true;
}

bool CommonPoolsWithBorderGroupDict::publicipPoolsIsSet() const
{
    return publicipPoolsIsSet_;
}

void CommonPoolsWithBorderGroupDict::unsetpublicipPools()
{
    publicipPoolsIsSet_ = false;
}

std::string CommonPoolsWithBorderGroupDict::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void CommonPoolsWithBorderGroupDict::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool CommonPoolsWithBorderGroupDict::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void CommonPoolsWithBorderGroupDict::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

}
}
}
}
}


