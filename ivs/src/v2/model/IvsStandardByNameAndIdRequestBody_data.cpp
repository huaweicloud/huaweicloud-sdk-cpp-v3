

#include "huaweicloud/ivs/v2/model/IvsStandardByNameAndIdRequestBody_data.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsStandardByNameAndIdRequestBody_data::IvsStandardByNameAndIdRequestBody_data()
{
    reqDataIsSet_ = false;
}

IvsStandardByNameAndIdRequestBody_data::~IvsStandardByNameAndIdRequestBody_data() = default;

void IvsStandardByNameAndIdRequestBody_data::validate()
{
}

web::json::value IvsStandardByNameAndIdRequestBody_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reqDataIsSet_) {
        val[utility::conversions::to_string_t("req_data")] = ModelBase::toJson(reqData_);
    }

    return val;
}

bool IvsStandardByNameAndIdRequestBody_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("req_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req_data"));
        if(!fieldValue.is_null())
        {
            std::vector<StandardReqDataByNameAndId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReqData(refVal);
        }
    }
    return ok;
}


std::vector<StandardReqDataByNameAndId>& IvsStandardByNameAndIdRequestBody_data::getReqData()
{
    return reqData_;
}

void IvsStandardByNameAndIdRequestBody_data::setReqData(const std::vector<StandardReqDataByNameAndId>& value)
{
    reqData_ = value;
    reqDataIsSet_ = true;
}

bool IvsStandardByNameAndIdRequestBody_data::reqDataIsSet() const
{
    return reqDataIsSet_;
}

void IvsStandardByNameAndIdRequestBody_data::unsetreqData()
{
    reqDataIsSet_ = false;
}

}
}
}
}
}


