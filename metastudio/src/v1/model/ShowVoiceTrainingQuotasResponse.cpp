

#include "huaweicloud/metastudio/v1/model/ShowVoiceTrainingQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowVoiceTrainingQuotasResponse::ShowVoiceTrainingQuotasResponse()
{
    count_ = 0;
    countIsSet_ = false;
    resourceAvailableNumsIsSet_ = false;
    resourcesIsSet_ = false;
}

ShowVoiceTrainingQuotasResponse::~ShowVoiceTrainingQuotasResponse() = default;

void ShowVoiceTrainingQuotasResponse::validate()
{
}

web::json::value ShowVoiceTrainingQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(resourceAvailableNumsIsSet_) {
        val[utility::conversions::to_string_t("resource_available_nums")] = ModelBase::toJson(resourceAvailableNums_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ShowVoiceTrainingQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_available_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_available_nums"));
        if(!fieldValue.is_null())
        {
            ResourceAvailableNums refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceAvailableNums(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<VoiceTrainingResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


int32_t ShowVoiceTrainingQuotasResponse::getCount() const
{
    return count_;
}

void ShowVoiceTrainingQuotasResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowVoiceTrainingQuotasResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowVoiceTrainingQuotasResponse::unsetcount()
{
    countIsSet_ = false;
}

ResourceAvailableNums ShowVoiceTrainingQuotasResponse::getResourceAvailableNums() const
{
    return resourceAvailableNums_;
}

void ShowVoiceTrainingQuotasResponse::setResourceAvailableNums(const ResourceAvailableNums& value)
{
    resourceAvailableNums_ = value;
    resourceAvailableNumsIsSet_ = true;
}

bool ShowVoiceTrainingQuotasResponse::resourceAvailableNumsIsSet() const
{
    return resourceAvailableNumsIsSet_;
}

void ShowVoiceTrainingQuotasResponse::unsetresourceAvailableNums()
{
    resourceAvailableNumsIsSet_ = false;
}

std::vector<VoiceTrainingResource>& ShowVoiceTrainingQuotasResponse::getResources()
{
    return resources_;
}

void ShowVoiceTrainingQuotasResponse::setResources(const std::vector<VoiceTrainingResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ShowVoiceTrainingQuotasResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ShowVoiceTrainingQuotasResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


