

#include "huaweicloud/modelarts/v1/model/NodeListMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeListMetadata::NodeListMetadata()
{
    continue_ = "";
    continueIsSet_ = false;
    remainingItemCount_ = 0L;
    remainingItemCountIsSet_ = false;
}

NodeListMetadata::~NodeListMetadata() = default;

void NodeListMetadata::validate()
{
}

web::json::value NodeListMetadata::toJson() const
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
bool NodeListMetadata::fromJson(const web::json::value& val)
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainingItemCount(refVal);
        }
    }
    return ok;
}


std::string NodeListMetadata::getContinue() const
{
    return continue_;
}

void NodeListMetadata::setContinue(const std::string& value)
{
    continue_ = value;
    continueIsSet_ = true;
}

bool NodeListMetadata::continueIsSet() const
{
    return continueIsSet_;
}

void NodeListMetadata::unsetcontinue()
{
    continueIsSet_ = false;
}

int64_t NodeListMetadata::getRemainingItemCount() const
{
    return remainingItemCount_;
}

void NodeListMetadata::setRemainingItemCount(int64_t value)
{
    remainingItemCount_ = value;
    remainingItemCountIsSet_ = true;
}

bool NodeListMetadata::remainingItemCountIsSet() const
{
    return remainingItemCountIsSet_;
}

void NodeListMetadata::unsetremainingItemCount()
{
    remainingItemCountIsSet_ = false;
}

}
}
}
}
}


