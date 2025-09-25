

#include "huaweicloud/codeartspipeline/v2/model/ListAvailablePublisherResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListAvailablePublisherResponse::ListAvailablePublisherResponse()
{
    bodyIsSet_ = false;
}

ListAvailablePublisherResponse::~ListAvailablePublisherResponse() = default;

void ListAvailablePublisherResponse::validate()
{
}

web::json::value ListAvailablePublisherResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAvailablePublisherResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PublisherVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PublisherVO>& ListAvailablePublisherResponse::getBody()
{
    return body_;
}

void ListAvailablePublisherResponse::setBody(const std::vector<PublisherVO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAvailablePublisherResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAvailablePublisherResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


