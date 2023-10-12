

#include "huaweicloud/rds/v3/model/ListInstancesSupportFastRestoreResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesSupportFastRestoreResponse::ListInstancesSupportFastRestoreResponse()
{
    supportFastRestoreListIsSet_ = false;
}

ListInstancesSupportFastRestoreResponse::~ListInstancesSupportFastRestoreResponse() = default;

void ListInstancesSupportFastRestoreResponse::validate()
{
}

web::json::value ListInstancesSupportFastRestoreResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(supportFastRestoreListIsSet_) {
        val[utility::conversions::to_string_t("support_fast_restore_list")] = ModelBase::toJson(supportFastRestoreList_);
    }

    return val;
}
bool ListInstancesSupportFastRestoreResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("support_fast_restore_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_fast_restore_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SupportFastRestoreList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportFastRestoreList(refVal);
        }
    }
    return ok;
}


std::vector<SupportFastRestoreList>& ListInstancesSupportFastRestoreResponse::getSupportFastRestoreList()
{
    return supportFastRestoreList_;
}

void ListInstancesSupportFastRestoreResponse::setSupportFastRestoreList(const std::vector<SupportFastRestoreList>& value)
{
    supportFastRestoreList_ = value;
    supportFastRestoreListIsSet_ = true;
}

bool ListInstancesSupportFastRestoreResponse::supportFastRestoreListIsSet() const
{
    return supportFastRestoreListIsSet_;
}

void ListInstancesSupportFastRestoreResponse::unsetsupportFastRestoreList()
{
    supportFastRestoreListIsSet_ = false;
}

}
}
}
}
}


