

#include "huaweicloud/drs/v5/model/DataProcessReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DataProcessReq::DataProcessReq()
{
    dataProcessInfoIsSet_ = false;
}

DataProcessReq::~DataProcessReq() = default;

void DataProcessReq::validate()
{
}

web::json::value DataProcessReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataProcessInfoIsSet_) {
        val[utility::conversions::to_string_t("data_process_info")] = ModelBase::toJson(dataProcessInfo_);
    }

    return val;
}
bool DataProcessReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_process_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_process_info"));
        if(!fieldValue.is_null())
        {
            std::vector<DataProcessInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataProcessInfo(refVal);
        }
    }
    return ok;
}


std::vector<DataProcessInfo>& DataProcessReq::getDataProcessInfo()
{
    return dataProcessInfo_;
}

void DataProcessReq::setDataProcessInfo(const std::vector<DataProcessInfo>& value)
{
    dataProcessInfo_ = value;
    dataProcessInfoIsSet_ = true;
}

bool DataProcessReq::dataProcessInfoIsSet() const
{
    return dataProcessInfoIsSet_;
}

void DataProcessReq::unsetdataProcessInfo()
{
    dataProcessInfoIsSet_ = false;
}

}
}
}
}
}


