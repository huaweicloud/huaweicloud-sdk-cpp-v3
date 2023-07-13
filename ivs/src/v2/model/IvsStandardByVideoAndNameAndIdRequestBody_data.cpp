

#include "huaweicloud/ivs/v2/model/IvsStandardByVideoAndNameAndIdRequestBody_data.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsStandardByVideoAndNameAndIdRequestBody_data::IvsStandardByVideoAndNameAndIdRequestBody_data()
{
    reqDataIsSet_ = false;
}

IvsStandardByVideoAndNameAndIdRequestBody_data::~IvsStandardByVideoAndNameAndIdRequestBody_data() = default;

void IvsStandardByVideoAndNameAndIdRequestBody_data::validate()
{
}

web::json::value IvsStandardByVideoAndNameAndIdRequestBody_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reqDataIsSet_) {
        val[utility::conversions::to_string_t("req_data")] = ModelBase::toJson(reqData_);
    }

    return val;
}

bool IvsStandardByVideoAndNameAndIdRequestBody_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("req_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req_data"));
        if(!fieldValue.is_null())
        {
            std::vector<StandardReqDataByVideoAndNameAndId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReqData(refVal);
        }
    }
    return ok;
}

std::vector<StandardReqDataByVideoAndNameAndId>& IvsStandardByVideoAndNameAndIdRequestBody_data::getReqData()
{
    return reqData_;
}

void IvsStandardByVideoAndNameAndIdRequestBody_data::setReqData(const std::vector<StandardReqDataByVideoAndNameAndId>& value)
{
    reqData_ = value;
    reqDataIsSet_ = true;
}

bool IvsStandardByVideoAndNameAndIdRequestBody_data::reqDataIsSet() const
{
    return reqDataIsSet_;
}

void IvsStandardByVideoAndNameAndIdRequestBody_data::unsetreqData()
{
    reqDataIsSet_ = false;
}

}
}
}
}
}


