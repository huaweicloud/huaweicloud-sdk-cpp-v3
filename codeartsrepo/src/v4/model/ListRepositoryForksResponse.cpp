

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryForksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryForksResponse::ListRepositoryForksResponse()
{
    bodyIsSet_ = false;
}

ListRepositoryForksResponse::~ListRepositoryForksResponse() = default;

void ListRepositoryForksResponse::validate()
{
}

web::json::value ListRepositoryForksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRepositoryForksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ForkRepositoryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ForkRepositoryDto>& ListRepositoryForksResponse::getBody()
{
    return body_;
}

void ListRepositoryForksResponse::setBody(const std::vector<ForkRepositoryDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryForksResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryForksResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


