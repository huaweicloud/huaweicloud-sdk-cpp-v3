

#include "huaweicloud/rds/v3/model/ListInstanceBackupSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstanceBackupSummaryResponse::ListInstanceBackupSummaryResponse()
{
    infosIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListInstanceBackupSummaryResponse::~ListInstanceBackupSummaryResponse() = default;

void ListInstanceBackupSummaryResponse::validate()
{
}

web::json::value ListInstanceBackupSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(infosIsSet_) {
        val[utility::conversions::to_string_t("infos")] = ModelBase::toJson(infos_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListInstanceBackupSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("infos"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceBackupSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<InstanceBackupSummary>& ListInstanceBackupSummaryResponse::getInfos()
{
    return infos_;
}

void ListInstanceBackupSummaryResponse::setInfos(const std::vector<InstanceBackupSummary>& value)
{
    infos_ = value;
    infosIsSet_ = true;
}

bool ListInstanceBackupSummaryResponse::infosIsSet() const
{
    return infosIsSet_;
}

void ListInstanceBackupSummaryResponse::unsetinfos()
{
    infosIsSet_ = false;
}

int32_t ListInstanceBackupSummaryResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstanceBackupSummaryResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstanceBackupSummaryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstanceBackupSummaryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


