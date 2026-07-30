

#include "huaweicloud/modelarts/v1/model/Shards.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Shards::Shards()
{
    objectUrlsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

Shards::~Shards() = default;

void Shards::validate()
{
}

web::json::value Shards::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectUrlsIsSet_) {
        val[utility::conversions::to_string_t("object_urls")] = ModelBase::toJson(objectUrls_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool Shards::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectUrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& Shards::getObjectUrls()
{
    return objectUrls_;
}

void Shards::setObjectUrls(const std::vector<std::string>& value)
{
    objectUrls_ = value;
    objectUrlsIsSet_ = true;
}

bool Shards::objectUrlsIsSet() const
{
    return objectUrlsIsSet_;
}

void Shards::unsetobjectUrls()
{
    objectUrlsIsSet_ = false;
}

int32_t Shards::getCount() const
{
    return count_;
}

void Shards::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool Shards::countIsSet() const
{
    return countIsSet_;
}

void Shards::unsetcount()
{
    countIsSet_ = false;
}

int32_t Shards::getTotal() const
{
    return total_;
}

void Shards::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool Shards::totalIsSet() const
{
    return totalIsSet_;
}

void Shards::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


