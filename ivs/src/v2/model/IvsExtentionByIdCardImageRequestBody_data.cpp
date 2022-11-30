

#include "huaweicloud/ivs/v2/model/IvsExtentionByIdCardImageRequestBody_data.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsExtentionByIdCardImageRequestBody_data::IvsExtentionByIdCardImageRequestBody_data()
{
    reqDataIsSet_ = false;
}

IvsExtentionByIdCardImageRequestBody_data::~IvsExtentionByIdCardImageRequestBody_data() = default;

void IvsExtentionByIdCardImageRequestBody_data::validate()
{
}

web::json::value IvsExtentionByIdCardImageRequestBody_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reqDataIsSet_) {
        val[utility::conversions::to_string_t("req_data")] = ModelBase::toJson(reqData_);
    }

    return val;
}

bool IvsExtentionByIdCardImageRequestBody_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("req_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req_data"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtentionReqDataByIdCardImage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReqData(refVal);
        }
    }
    return ok;
}


std::vector<ExtentionReqDataByIdCardImage>& IvsExtentionByIdCardImageRequestBody_data::getReqData()
{
    return reqData_;
}

void IvsExtentionByIdCardImageRequestBody_data::setReqData(const std::vector<ExtentionReqDataByIdCardImage>& value)
{
    reqData_ = value;
    reqDataIsSet_ = true;
}

bool IvsExtentionByIdCardImageRequestBody_data::reqDataIsSet() const
{
    return reqDataIsSet_;
}

void IvsExtentionByIdCardImageRequestBody_data::unsetreqData()
{
    reqDataIsSet_ = false;
}

}
}
}
}
}


