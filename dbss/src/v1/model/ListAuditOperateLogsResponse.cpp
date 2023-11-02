

#include "huaweicloud/dbss/v1/model/ListAuditOperateLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditOperateLogsResponse::ListAuditOperateLogsResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    operateLogIsSet_ = false;
}

ListAuditOperateLogsResponse::~ListAuditOperateLogsResponse() = default;

void ListAuditOperateLogsResponse::validate()
{
}

web::json::value ListAuditOperateLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }
    if(operateLogIsSet_) {
        val[utility::conversions::to_string_t("operate_log")] = ModelBase::toJson(operateLog_);
    }

    return val;
}
bool ListAuditOperateLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_log"));
        if(!fieldValue.is_null())
        {
            std::vector<OperateLogInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateLog(refVal);
        }
    }
    return ok;
}


int32_t ListAuditOperateLogsResponse::getTotalNum() const
{
    return totalNum_;
}

void ListAuditOperateLogsResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ListAuditOperateLogsResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ListAuditOperateLogsResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<OperateLogInfo>& ListAuditOperateLogsResponse::getOperateLog()
{
    return operateLog_;
}

void ListAuditOperateLogsResponse::setOperateLog(const std::vector<OperateLogInfo>& value)
{
    operateLog_ = value;
    operateLogIsSet_ = true;
}

bool ListAuditOperateLogsResponse::operateLogIsSet() const
{
    return operateLogIsSet_;
}

void ListAuditOperateLogsResponse::unsetoperateLog()
{
    operateLogIsSet_ = false;
}

}
}
}
}
}


