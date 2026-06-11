

#include "huaweicloud/rds/v3/model/ShowHotClodSeparationStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowHotClodSeparationStatusResponse::ShowHotClodSeparationStatusResponse()
{
    opened_ = false;
    openedIsSet_ = false;
}

ShowHotClodSeparationStatusResponse::~ShowHotClodSeparationStatusResponse() = default;

void ShowHotClodSeparationStatusResponse::validate()
{
}

web::json::value ShowHotClodSeparationStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openedIsSet_) {
        val[utility::conversions::to_string_t("opened")] = ModelBase::toJson(opened_);
    }

    return val;
}
bool ShowHotClodSeparationStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("opened"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opened"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpened(refVal);
        }
    }
    return ok;
}


bool ShowHotClodSeparationStatusResponse::isOpened() const
{
    return opened_;
}

void ShowHotClodSeparationStatusResponse::setOpened(bool value)
{
    opened_ = value;
    openedIsSet_ = true;
}

bool ShowHotClodSeparationStatusResponse::openedIsSet() const
{
    return openedIsSet_;
}

void ShowHotClodSeparationStatusResponse::unsetopened()
{
    openedIsSet_ = false;
}

}
}
}
}
}


