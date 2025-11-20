

#include "huaweicloud/metastudio/v1/model/TransferTypeEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



TransferTypeEnum::TransferTypeEnum()
{
}

TransferTypeEnum::~TransferTypeEnum()
{
}

void TransferTypeEnum::validate()
{
}

web::json::value TransferTypeEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eTransferTypeEnum::TransferTypeEnum_TRANSFER_OUT) val = web::json::value::string(U("TRANSFER_OUT"));
    if (value_ == eTransferTypeEnum::TransferTypeEnum_TRANSFER_BACK) val = web::json::value::string(U("TRANSFER_BACK"));

    return val;
}

bool TransferTypeEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("TRANSFER_OUT")) value_ = eTransferTypeEnum::TransferTypeEnum_TRANSFER_OUT;
    if (s == utility::conversions::to_string_t("TRANSFER_BACK")) value_ = eTransferTypeEnum::TransferTypeEnum_TRANSFER_BACK;
    return true;
}

TransferTypeEnum::eTransferTypeEnum TransferTypeEnum::getValue() const
{
   return value_;
}

void TransferTypeEnum::setValue(TransferTypeEnum::eTransferTypeEnum const value)
{
   value_ = value;
}


}
}
}
}
}


