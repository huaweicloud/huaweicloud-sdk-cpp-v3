

#include "huaweicloud/metastudio/v1/model/LiveWarningItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveWarningItem::LiveWarningItem()
{
    warningType_ = "";
    warningTypeIsSet_ = false;
}

LiveWarningItem::~LiveWarningItem() = default;

void LiveWarningItem::validate()
{
}

web::json::value LiveWarningItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(warningTypeIsSet_) {
        val[utility::conversions::to_string_t("warning_type")] = ModelBase::toJson(warningType_);
    }

    return val;
}
bool LiveWarningItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("warning_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warning_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarningType(refVal);
        }
    }
    return ok;
}


std::string LiveWarningItem::getWarningType() const
{
    return warningType_;
}

void LiveWarningItem::setWarningType(const std::string& value)
{
    warningType_ = value;
    warningTypeIsSet_ = true;
}

bool LiveWarningItem::warningTypeIsSet() const
{
    return warningTypeIsSet_;
}

void LiveWarningItem::unsetwarningType()
{
    warningTypeIsSet_ = false;
}

}
}
}
}
}


