

#include "huaweicloud/cloudtest/v1/model/ListTestCaseScriptDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCaseScriptDetailResponse::ListTestCaseScriptDetailResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ListTestCaseScriptDetailResponse::~ListTestCaseScriptDetailResponse() = default;

void ListTestCaseScriptDetailResponse::validate()
{
}

web::json::value ListTestCaseScriptDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTestCaseScriptDetailResponse::fromJson(const web::json::value& val)
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


std::string ListTestCaseScriptDetailResponse::getBody() const
{
    return body_;
}

void ListTestCaseScriptDetailResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTestCaseScriptDetailResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTestCaseScriptDetailResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


