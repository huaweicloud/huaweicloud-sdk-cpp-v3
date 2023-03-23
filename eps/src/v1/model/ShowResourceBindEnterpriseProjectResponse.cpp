

#include "huaweicloud/eps/v1/model/ShowResourceBindEnterpriseProjectResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ShowResourceBindEnterpriseProjectResponse::ShowResourceBindEnterpriseProjectResponse()
{
    resourcesIsSet_ = false;
    errorsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowResourceBindEnterpriseProjectResponse::~ShowResourceBindEnterpriseProjectResponse() = default;

void ShowResourceBindEnterpriseProjectResponse::validate()
{
}

web::json::value ShowResourceBindEnterpriseProjectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(errorsIsSet_) {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(errors_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ShowResourceBindEnterpriseProjectResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<Resources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errors"));
        if(!fieldValue.is_null())
        {
            std::vector<Errors> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<Resources>& ShowResourceBindEnterpriseProjectResponse::getResources()
{
    return resources_;
}

void ShowResourceBindEnterpriseProjectResponse::setResources(const std::vector<Resources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ShowResourceBindEnterpriseProjectResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ShowResourceBindEnterpriseProjectResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<Errors>& ShowResourceBindEnterpriseProjectResponse::getErrors()
{
    return errors_;
}

void ShowResourceBindEnterpriseProjectResponse::setErrors(const std::vector<Errors>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool ShowResourceBindEnterpriseProjectResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void ShowResourceBindEnterpriseProjectResponse::unseterrors()
{
    errorsIsSet_ = false;
}

int32_t ShowResourceBindEnterpriseProjectResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowResourceBindEnterpriseProjectResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowResourceBindEnterpriseProjectResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowResourceBindEnterpriseProjectResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


