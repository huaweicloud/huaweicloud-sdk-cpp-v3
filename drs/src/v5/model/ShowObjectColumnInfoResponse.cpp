

#include "huaweicloud/drs/v5/model/ShowObjectColumnInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowObjectColumnInfoResponse::ShowObjectColumnInfoResponse()
{
    objectWithColumnInfosIsSet_ = false;
}

ShowObjectColumnInfoResponse::~ShowObjectColumnInfoResponse() = default;

void ShowObjectColumnInfoResponse::validate()
{
}

web::json::value ShowObjectColumnInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectWithColumnInfosIsSet_) {
        val[utility::conversions::to_string_t("object_with_column_infos")] = ModelBase::toJson(objectWithColumnInfos_);
    }

    return val;
}
bool ShowObjectColumnInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_with_column_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_with_column_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectWithColumnInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectWithColumnInfos(refVal);
        }
    }
    return ok;
}


std::vector<ObjectWithColumnInfo>& ShowObjectColumnInfoResponse::getObjectWithColumnInfos()
{
    return objectWithColumnInfos_;
}

void ShowObjectColumnInfoResponse::setObjectWithColumnInfos(const std::vector<ObjectWithColumnInfo>& value)
{
    objectWithColumnInfos_ = value;
    objectWithColumnInfosIsSet_ = true;
}

bool ShowObjectColumnInfoResponse::objectWithColumnInfosIsSet() const
{
    return objectWithColumnInfosIsSet_;
}

void ShowObjectColumnInfoResponse::unsetobjectWithColumnInfos()
{
    objectWithColumnInfosIsSet_ = false;
}

}
}
}
}
}


