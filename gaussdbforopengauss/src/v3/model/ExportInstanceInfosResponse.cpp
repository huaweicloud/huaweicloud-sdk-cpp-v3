

#include "huaweicloud/gaussdbforopengauss/v3/model/ExportInstanceInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExportInstanceInfosResponse::ExportInstanceInfosResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ExportInstanceInfosResponse::~ExportInstanceInfosResponse() = default;

void ExportInstanceInfosResponse::validate()
{
}

web::json::value ExportInstanceInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExportInstanceInfosResponse::fromJson(const web::json::value& val)
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


std::string ExportInstanceInfosResponse::getBody() const
{
    return body_;
}

void ExportInstanceInfosResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportInstanceInfosResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportInstanceInfosResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


