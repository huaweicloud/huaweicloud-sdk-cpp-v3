

#include "huaweicloud/rds/v3/model/ListBackupTransfersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListBackupTransfersResponse::ListBackupTransfersResponse()
{
    total_ = 0L;
    totalIsSet_ = false;
    transferListIsSet_ = false;
}

ListBackupTransfersResponse::~ListBackupTransfersResponse() = default;

void ListBackupTransfersResponse::validate()
{
}

web::json::value ListBackupTransfersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(transferListIsSet_) {
        val[utility::conversions::to_string_t("transfer_list")] = ModelBase::toJson(transferList_);
    }

    return val;
}
bool ListBackupTransfersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transfer_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupTransferInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferList(refVal);
        }
    }
    return ok;
}


int64_t ListBackupTransfersResponse::getTotal() const
{
    return total_;
}

void ListBackupTransfersResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListBackupTransfersResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListBackupTransfersResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<BackupTransferInfo>& ListBackupTransfersResponse::getTransferList()
{
    return transferList_;
}

void ListBackupTransfersResponse::setTransferList(const std::vector<BackupTransferInfo>& value)
{
    transferList_ = value;
    transferListIsSet_ = true;
}

bool ListBackupTransfersResponse::transferListIsSet() const
{
    return transferListIsSet_;
}

void ListBackupTransfersResponse::unsettransferList()
{
    transferListIsSet_ = false;
}

}
}
}
}
}


