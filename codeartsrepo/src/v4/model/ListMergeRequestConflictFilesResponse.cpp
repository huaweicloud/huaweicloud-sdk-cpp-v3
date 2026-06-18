

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestConflictFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestConflictFilesResponse::ListMergeRequestConflictFilesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
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
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
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
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
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

std::string ListMergeRequestConflictFilesResponse::getXTotal() const
{
    return xTotal_;
}

void ListMergeRequestConflictFilesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListMergeRequestConflictFilesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListMergeRequestConflictFilesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


