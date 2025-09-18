

#include "huaweicloud/codeartscheck/v2/model/CheckRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CheckRecordResponse::CheckRecordResponse()
{
    dataIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

CheckRecordResponse::~CheckRecordResponse() = default;

void CheckRecordResponse::validate()
{
}

web::json::value CheckRecordResponse::toJson() const
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
bool CheckRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckRecordDataInfo> refVal;
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


std::vector<CheckRecordDataInfo>& CheckRecordResponse::getData()
{
    return data_;
}

void CheckRecordResponse::setData(const std::vector<CheckRecordDataInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CheckRecordResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CheckRecordResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t CheckRecordResponse::getTotal() const
{
    return total_;
}

void CheckRecordResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool CheckRecordResponse::totalIsSet() const
{
    return totalIsSet_;
}

void CheckRecordResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


