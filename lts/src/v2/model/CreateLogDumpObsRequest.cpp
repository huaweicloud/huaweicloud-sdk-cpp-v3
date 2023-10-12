

#include "huaweicloud/lts/v2/model/CreateLogDumpObsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogDumpObsRequest::CreateLogDumpObsRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateLogDumpObsRequest::~CreateLogDumpObsRequest() = default;

void CreateLogDumpObsRequest::validate()
{
}

web::json::value CreateLogDumpObsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateLogDumpObsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateLogDumpObsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateLogDumpObsRequest::getContentType() const
{
    return contentType_;
}

void CreateLogDumpObsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateLogDumpObsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateLogDumpObsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateLogDumpObsRequestBody CreateLogDumpObsRequest::getBody() const
{
    return body_;
}

void CreateLogDumpObsRequest::setBody(const CreateLogDumpObsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLogDumpObsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLogDumpObsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


