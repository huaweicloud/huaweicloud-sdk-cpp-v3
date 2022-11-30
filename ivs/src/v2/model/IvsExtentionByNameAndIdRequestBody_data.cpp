

#include "huaweicloud/ivs/v2/model/IvsExtentionByNameAndIdRequestBody_data.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IvsExtentionByNameAndIdRequestBody_data::IvsExtentionByNameAndIdRequestBody_data()
{
    reqDataIsSet_ = false;
}

IvsExtentionByNameAndIdRequestBody_data::~IvsExtentionByNameAndIdRequestBody_data() = default;

void IvsExtentionByNameAndIdRequestBody_data::validate()
{
}

web::json::value IvsExtentionByNameAndIdRequestBody_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reqDataIsSet_) {
        val[utility::conversions::to_string_t("req_data")] = ModelBase::toJson(reqData_);
    }

    return val;
}

bool IvsExtentionByNameAndIdRequestBody_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("req_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req_data"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtentionReqDataByNameAndId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReqData(refVal);
        }
    }
    return ok;
}


std::vector<ExtentionReqDataByNameAndId>& IvsExtentionByNameAndIdRequestBody_data::getReqData()
{
    return reqData_;
}

void IvsExtentionByNameAndIdRequestBody_data::setReqData(const std::vector<ExtentionReqDataByNameAndId>& value)
{
    reqData_ = value;
    reqDataIsSet_ = true;
}

bool IvsExtentionByNameAndIdRequestBody_data::reqDataIsSet() const
{
    return reqDataIsSet_;
}

void IvsExtentionByNameAndIdRequestBody_data::unsetreqData()
{
    reqDataIsSet_ = false;
}

}
}
}
}
}


