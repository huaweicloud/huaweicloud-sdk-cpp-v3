

#include "huaweicloud/drs/v5/model/BatchExecuteJobActionsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchExecuteJobActionsRequest::BatchExecuteJobActionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchExecuteJobActionsRequest::~BatchExecuteJobActionsRequest() = default;

void BatchExecuteJobActionsRequest::validate()
{
}

web::json::value BatchExecuteJobActionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchExecuteJobActionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchJobActionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchExecuteJobActionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchExecuteJobActionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchExecuteJobActionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchExecuteJobActionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchJobActionReq BatchExecuteJobActionsRequest::getBody() const
{
    return body_;
}

void BatchExecuteJobActionsRequest::setBody(const BatchJobActionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchExecuteJobActionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchExecuteJobActionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


