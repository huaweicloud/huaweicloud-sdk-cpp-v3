

#include "huaweicloud/codeartsrepo/v4/model/ListProjectRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectRepositoriesResponse::ListProjectRepositoriesResponse()
{
    bodyIsSet_ = false;
}

ListProjectRepositoriesResponse::~ListProjectRepositoriesResponse() = default;

void ListProjectRepositoriesResponse::validate()
{
}

web::json::value ListProjectRepositoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProjectRepositoriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<BasicRepositoryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<BasicRepositoryDto>& ListProjectRepositoriesResponse::getBody()
{
    return body_;
}

void ListProjectRepositoriesResponse::setBody(const std::vector<BasicRepositoryDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectRepositoriesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectRepositoriesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


