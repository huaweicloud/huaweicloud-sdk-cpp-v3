

#include "huaweicloud/drs/v5/model/ShowDataProgressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDataProgressResponse::ShowDataProgressResponse()
{
    dataProcessInfoIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ShowDataProgressResponse::~ShowDataProgressResponse() = default;

void ShowDataProgressResponse::validate()
{
}

web::json::value ShowDataProgressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataProcessInfoIsSet_) {
        val[utility::conversions::to_string_t("data_process_info")] = ModelBase::toJson(dataProcessInfo_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ShowDataProgressResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<DataProcessInfo>& ShowDataProgressResponse::getDataProcessInfo()
{
    return dataProcessInfo_;
}

void ShowDataProgressResponse::setDataProcessInfo(const std::vector<DataProcessInfo>& value)
{
    dataProcessInfo_ = value;
    dataProcessInfoIsSet_ = true;
}

bool ShowDataProgressResponse::dataProcessInfoIsSet() const
{
    return dataProcessInfoIsSet_;
}

void ShowDataProgressResponse::unsetdataProcessInfo()
{
    dataProcessInfoIsSet_ = false;
}

int32_t ShowDataProgressResponse::getCount() const
{
    return count_;
}

void ShowDataProgressResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowDataProgressResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowDataProgressResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


