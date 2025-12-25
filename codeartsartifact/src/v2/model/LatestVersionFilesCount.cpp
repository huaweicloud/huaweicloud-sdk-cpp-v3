

#include "huaweicloud/codeartsartifact/v2/model/LatestVersionFilesCount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




LatestVersionFilesCount::LatestVersionFilesCount()
{
    count_ = 0L;
    countIsSet_ = false;
}

LatestVersionFilesCount::~LatestVersionFilesCount() = default;

void LatestVersionFilesCount::validate()
{
}

web::json::value LatestVersionFilesCount::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool LatestVersionFilesCount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


int64_t LatestVersionFilesCount::getCount() const
{
    return count_;
}

void LatestVersionFilesCount::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool LatestVersionFilesCount::countIsSet() const
{
    return countIsSet_;
}

void LatestVersionFilesCount::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


