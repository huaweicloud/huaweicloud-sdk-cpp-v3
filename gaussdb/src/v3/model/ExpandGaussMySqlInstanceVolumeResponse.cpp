

#include "huaweicloud/gaussdb/v3/model/ExpandGaussMySqlInstanceVolumeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ExpandGaussMySqlInstanceVolumeResponse::ExpandGaussMySqlInstanceVolumeResponse()
{
    size_ = 0;
    sizeIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ExpandGaussMySqlInstanceVolumeResponse::~ExpandGaussMySqlInstanceVolumeResponse() = default;

void ExpandGaussMySqlInstanceVolumeResponse::validate()
{
}

web::json::value ExpandGaussMySqlInstanceVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool ExpandGaussMySqlInstanceVolumeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    return ok;
}


int32_t ExpandGaussMySqlInstanceVolumeResponse::getSize() const
{
    return size_;
}

void ExpandGaussMySqlInstanceVolumeResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ExpandGaussMySqlInstanceVolumeResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ExpandGaussMySqlInstanceVolumeResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ExpandGaussMySqlInstanceVolumeResponse::getOrderId() const
{
    return orderId_;
}

void ExpandGaussMySqlInstanceVolumeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ExpandGaussMySqlInstanceVolumeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ExpandGaussMySqlInstanceVolumeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


