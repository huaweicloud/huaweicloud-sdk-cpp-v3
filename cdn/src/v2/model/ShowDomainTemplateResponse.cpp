

#include "huaweicloud/cdn/v2/model/ShowDomainTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainTemplateResponse::ShowDomainTemplateResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    temlatesIsSet_ = false;
}

ShowDomainTemplateResponse::~ShowDomainTemplateResponse() = default;

void ShowDomainTemplateResponse::validate()
{
}

web::json::value ShowDomainTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(temlatesIsSet_) {
        val[utility::conversions::to_string_t("temlates")] = ModelBase::toJson(temlates_);
    }

    return val;
}
bool ShowDomainTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("temlates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("temlates"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemlates(refVal);
        }
    }
    return ok;
}


int32_t ShowDomainTemplateResponse::getTotal() const
{
    return total_;
}

void ShowDomainTemplateResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowDomainTemplateResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowDomainTemplateResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<TemplateItem>& ShowDomainTemplateResponse::getTemlates()
{
    return temlates_;
}

void ShowDomainTemplateResponse::setTemlates(const std::vector<TemplateItem>& value)
{
    temlates_ = value;
    temlatesIsSet_ = true;
}

bool ShowDomainTemplateResponse::temlatesIsSet() const
{
    return temlatesIsSet_;
}

void ShowDomainTemplateResponse::unsettemlates()
{
    temlatesIsSet_ = false;
}

}
}
}
}
}


