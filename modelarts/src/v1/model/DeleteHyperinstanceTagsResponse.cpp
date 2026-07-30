

#include "huaweicloud/modelarts/v1/model/DeleteHyperinstanceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteHyperinstanceTagsResponse::DeleteHyperinstanceTagsResponse()
{
    tagsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteHyperinstanceTagsResponse::~DeleteHyperinstanceTagsResponse() = default;

void DeleteHyperinstanceTagsResponse::validate()
{
}

web::json::value DeleteHyperinstanceTagsResponse::toJson() const
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
bool DeleteHyperinstanceTagsResponse::fromJson(const web::json::value& val)
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


std::vector<TmsTag>& DeleteHyperinstanceTagsResponse::getTags()
{
    return tags_;
}

void DeleteHyperinstanceTagsResponse::setTags(const std::vector<TmsTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DeleteHyperinstanceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void DeleteHyperinstanceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string DeleteHyperinstanceTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteHyperinstanceTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteHyperinstanceTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteHyperinstanceTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


