

#include "huaweicloud/modelarts/v1/model/NetworkListMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkListMetadata::NetworkListMetadata()
{
    continue_ = "";
    continueIsSet_ = false;
    remainingItemCount_ = 0;
    remainingItemCountIsSet_ = false;
}

NetworkListMetadata::~NetworkListMetadata() = default;

void NetworkListMetadata::validate()
{
}

web::json::value NetworkListMetadata::toJson() const
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
bool NetworkListMetadata::fromJson(const web::json::value& val)
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


std::string NetworkListMetadata::getContinue() const
{
    return continue_;
}

void NetworkListMetadata::setContinue(const std::string& value)
{
    continue_ = value;
    continueIsSet_ = true;
}

bool NetworkListMetadata::continueIsSet() const
{
    return continueIsSet_;
}

void NetworkListMetadata::unsetcontinue()
{
    continueIsSet_ = false;
}

int32_t NetworkListMetadata::getRemainingItemCount() const
{
    return remainingItemCount_;
}

void NetworkListMetadata::setRemainingItemCount(int32_t value)
{
    remainingItemCount_ = value;
    remainingItemCountIsSet_ = true;
}

bool NetworkListMetadata::remainingItemCountIsSet() const
{
    return remainingItemCountIsSet_;
}

void NetworkListMetadata::unsetremainingItemCount()
{
    remainingItemCountIsSet_ = false;
}

}
}
}
}
}


