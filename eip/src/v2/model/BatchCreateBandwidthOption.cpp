

#include "huaweicloud/eip/v2/model/BatchCreateBandwidthOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchCreateBandwidthOption::BatchCreateBandwidthOption()
{
    count_ = 0;
    countIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
}

BatchCreateBandwidthOption::~BatchCreateBandwidthOption() = default;

void BatchCreateBandwidthOption::validate()
{
}

web::json::value BatchCreateBandwidthOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }

    return val;
}
bool BatchCreateBandwidthOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    return ok;
}


int32_t BatchCreateBandwidthOption::getCount() const
{
    return count_;
}

void BatchCreateBandwidthOption::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchCreateBandwidthOption::countIsSet() const
{
    return countIsSet_;
}

void BatchCreateBandwidthOption::unsetcount()
{
    countIsSet_ = false;
}

std::string BatchCreateBandwidthOption::getName() const
{
    return name_;
}

void BatchCreateBandwidthOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchCreateBandwidthOption::nameIsSet() const
{
    return nameIsSet_;
}

void BatchCreateBandwidthOption::unsetname()
{
    nameIsSet_ = false;
}

int32_t BatchCreateBandwidthOption::getSize() const
{
    return size_;
}

void BatchCreateBandwidthOption::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BatchCreateBandwidthOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void BatchCreateBandwidthOption::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BatchCreateBandwidthOption::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void BatchCreateBandwidthOption::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool BatchCreateBandwidthOption::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void BatchCreateBandwidthOption::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

}
}
}
}
}


