

#include "huaweicloud/metastudio/v1/model/ResourceAvailableNums.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ResourceAvailableNums::ResourceAvailableNums()
{
    flexus_ = 0;
    flexusIsSet_ = false;
    basic_ = 0;
    basicIsSet_ = false;
    middle_ = 0;
    middleIsSet_ = false;
    middleOnDemand_ = 0;
    middleOnDemandIsSet_ = false;
    advance_ = 0;
    advanceIsSet_ = false;
    thirdPartyCmww_ = 0;
    thirdPartyCmwwIsSet_ = false;
}

ResourceAvailableNums::~ResourceAvailableNums() = default;

void ResourceAvailableNums::validate()
{
}

web::json::value ResourceAvailableNums::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flexusIsSet_) {
        val[utility::conversions::to_string_t("flexus")] = ModelBase::toJson(flexus_);
    }
    if(basicIsSet_) {
        val[utility::conversions::to_string_t("basic")] = ModelBase::toJson(basic_);
    }
    if(middleIsSet_) {
        val[utility::conversions::to_string_t("middle")] = ModelBase::toJson(middle_);
    }
    if(middleOnDemandIsSet_) {
        val[utility::conversions::to_string_t("middle_on_demand")] = ModelBase::toJson(middleOnDemand_);
    }
    if(advanceIsSet_) {
        val[utility::conversions::to_string_t("advance")] = ModelBase::toJson(advance_);
    }
    if(thirdPartyCmwwIsSet_) {
        val[utility::conversions::to_string_t("third_party_cmww")] = ModelBase::toJson(thirdPartyCmww_);
    }

    return val;
}
bool ResourceAvailableNums::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flexus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flexus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlexus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("middle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("middle"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMiddle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("middle_on_demand"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("middle_on_demand"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMiddleOnDemand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("advance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advance"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("third_party_cmww"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("third_party_cmww"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdPartyCmww(refVal);
        }
    }
    return ok;
}


int32_t ResourceAvailableNums::getFlexus() const
{
    return flexus_;
}

void ResourceAvailableNums::setFlexus(int32_t value)
{
    flexus_ = value;
    flexusIsSet_ = true;
}

bool ResourceAvailableNums::flexusIsSet() const
{
    return flexusIsSet_;
}

void ResourceAvailableNums::unsetflexus()
{
    flexusIsSet_ = false;
}

int32_t ResourceAvailableNums::getBasic() const
{
    return basic_;
}

void ResourceAvailableNums::setBasic(int32_t value)
{
    basic_ = value;
    basicIsSet_ = true;
}

bool ResourceAvailableNums::basicIsSet() const
{
    return basicIsSet_;
}

void ResourceAvailableNums::unsetbasic()
{
    basicIsSet_ = false;
}

int32_t ResourceAvailableNums::getMiddle() const
{
    return middle_;
}

void ResourceAvailableNums::setMiddle(int32_t value)
{
    middle_ = value;
    middleIsSet_ = true;
}

bool ResourceAvailableNums::middleIsSet() const
{
    return middleIsSet_;
}

void ResourceAvailableNums::unsetmiddle()
{
    middleIsSet_ = false;
}

int32_t ResourceAvailableNums::getMiddleOnDemand() const
{
    return middleOnDemand_;
}

void ResourceAvailableNums::setMiddleOnDemand(int32_t value)
{
    middleOnDemand_ = value;
    middleOnDemandIsSet_ = true;
}

bool ResourceAvailableNums::middleOnDemandIsSet() const
{
    return middleOnDemandIsSet_;
}

void ResourceAvailableNums::unsetmiddleOnDemand()
{
    middleOnDemandIsSet_ = false;
}

int32_t ResourceAvailableNums::getAdvance() const
{
    return advance_;
}

void ResourceAvailableNums::setAdvance(int32_t value)
{
    advance_ = value;
    advanceIsSet_ = true;
}

bool ResourceAvailableNums::advanceIsSet() const
{
    return advanceIsSet_;
}

void ResourceAvailableNums::unsetadvance()
{
    advanceIsSet_ = false;
}

int32_t ResourceAvailableNums::getThirdPartyCmww() const
{
    return thirdPartyCmww_;
}

void ResourceAvailableNums::setThirdPartyCmww(int32_t value)
{
    thirdPartyCmww_ = value;
    thirdPartyCmwwIsSet_ = true;
}

bool ResourceAvailableNums::thirdPartyCmwwIsSet() const
{
    return thirdPartyCmwwIsSet_;
}

void ResourceAvailableNums::unsetthirdPartyCmww()
{
    thirdPartyCmwwIsSet_ = false;
}

}
}
}
}
}


