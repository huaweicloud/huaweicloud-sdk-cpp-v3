

#include "huaweicloud/cdn/v2/model/DeleteDomainTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DeleteDomainTemplateRequest::DeleteDomainTemplateRequest()
{
    tmlId_ = "";
    tmlIdIsSet_ = false;
}

DeleteDomainTemplateRequest::~DeleteDomainTemplateRequest() = default;

void DeleteDomainTemplateRequest::validate()
{
}

web::json::value DeleteDomainTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tmlIdIsSet_) {
        val[utility::conversions::to_string_t("tml_id")] = ModelBase::toJson(tmlId_);
    }

    return val;
}
bool DeleteDomainTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tml_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tml_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmlId(refVal);
        }
    }
    return ok;
}


std::string DeleteDomainTemplateRequest::getTmlId() const
{
    return tmlId_;
}

void DeleteDomainTemplateRequest::setTmlId(const std::string& value)
{
    tmlId_ = value;
    tmlIdIsSet_ = true;
}

bool DeleteDomainTemplateRequest::tmlIdIsSet() const
{
    return tmlIdIsSet_;
}

void DeleteDomainTemplateRequest::unsettmlId()
{
    tmlIdIsSet_ = false;
}

}
}
}
}
}


