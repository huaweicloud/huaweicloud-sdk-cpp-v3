

#include "huaweicloud/drs/v5/model/ExportOperationInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportOperationInfoResponse::ExportOperationInfoResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ExportOperationInfoResponse::~ExportOperationInfoResponse() = default;

void ExportOperationInfoResponse::validate()
{
}

web::json::value ExportOperationInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExportOperationInfoResponse::fromJson(const web::json::value& val)
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


std::string ExportOperationInfoResponse::getBody() const
{
    return body_;
}

void ExportOperationInfoResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportOperationInfoResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportOperationInfoResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


