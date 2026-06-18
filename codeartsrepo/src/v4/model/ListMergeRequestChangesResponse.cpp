

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestChangesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestChangesResponse::ListMergeRequestChangesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListMergeRequestChangesResponse::~ListMergeRequestChangesResponse() = default;

void ListMergeRequestChangesResponse::validate()
{
}

web::json::value ListMergeRequestChangesResponse::toJson() const
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
bool ListMergeRequestChangesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<SimpleMergeRequestChangesDto> refVal;
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


std::vector<SimpleMergeRequestChangesDto>& ListMergeRequestChangesResponse::getBody()
{
    return body_;
}

void ListMergeRequestChangesResponse::setBody(const std::vector<SimpleMergeRequestChangesDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMergeRequestChangesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMergeRequestChangesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListMergeRequestChangesResponse::getXTotal() const
{
    return xTotal_;
}

void ListMergeRequestChangesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListMergeRequestChangesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListMergeRequestChangesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


