

#include "huaweicloud/drs/v3/model/BatchValidateClustersConnectionsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchValidateClustersConnectionsRequest::BatchValidateClustersConnectionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchValidateClustersConnectionsRequest::~BatchValidateClustersConnectionsRequest() = default;

void BatchValidateClustersConnectionsRequest::validate()
{
}

web::json::value BatchValidateClustersConnectionsRequest::toJson() const
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

bool BatchValidateClustersConnectionsRequest::fromJson(const web::json::value& val)
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
            BatchSpecialTestConnectionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchValidateClustersConnectionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchValidateClustersConnectionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchValidateClustersConnectionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchValidateClustersConnectionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchSpecialTestConnectionReq BatchValidateClustersConnectionsRequest::getBody() const
{
    return body_;
}

void BatchValidateClustersConnectionsRequest::setBody(const BatchSpecialTestConnectionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchValidateClustersConnectionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchValidateClustersConnectionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


