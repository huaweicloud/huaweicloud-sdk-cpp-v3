

#include "huaweicloud/functiongraph/v2/model/ShowLtsLogDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowLtsLogDetailsRequest::ShowLtsLogDetailsRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowLtsLogDetailsRequest::~ShowLtsLogDetailsRequest() = default;

void ShowLtsLogDetailsRequest::validate()
{
}

web::json::value ShowLtsLogDetailsRequest::toJson() const
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
bool ShowLtsLogDetailsRequest::fromJson(const web::json::value& val)
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


std::string ShowLtsLogDetailsRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ShowLtsLogDetailsRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ShowLtsLogDetailsRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ShowLtsLogDetailsRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ShowLtsLogDetailsRequest::getContentType() const
{
    return contentType_;
}

void ShowLtsLogDetailsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowLtsLogDetailsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowLtsLogDetailsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


