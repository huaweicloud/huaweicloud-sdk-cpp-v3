
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSummaryStatusRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSummaryStatusRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditSummaryStatusRequest
    : public ModelBase
{
public:
    AuditSummaryStatusRequest();
    virtual ~AuditSummaryStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditSummaryStatusRequest members

    /// <summary>
    /// 操作码，operType为switch时必输入  - on: 开启  - off: 关闭
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 操作类型  - switch: 任务开关  - execute: 立即刷新
    /// </summary>

    std::string getOperType() const;
    bool operTypeIsSet() const;
    void unsetoperType();
    void setOperType(const std::string& value);

    /// <summary>
    /// 查询条件：开始时间
    /// </summary>

    int64_t getQueryBeginTime() const;
    bool queryBeginTimeIsSet() const;
    void unsetqueryBeginTime();
    void setQueryBeginTime(int64_t value);

    /// <summary>
    /// 查询条件：结束时间
    /// </summary>

    int64_t getQueryEndTime() const;
    bool queryEndTimeIsSet() const;
    void unsetqueryEndTime();
    void setQueryEndTime(int64_t value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string operType_;
    bool operTypeIsSet_;
    int64_t queryBeginTime_;
    bool queryBeginTimeIsSet_;
    int64_t queryEndTime_;
    bool queryEndTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSummaryStatusRequest_H_
