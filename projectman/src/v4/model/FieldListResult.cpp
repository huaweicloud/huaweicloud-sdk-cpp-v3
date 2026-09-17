

#include "huaweicloud/projectman/v4/model/FieldListResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




FieldListResult::FieldListResult()
{
    dataIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

FieldListResult::~FieldListResult() = default;

void FieldListResult::validate()
{
}

web::json::value FieldListResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool FieldListResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<FieldEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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


std::vector<FieldEntity>& FieldListResult::getData()
{
    return data_;
}

void FieldListResult::setData(const std::vector<FieldEntity>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool FieldListResult::dataIsSet() const
{
    return dataIsSet_;
}

void FieldListResult::unsetdata()
{
    dataIsSet_ = false;
}

int32_t FieldListResult::getTotal() const
{
    return total_;
}

void FieldListResult::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool FieldListResult::totalIsSet() const
{
    return totalIsSet_;
}

void FieldListResult::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


