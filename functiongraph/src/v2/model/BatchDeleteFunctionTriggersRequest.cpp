

#include "huaweicloud/functiongraph/v2/model/BatchDeleteFunctionTriggersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




BatchDeleteFunctionTriggersRequest::BatchDeleteFunctionTriggersRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

BatchDeleteFunctionTriggersRequest::~BatchDeleteFunctionTriggersRequest() = default;

void BatchDeleteFunctionTriggersRequest::validate()
{
}

web::json::value BatchDeleteFunctionTriggersRequest::toJson() const
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
bool BatchDeleteFunctionTriggersRequest::fromJson(const web::json::value& val)
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


std::string BatchDeleteFunctionTriggersRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void BatchDeleteFunctionTriggersRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool BatchDeleteFunctionTriggersRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void BatchDeleteFunctionTriggersRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string BatchDeleteFunctionTriggersRequest::getContentType() const
{
    return contentType_;
}

void BatchDeleteFunctionTriggersRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool BatchDeleteFunctionTriggersRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void BatchDeleteFunctionTriggersRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


