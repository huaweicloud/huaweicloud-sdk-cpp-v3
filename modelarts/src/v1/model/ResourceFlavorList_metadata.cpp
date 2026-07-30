

#include "huaweicloud/modelarts/v1/model/ResourceFlavorList_metadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceFlavorList_metadata::ResourceFlavorList_metadata()
{
    continue_ = "";
    continueIsSet_ = false;
    remainingItemCount_ = 0;
    remainingItemCountIsSet_ = false;
}

ResourceFlavorList_metadata::~ResourceFlavorList_metadata() = default;

void ResourceFlavorList_metadata::validate()
{
}

web::json::value ResourceFlavorList_metadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(continueIsSet_) {
        val[utility::conversions::to_string_t("continue")] = ModelBase::toJson(continue_);
    }
    if(remainingItemCountIsSet_) {
        val[utility::conversions::to_string_t("remainingItemCount")] = ModelBase::toJson(remainingItemCount_);
    }

    return val;
}
bool ResourceFlavorList_metadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("continue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remainingItemCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remainingItemCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainingItemCount(refVal);
        }
    }
    return ok;
}


std::string ResourceFlavorList_metadata::getContinue() const
{
    return continue_;
}

void ResourceFlavorList_metadata::setContinue(const std::string& value)
{
    continue_ = value;
    continueIsSet_ = true;
}

bool ResourceFlavorList_metadata::continueIsSet() const
{
    return continueIsSet_;
}

void ResourceFlavorList_metadata::unsetcontinue()
{
    continueIsSet_ = false;
}

int32_t ResourceFlavorList_metadata::getRemainingItemCount() const
{
    return remainingItemCount_;
}

void ResourceFlavorList_metadata::setRemainingItemCount(int32_t value)
{
    remainingItemCount_ = value;
    remainingItemCountIsSet_ = true;
}

bool ResourceFlavorList_metadata::remainingItemCountIsSet() const
{
    return remainingItemCountIsSet_;
}

void ResourceFlavorList_metadata::unsetremainingItemCount()
{
    remainingItemCountIsSet_ = false;
}

}
}
}
}
}


