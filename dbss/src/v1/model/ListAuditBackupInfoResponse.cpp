

#include "huaweicloud/dbss/v1/model/ListAuditBackupInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditBackupInfoResponse::ListAuditBackupInfoResponse()
{
    dataListIsSet_ = false;
    totalNum_ = 0L;
    totalNumIsSet_ = false;
}

ListAuditBackupInfoResponse::~ListAuditBackupInfoResponse() = default;

void ListAuditBackupInfoResponse::validate()
{
}

web::json::value ListAuditBackupInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataListIsSet_) {
        val[utility::conversions::to_string_t("data_list")] = ModelBase::toJson(dataList_);
    }
    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }

    return val;
}
bool ListAuditBackupInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    return ok;
}


std::vector<BackupInfo>& ListAuditBackupInfoResponse::getDataList()
{
    return dataList_;
}

void ListAuditBackupInfoResponse::setDataList(const std::vector<BackupInfo>& value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool ListAuditBackupInfoResponse::dataListIsSet() const
{
    return dataListIsSet_;
}

void ListAuditBackupInfoResponse::unsetdataList()
{
    dataListIsSet_ = false;
}

int64_t ListAuditBackupInfoResponse::getTotalNum() const
{
    return totalNum_;
}

void ListAuditBackupInfoResponse::setTotalNum(int64_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ListAuditBackupInfoResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ListAuditBackupInfoResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

}
}
}
}
}


