

#include "huaweicloud/ivs/v2/model/IvsStandardByIdCardImageRequestBody_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsStandardByIdCardImageRequestBody_data::IvsStandardByIdCardImageRequestBody_data()
{
    reqDataIsSet_ = false;
}

IvsStandardByIdCardImageRequestBody_data::~IvsStandardByIdCardImageRequestBody_data() = default;

void IvsStandardByIdCardImageRequestBody_data::validate()
{
}

web::json::value IvsStandardByIdCardImageRequestBody_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reqDataIsSet_) {
        val[utility::conversions::to_string_t("req_data")] = ModelBase::toJson(reqData_);
    }

    return val;
}
bool IvsStandardByIdCardImageRequestBody_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("req_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req_data"));
        if(!fieldValue.is_null())
        {
            std::vector<ReqDataByIdCardImage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReqData(refVal);
        }
    }
    return ok;
}


std::vector<ReqDataByIdCardImage>& IvsStandardByIdCardImageRequestBody_data::getReqData()
{
    return reqData_;
}

void IvsStandardByIdCardImageRequestBody_data::setReqData(const std::vector<ReqDataByIdCardImage>& value)
{
    reqData_ = value;
    reqDataIsSet_ = true;
}

bool IvsStandardByIdCardImageRequestBody_data::reqDataIsSet() const
{
    return reqDataIsSet_;
}

void IvsStandardByIdCardImageRequestBody_data::unsetreqData()
{
    reqDataIsSet_ = false;
}

}
}
}
}
}


