

#include "huaweicloud/ivs/v2/model/IvsStandardByVideoAndIdCardImageRequestBody_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsStandardByVideoAndIdCardImageRequestBody_data::IvsStandardByVideoAndIdCardImageRequestBody_data()
{
    reqDataIsSet_ = false;
}

IvsStandardByVideoAndIdCardImageRequestBody_data::~IvsStandardByVideoAndIdCardImageRequestBody_data() = default;

void IvsStandardByVideoAndIdCardImageRequestBody_data::validate()
{
}

web::json::value IvsStandardByVideoAndIdCardImageRequestBody_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reqDataIsSet_) {
        val[utility::conversions::to_string_t("req_data")] = ModelBase::toJson(reqData_);
    }

    return val;
}
bool IvsStandardByVideoAndIdCardImageRequestBody_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("req_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req_data"));
        if(!fieldValue.is_null())
        {
            std::vector<ReqDataByVideoAndIdCardImage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReqData(refVal);
        }
    }
    return ok;
}


std::vector<ReqDataByVideoAndIdCardImage>& IvsStandardByVideoAndIdCardImageRequestBody_data::getReqData()
{
    return reqData_;
}

void IvsStandardByVideoAndIdCardImageRequestBody_data::setReqData(const std::vector<ReqDataByVideoAndIdCardImage>& value)
{
    reqData_ = value;
    reqDataIsSet_ = true;
}

bool IvsStandardByVideoAndIdCardImageRequestBody_data::reqDataIsSet() const
{
    return reqDataIsSet_;
}

void IvsStandardByVideoAndIdCardImageRequestBody_data::unsetreqData()
{
    reqDataIsSet_ = false;
}

}
}
}
}
}


