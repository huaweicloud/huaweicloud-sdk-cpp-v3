

#include "huaweicloud/aad/v2/model/ListWafQpsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafQpsResponse::ListWafQpsResponse()
{
    curveIsSet_ = false;
}

ListWafQpsResponse::~ListWafQpsResponse() = default;

void ListWafQpsResponse::validate()
{
}

web::json::value ListWafQpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(curveIsSet_) {
        val[utility::conversions::to_string_t("curve")] = ModelBase::toJson(curve_);
    }

    return val;
}
bool ListWafQpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("curve"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("curve"));
        if(!fieldValue.is_null())
        {
            std::vector<Point> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurve(refVal);
        }
    }
    return ok;
}


std::vector<Point>& ListWafQpsResponse::getCurve()
{
    return curve_;
}

void ListWafQpsResponse::setCurve(const std::vector<Point>& value)
{
    curve_ = value;
    curveIsSet_ = true;
}

bool ListWafQpsResponse::curveIsSet() const
{
    return curveIsSet_;
}

void ListWafQpsResponse::unsetcurve()
{
    curveIsSet_ = false;
}

}
}
}
}
}


