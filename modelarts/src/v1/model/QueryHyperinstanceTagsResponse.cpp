

#include "huaweicloud/modelarts/v1/model/QueryHyperinstanceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




QueryHyperinstanceTagsResponse::QueryHyperinstanceTagsResponse()
{
    tagsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

QueryHyperinstanceTagsResponse::~QueryHyperinstanceTagsResponse() = default;

void QueryHyperinstanceTagsResponse::validate()
{
}

web::json::value QueryHyperinstanceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool QueryHyperinstanceTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TmsTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<TmsTag>& QueryHyperinstanceTagsResponse::getTags()
{
    return tags_;
}

void QueryHyperinstanceTagsResponse::setTags(const std::vector<TmsTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QueryHyperinstanceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void QueryHyperinstanceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string QueryHyperinstanceTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void QueryHyperinstanceTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool QueryHyperinstanceTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void QueryHyperinstanceTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


