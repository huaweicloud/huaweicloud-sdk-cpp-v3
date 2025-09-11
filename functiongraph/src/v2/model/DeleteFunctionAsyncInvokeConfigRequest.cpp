

#include "huaweicloud/functiongraph/v2/model/DeleteFunctionAsyncInvokeConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




DeleteFunctionAsyncInvokeConfigRequest::DeleteFunctionAsyncInvokeConfigRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeleteFunctionAsyncInvokeConfigRequest::~DeleteFunctionAsyncInvokeConfigRequest() = default;

void DeleteFunctionAsyncInvokeConfigRequest::validate()
{
}

web::json::value DeleteFunctionAsyncInvokeConfigRequest::toJson() const
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
bool DeleteFunctionAsyncInvokeConfigRequest::fromJson(const web::json::value& val)
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


std::string DeleteFunctionAsyncInvokeConfigRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void DeleteFunctionAsyncInvokeConfigRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool DeleteFunctionAsyncInvokeConfigRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void DeleteFunctionAsyncInvokeConfigRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string DeleteFunctionAsyncInvokeConfigRequest::getContentType() const
{
    return contentType_;
}

void DeleteFunctionAsyncInvokeConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteFunctionAsyncInvokeConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteFunctionAsyncInvokeConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


