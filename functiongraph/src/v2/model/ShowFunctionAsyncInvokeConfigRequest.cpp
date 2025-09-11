

#include "huaweicloud/functiongraph/v2/model/ShowFunctionAsyncInvokeConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionAsyncInvokeConfigRequest::ShowFunctionAsyncInvokeConfigRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowFunctionAsyncInvokeConfigRequest::~ShowFunctionAsyncInvokeConfigRequest() = default;

void ShowFunctionAsyncInvokeConfigRequest::validate()
{
}

web::json::value ShowFunctionAsyncInvokeConfigRequest::toJson() const
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
bool ShowFunctionAsyncInvokeConfigRequest::fromJson(const web::json::value& val)
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


std::string ShowFunctionAsyncInvokeConfigRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ShowFunctionAsyncInvokeConfigRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ShowFunctionAsyncInvokeConfigRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ShowFunctionAsyncInvokeConfigRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ShowFunctionAsyncInvokeConfigRequest::getContentType() const
{
    return contentType_;
}

void ShowFunctionAsyncInvokeConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowFunctionAsyncInvokeConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowFunctionAsyncInvokeConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


