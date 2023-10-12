

#include "huaweicloud/drs/v5/model/ShowObjectMappingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowObjectMappingResponse::ShowObjectMappingResponse()
{
    count_ = 0L;
    countIsSet_ = false;
    objectMappingListIsSet_ = false;
}

ShowObjectMappingResponse::~ShowObjectMappingResponse() = default;

void ShowObjectMappingResponse::validate()
{
}

web::json::value ShowObjectMappingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(objectMappingListIsSet_) {
        val[utility::conversions::to_string_t("object_mapping_list")] = ModelBase::toJson(objectMappingList_);
    }

    return val;
}
bool ShowObjectMappingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_mapping_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_mapping_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DbObjectInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectMappingList(refVal);
        }
    }
    return ok;
}


int64_t ShowObjectMappingResponse::getCount() const
{
    return count_;
}

void ShowObjectMappingResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowObjectMappingResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowObjectMappingResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<DbObjectInfo>& ShowObjectMappingResponse::getObjectMappingList()
{
    return objectMappingList_;
}

void ShowObjectMappingResponse::setObjectMappingList(const std::vector<DbObjectInfo>& value)
{
    objectMappingList_ = value;
    objectMappingListIsSet_ = true;
}

bool ShowObjectMappingResponse::objectMappingListIsSet() const
{
    return objectMappingListIsSet_;
}

void ShowObjectMappingResponse::unsetobjectMappingList()
{
    objectMappingListIsSet_ = false;
}

}
}
}
}
}


