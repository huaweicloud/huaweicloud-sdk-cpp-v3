

#include "huaweicloud/functiongraph/v2/model/ListFunctionTriggersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionTriggersRequest::ListFunctionTriggersRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListFunctionTriggersRequest::~ListFunctionTriggersRequest() = default;

void ListFunctionTriggersRequest::validate()
{
}

web::json::value ListFunctionTriggersRequest::toJson() const
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
bool ListFunctionTriggersRequest::fromJson(const web::json::value& val)
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


std::string ListFunctionTriggersRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ListFunctionTriggersRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ListFunctionTriggersRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ListFunctionTriggersRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ListFunctionTriggersRequest::getContentType() const
{
    return contentType_;
}

void ListFunctionTriggersRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListFunctionTriggersRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListFunctionTriggersRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


