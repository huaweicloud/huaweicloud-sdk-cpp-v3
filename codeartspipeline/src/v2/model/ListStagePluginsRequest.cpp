

#include "huaweicloud/codeartspipeline/v2/model/ListStagePluginsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListStagePluginsRequest::ListStagePluginsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListStagePluginsRequest::~ListStagePluginsRequest() = default;

void ListStagePluginsRequest::validate()
{
}

web::json::value ListStagePluginsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListStagePluginsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            StagePluginsQueryDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListStagePluginsRequest::getDomainId() const
{
    return domainId_;
}

void ListStagePluginsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListStagePluginsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListStagePluginsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

StagePluginsQueryDTO ListStagePluginsRequest::getBody() const
{
    return body_;
}

void ListStagePluginsRequest::setBody(const StagePluginsQueryDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListStagePluginsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListStagePluginsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


