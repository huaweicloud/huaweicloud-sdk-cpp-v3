

#include "huaweicloud/drs/v3/model/BatchValidateConnectionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchValidateConnectionsRequest::BatchValidateConnectionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchValidateConnectionsRequest::~BatchValidateConnectionsRequest() = default;

void BatchValidateConnectionsRequest::validate()
{
}

web::json::value BatchValidateConnectionsRequest::toJson() const
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
bool BatchValidateConnectionsRequest::fromJson(const web::json::value& val)
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
            BatchTestConnectionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchValidateConnectionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchValidateConnectionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchValidateConnectionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchValidateConnectionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchTestConnectionReq BatchValidateConnectionsRequest::getBody() const
{
    return body_;
}

void BatchValidateConnectionsRequest::setBody(const BatchTestConnectionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchValidateConnectionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchValidateConnectionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


