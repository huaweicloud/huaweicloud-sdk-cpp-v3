

#include "huaweicloud/lts/v2/model/ShowCursorTimeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowCursorTimeResponse::ShowCursorTimeResponse()
{
    cursorTime_ = 0L;
    cursorTimeIsSet_ = false;
}

ShowCursorTimeResponse::~ShowCursorTimeResponse() = default;

void ShowCursorTimeResponse::validate()
{
}

web::json::value ShowCursorTimeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cursorTimeIsSet_) {
        val[utility::conversions::to_string_t("cursor_time")] = ModelBase::toJson(cursorTime_);
    }

    return val;
}
bool ShowCursorTimeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cursor_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cursor_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCursorTime(refVal);
        }
    }
    return ok;
}


int64_t ShowCursorTimeResponse::getCursorTime() const
{
    return cursorTime_;
}

void ShowCursorTimeResponse::setCursorTime(int64_t value)
{
    cursorTime_ = value;
    cursorTimeIsSet_ = true;
}

bool ShowCursorTimeResponse::cursorTimeIsSet() const
{
    return cursorTimeIsSet_;
}

void ShowCursorTimeResponse::unsetcursorTime()
{
    cursorTimeIsSet_ = false;
}

}
}
}
}
}


