

#include "huaweicloud/codeartsrepo/v4/model/ListFileBlameLinesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListFileBlameLinesResponse::ListFileBlameLinesResponse()
{
    bodyIsSet_ = false;
}

ListFileBlameLinesResponse::~ListFileBlameLinesResponse() = default;

void ListFileBlameLinesResponse::validate()
{
}

web::json::value ListFileBlameLinesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListFileBlameLinesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<BlameDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<BlameDto>& ListFileBlameLinesResponse::getBody()
{
    return body_;
}

void ListFileBlameLinesResponse::setBody(const std::vector<BlameDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListFileBlameLinesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListFileBlameLinesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


