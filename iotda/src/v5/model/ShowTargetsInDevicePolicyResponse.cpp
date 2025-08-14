

#include "huaweicloud/iotda/v5/model/ShowTargetsInDevicePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowTargetsInDevicePolicyResponse::ShowTargetsInDevicePolicyResponse()
{
    targetsIsSet_ = false;
    pageIsSet_ = false;
}

ShowTargetsInDevicePolicyResponse::~ShowTargetsInDevicePolicyResponse() = default;

void ShowTargetsInDevicePolicyResponse::validate()
{
}

web::json::value ShowTargetsInDevicePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetsIsSet_) {
        val[utility::conversions::to_string_t("targets")] = ModelBase::toJson(targets_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ShowTargetsInDevicePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("targets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targets"));
        if(!fieldValue.is_null())
        {
            std::vector<PolicyTargetBase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<PolicyTargetBase>& ShowTargetsInDevicePolicyResponse::getTargets()
{
    return targets_;
}

void ShowTargetsInDevicePolicyResponse::setTargets(const std::vector<PolicyTargetBase>& value)
{
    targets_ = value;
    targetsIsSet_ = true;
}

bool ShowTargetsInDevicePolicyResponse::targetsIsSet() const
{
    return targetsIsSet_;
}

void ShowTargetsInDevicePolicyResponse::unsettargets()
{
    targetsIsSet_ = false;
}

Page ShowTargetsInDevicePolicyResponse::getPage() const
{
    return page_;
}

void ShowTargetsInDevicePolicyResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ShowTargetsInDevicePolicyResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ShowTargetsInDevicePolicyResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


