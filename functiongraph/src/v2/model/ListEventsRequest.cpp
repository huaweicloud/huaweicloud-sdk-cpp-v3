

#include "huaweicloud/functiongraph/v2/model/ListEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListEventsRequest::ListEventsRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListEventsRequest::~ListEventsRequest() = default;

void ListEventsRequest::validate()
{
}

web::json::value ListEventsRequest::toJson() const
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
bool ListEventsRequest::fromJson(const web::json::value& val)
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


std::string ListEventsRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ListEventsRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ListEventsRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ListEventsRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ListEventsRequest::getContentType() const
{
    return contentType_;
}

void ListEventsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListEventsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListEventsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


