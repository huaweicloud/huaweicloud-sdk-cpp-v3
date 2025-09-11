

#include "huaweicloud/functiongraph/v2/model/ShowTracingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowTracingRequest::ShowTracingRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowTracingRequest::~ShowTracingRequest() = default;

void ShowTracingRequest::validate()
{
}

web::json::value ShowTracingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowTracingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ShowTracingRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ShowTracingRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ShowTracingRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ShowTracingRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ShowTracingRequest::getContentType() const
{
    return contentType_;
}

void ShowTracingRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowTracingRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowTracingRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


