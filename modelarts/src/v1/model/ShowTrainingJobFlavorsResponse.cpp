

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobFlavorsResponse::ShowTrainingJobFlavorsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    flavorsIsSet_ = false;
}

ShowTrainingJobFlavorsResponse::~ShowTrainingJobFlavorsResponse() = default;

void ShowTrainingJobFlavorsResponse::validate()
{
}

web::json::value ShowTrainingJobFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}
bool ShowTrainingJobFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<FlavorResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}


int32_t ShowTrainingJobFlavorsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowTrainingJobFlavorsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowTrainingJobFlavorsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowTrainingJobFlavorsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<FlavorResponse>& ShowTrainingJobFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ShowTrainingJobFlavorsResponse::setFlavors(const std::vector<FlavorResponse>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ShowTrainingJobFlavorsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ShowTrainingJobFlavorsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


