

#include "huaweicloud/projectman/v4/model/ThirdPartyAssociatedResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ThirdPartyAssociatedResult::ThirdPartyAssociatedResult()
{
    dataIsSet_ = false;
    count_ = "";
    countIsSet_ = false;
}

ThirdPartyAssociatedResult::~ThirdPartyAssociatedResult() = default;

void ThirdPartyAssociatedResult::validate()
{
}

web::json::value ThirdPartyAssociatedResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ThirdPartyAssociatedResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ThirdPartyAssociatedResult_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


ThirdPartyAssociatedResult_data ThirdPartyAssociatedResult::getData() const
{
    return data_;
}

void ThirdPartyAssociatedResult::setData(const ThirdPartyAssociatedResult_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ThirdPartyAssociatedResult::dataIsSet() const
{
    return dataIsSet_;
}

void ThirdPartyAssociatedResult::unsetdata()
{
    dataIsSet_ = false;
}

std::string ThirdPartyAssociatedResult::getCount() const
{
    return count_;
}

void ThirdPartyAssociatedResult::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ThirdPartyAssociatedResult::countIsSet() const
{
    return countIsSet_;
}

void ThirdPartyAssociatedResult::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


