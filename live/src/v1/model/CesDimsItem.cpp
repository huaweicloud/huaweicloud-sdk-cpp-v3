

#include "huaweicloud/live/v1/model/CesDimsItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CesDimsItem::CesDimsItem()
{
    paramsIsSet_ = false;
    displayIsSet_ = false;
}

CesDimsItem::~CesDimsItem() = default;

void CesDimsItem::validate()
{
}

web::json::value CesDimsItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }
    if(displayIsSet_) {
        val[utility::conversions::to_string_t("display")] = ModelBase::toJson(display_);
    }

    return val;
}
bool CesDimsItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display"));
        if(!fieldValue.is_null())
        {
            CesDimsItem_display refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplay(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CesDimsItem::getParams()
{
    return params_;
}

void CesDimsItem::setParams(const std::vector<std::string>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CesDimsItem::paramsIsSet() const
{
    return paramsIsSet_;
}

void CesDimsItem::unsetparams()
{
    paramsIsSet_ = false;
}

CesDimsItem_display CesDimsItem::getDisplay() const
{
    return display_;
}

void CesDimsItem::setDisplay(const CesDimsItem_display& value)
{
    display_ = value;
    displayIsSet_ = true;
}

bool CesDimsItem::displayIsSet() const
{
    return displayIsSet_;
}

void CesDimsItem::unsetdisplay()
{
    displayIsSet_ = false;
}

}
}
}
}
}


