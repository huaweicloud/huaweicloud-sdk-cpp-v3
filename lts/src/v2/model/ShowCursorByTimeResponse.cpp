

#include "huaweicloud/lts/v2/model/ShowCursorByTimeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowCursorByTimeResponse::ShowCursorByTimeResponse()
{
    cursor_ = 0L;
    cursorIsSet_ = false;
}

ShowCursorByTimeResponse::~ShowCursorByTimeResponse() = default;

void ShowCursorByTimeResponse::validate()
{
}

web::json::value ShowCursorByTimeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cursorIsSet_) {
        val[utility::conversions::to_string_t("cursor")] = ModelBase::toJson(cursor_);
    }

    return val;
}
bool ShowCursorByTimeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cursor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cursor"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCursor(refVal);
        }
    }
    return ok;
}


int64_t ShowCursorByTimeResponse::getCursor() const
{
    return cursor_;
}

void ShowCursorByTimeResponse::setCursor(int64_t value)
{
    cursor_ = value;
    cursorIsSet_ = true;
}

bool ShowCursorByTimeResponse::cursorIsSet() const
{
    return cursorIsSet_;
}

void ShowCursorByTimeResponse::unsetcursor()
{
    cursorIsSet_ = false;
}

}
}
}
}
}


