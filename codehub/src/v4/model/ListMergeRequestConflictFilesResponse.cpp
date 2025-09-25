

#include "huaweicloud/codehub/v4/model/ListMergeRequestConflictFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestConflictFilesResponse::ListMergeRequestConflictFilesResponse()
{
    bodyIsSet_ = false;
}

ListMergeRequestConflictFilesResponse::~ListMergeRequestConflictFilesResponse() = default;

void ListMergeRequestConflictFilesResponse::validate()
{
}

web::json::value ListMergeRequestConflictFilesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListMergeRequestConflictFilesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<MRConflictFileDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<MRConflictFileDto>& ListMergeRequestConflictFilesResponse::getBody()
{
    return body_;
}

void ListMergeRequestConflictFilesResponse::setBody(const std::vector<MRConflictFileDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMergeRequestConflictFilesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMergeRequestConflictFilesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


