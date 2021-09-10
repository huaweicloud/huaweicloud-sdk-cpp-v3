

#include "huaweicloud/frs/v2/model/WarningList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




WarningList::WarningList()
{
    warningCode_ = 0;
    warningCodeIsSet_ = false;
    warningMsg_ = "";
    warningMsgIsSet_ = false;
}

WarningList::~WarningList() = default;

void WarningList::validate()
{
}

web::json::value WarningList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(warningCodeIsSet_) {
        val[utility::conversions::to_string_t("warningCode")] = ModelBase::toJson(warningCode_);
    }
    if(warningMsgIsSet_) {
        val[utility::conversions::to_string_t("warningMsg")] = ModelBase::toJson(warningMsg_);
    }

    return val;
}

bool WarningList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("warningCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warningCode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarningCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warningMsg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warningMsg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarningMsg(refVal);
        }
    }
    return ok;
}


int32_t WarningList::getWarningCode() const
{
    return warningCode_;
}

void WarningList::setWarningCode(int32_t value)
{
    warningCode_ = value;
    warningCodeIsSet_ = true;
}

bool WarningList::warningCodeIsSet() const
{
    return warningCodeIsSet_;
}

void WarningList::unsetwarningCode()
{
    warningCodeIsSet_ = false;
}

std::string WarningList::getWarningMsg() const
{
    return warningMsg_;
}

void WarningList::setWarningMsg(const std::string& value)
{
    warningMsg_ = value;
    warningMsgIsSet_ = true;
}

bool WarningList::warningMsgIsSet() const
{
    return warningMsgIsSet_;
}

void WarningList::unsetwarningMsg()
{
    warningMsgIsSet_ = false;
}

}
}
}
}
}


