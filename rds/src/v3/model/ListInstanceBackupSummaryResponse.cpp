

#include "huaweicloud/rds/v3/model/ListInstanceBackupSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstanceBackupSummaryResponse::ListInstanceBackupSummaryResponse()
{
    infosIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
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
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
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

int32_t ListInstanceBackupSummaryResponse::getTotal() const
{
    return total_;
}

void ListInstanceBackupSummaryResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInstanceBackupSummaryResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInstanceBackupSummaryResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


