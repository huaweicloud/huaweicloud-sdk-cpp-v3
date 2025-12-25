

#include "huaweicloud/codeartsartifact/v2/model/ListFilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListFilesRequest::ListFilesRequest()
{
    bodyIsSet_ = false;
}

ListFilesRequest::~ListFilesRequest() = default;

void ListFilesRequest::validate()
{
}

web::json::value ListFilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListFilesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RepoFileQueryDTOV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


RepoFileQueryDTOV5 ListFilesRequest::getBody() const
{
    return body_;
}

void ListFilesRequest::setBody(const RepoFileQueryDTOV5& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListFilesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListFilesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


