

#include "huaweicloud/functiongraph/v2/model/ShowFunctionCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionCodeRequest::ShowFunctionCodeRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowFunctionCodeRequest::~ShowFunctionCodeRequest() = default;

void ShowFunctionCodeRequest::validate()
{
}

web::json::value ShowFunctionCodeRequest::toJson() const
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
bool ShowFunctionCodeRequest::fromJson(const web::json::value& val)
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


std::string ShowFunctionCodeRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ShowFunctionCodeRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ShowFunctionCodeRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ShowFunctionCodeRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ShowFunctionCodeRequest::getContentType() const
{
    return contentType_;
}

void ShowFunctionCodeRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowFunctionCodeRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowFunctionCodeRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


