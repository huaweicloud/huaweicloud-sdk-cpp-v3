

#include "huaweicloud/tms/v1/model/ListResourceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListResourceResponse::ListResourceResponse()
{
    resourcesIsSet_ = false;
    errorsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListResourceResponse::~ListResourceResponse() = default;

void ListResourceResponse::validate()
{
}

web::json::value ListResourceResponse::toJson() const
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

bool ListResourceResponse::fromJson(const web::json::value& val)
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


std::vector<Resources>& ListResourceResponse::getResources()
{
    return resources_;
}

void ListResourceResponse::setResources(const std::vector<Resources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListResourceResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListResourceResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<Errors>& ListResourceResponse::getErrors()
{
    return errors_;
}

void ListResourceResponse::setErrors(const std::vector<Errors>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool ListResourceResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void ListResourceResponse::unseterrors()
{
    errorsIsSet_ = false;
}

int32_t ListResourceResponse::getTotalCount() const
{
    return totalCount_;
}

void ListResourceResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListResourceResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListResourceResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


