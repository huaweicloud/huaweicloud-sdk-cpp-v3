

#include "huaweicloud/drs/v5/model/ShowDirtyDataResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDirtyDataResponse::ShowDirtyDataResponse()
{
    count_ = 0;
    countIsSet_ = false;
    dirtyDataListIsSet_ = false;
}

ShowDirtyDataResponse::~ShowDirtyDataResponse() = default;

void ShowDirtyDataResponse::validate()
{
}

web::json::value ShowDirtyDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(dirtyDataListIsSet_) {
        val[utility::conversions::to_string_t("dirty_data_list")] = ModelBase::toJson(dirtyDataList_);
    }

    return val;
}

bool ShowDirtyDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dirty_data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dirty_data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DirtyData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirtyDataList(refVal);
        }
    }
    return ok;
}

int32_t ShowDirtyDataResponse::getCount() const
{
    return count_;
}

void ShowDirtyDataResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowDirtyDataResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowDirtyDataResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<DirtyData>& ShowDirtyDataResponse::getDirtyDataList()
{
    return dirtyDataList_;
}

void ShowDirtyDataResponse::setDirtyDataList(const std::vector<DirtyData>& value)
{
    dirtyDataList_ = value;
    dirtyDataListIsSet_ = true;
}

bool ShowDirtyDataResponse::dirtyDataListIsSet() const
{
    return dirtyDataListIsSet_;
}

void ShowDirtyDataResponse::unsetdirtyDataList()
{
    dirtyDataListIsSet_ = false;
}

}
}
}
}
}


