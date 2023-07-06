

#include "huaweicloud/cbr/v1/model/ShowDomainRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowDomainRequest::ShowDomainRequest()
{
    sourceProjectId_ = "";
    sourceProjectIdIsSet_ = false;
}

ShowDomainRequest::~ShowDomainRequest() = default;

void ShowDomainRequest::validate()
{
}

web::json::value ShowDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceProjectIdIsSet_) {
        val[utility::conversions::to_string_t("source_project_id")] = ModelBase::toJson(sourceProjectId_);
    }

    return val;
}

bool ShowDomainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceProjectId(refVal);
        }
    }
    return ok;
}

std::string ShowDomainRequest::getSourceProjectId() const
{
    return sourceProjectId_;
}

void ShowDomainRequest::setSourceProjectId(const std::string& value)
{
    sourceProjectId_ = value;
    sourceProjectIdIsSet_ = true;
}

bool ShowDomainRequest::sourceProjectIdIsSet() const
{
    return sourceProjectIdIsSet_;
}

void ShowDomainRequest::unsetsourceProjectId()
{
    sourceProjectIdIsSet_ = false;
}

}
}
}
}
}


