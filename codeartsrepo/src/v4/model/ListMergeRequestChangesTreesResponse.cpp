

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestChangesTreesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestChangesTreesResponse::ListMergeRequestChangesTreesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListMergeRequestChangesTreesResponse::~ListMergeRequestChangesTreesResponse() = default;

void ListMergeRequestChangesTreesResponse::validate()
{
}

web::json::value ListMergeRequestChangesTreesResponse::toJson() const
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
bool ListMergeRequestChangesTreesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ChangesTreeDto> refVal;
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


std::vector<ChangesTreeDto>& ListMergeRequestChangesTreesResponse::getBody()
{
    return body_;
}

void ListMergeRequestChangesTreesResponse::setBody(const std::vector<ChangesTreeDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMergeRequestChangesTreesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMergeRequestChangesTreesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListMergeRequestChangesTreesResponse::getXTotal() const
{
    return xTotal_;
}

void ListMergeRequestChangesTreesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListMergeRequestChangesTreesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListMergeRequestChangesTreesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


