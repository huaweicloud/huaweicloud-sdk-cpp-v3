

#include "huaweicloud/gaussdb/v3/model/SrFlavorResizeReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SrFlavorResizeReq::SrFlavorResizeReq()
{
    feFlavorId_ = "";
    feFlavorIdIsSet_ = false;
    beFlavorId_ = "";
    beFlavorIdIsSet_ = false;
}

SrFlavorResizeReq::~SrFlavorResizeReq() = default;

void SrFlavorResizeReq::validate()
{
}

web::json::value SrFlavorResizeReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(feFlavorIdIsSet_) {
        val[utility::conversions::to_string_t("fe_flavor_id")] = ModelBase::toJson(feFlavorId_);
    }
    if(beFlavorIdIsSet_) {
        val[utility::conversions::to_string_t("be_flavor_id")] = ModelBase::toJson(beFlavorId_);
    }

    return val;
}
bool SrFlavorResizeReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fe_flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fe_flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("be_flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("be_flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeFlavorId(refVal);
        }
    }
    return ok;
}


std::string SrFlavorResizeReq::getFeFlavorId() const
{
    return feFlavorId_;
}

void SrFlavorResizeReq::setFeFlavorId(const std::string& value)
{
    feFlavorId_ = value;
    feFlavorIdIsSet_ = true;
}

bool SrFlavorResizeReq::feFlavorIdIsSet() const
{
    return feFlavorIdIsSet_;
}

void SrFlavorResizeReq::unsetfeFlavorId()
{
    feFlavorIdIsSet_ = false;
}

std::string SrFlavorResizeReq::getBeFlavorId() const
{
    return beFlavorId_;
}

void SrFlavorResizeReq::setBeFlavorId(const std::string& value)
{
    beFlavorId_ = value;
    beFlavorIdIsSet_ = true;
}

bool SrFlavorResizeReq::beFlavorIdIsSet() const
{
    return beFlavorIdIsSet_;
}

void SrFlavorResizeReq::unsetbeFlavorId()
{
    beFlavorIdIsSet_ = false;
}

}
}
}
}
}


