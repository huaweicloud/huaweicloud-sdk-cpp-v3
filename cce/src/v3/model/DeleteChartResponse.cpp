

#include "huaweicloud/cce/v3/model/DeleteChartResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteChartResponse::DeleteChartResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteChartResponse::~DeleteChartResponse() = default;

void DeleteChartResponse::validate()
{
}

web::json::value DeleteChartResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteChartResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteChartResponse::getBody() const
{
    return body_;
}

void DeleteChartResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteChartResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteChartResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


