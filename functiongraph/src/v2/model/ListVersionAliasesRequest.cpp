

#include "huaweicloud/functiongraph/v2/model/ListVersionAliasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListVersionAliasesRequest::ListVersionAliasesRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListVersionAliasesRequest::~ListVersionAliasesRequest() = default;

void ListVersionAliasesRequest::validate()
{
}

web::json::value ListVersionAliasesRequest::toJson() const
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
bool ListVersionAliasesRequest::fromJson(const web::json::value& val)
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


std::string ListVersionAliasesRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ListVersionAliasesRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ListVersionAliasesRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ListVersionAliasesRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ListVersionAliasesRequest::getContentType() const
{
    return contentType_;
}

void ListVersionAliasesRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListVersionAliasesRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListVersionAliasesRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


