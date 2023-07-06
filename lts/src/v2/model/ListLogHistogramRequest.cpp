

#include "huaweicloud/lts/v2/model/ListLogHistogramRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogHistogramRequest::ListLogHistogramRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListLogHistogramRequest::~ListLogHistogramRequest() = default;

void ListLogHistogramRequest::validate()
{
}

web::json::value ListLogHistogramRequest::toJson() const
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

bool ListLogHistogramRequest::fromJson(const web::json::value& val)
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
            QueryLogKeyWordCountRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListLogHistogramRequest::getContentType() const
{
    return contentType_;
}

void ListLogHistogramRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListLogHistogramRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListLogHistogramRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

QueryLogKeyWordCountRequestBody ListLogHistogramRequest::getBody() const
{
    return body_;
}

void ListLogHistogramRequest::setBody(const QueryLogKeyWordCountRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListLogHistogramRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListLogHistogramRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


