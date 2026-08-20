

#include "huaweicloud/projectman/v4/model/LabelListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




LabelListResponse::LabelListResponse()
{
    dataIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

LabelListResponse::~LabelListResponse() = default;

void LabelListResponse::validate()
{
}

web::json::value LabelListResponse::toJson() const
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
bool LabelListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<LabelEntity> refVal;
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


std::vector<LabelEntity>& LabelListResponse::getData()
{
    return data_;
}

void LabelListResponse::setData(const std::vector<LabelEntity>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool LabelListResponse::dataIsSet() const
{
    return dataIsSet_;
}

void LabelListResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t LabelListResponse::getTotal() const
{
    return total_;
}

void LabelListResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool LabelListResponse::totalIsSet() const
{
    return totalIsSet_;
}

void LabelListResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


