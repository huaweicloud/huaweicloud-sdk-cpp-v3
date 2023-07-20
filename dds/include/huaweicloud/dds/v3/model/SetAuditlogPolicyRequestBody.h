
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SetAuditlogPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SetAuditlogPolicyRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  SetAuditlogPolicyRequestBody
    : public ModelBase
{
public:
    SetAuditlogPolicyRequestBody();
    virtual ~SetAuditlogPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SetAuditlogPolicyRequestBody members

    /// <summary>
    /// 审计日志保存天数，取值范围0，7~732。 - 取值0，表示关闭审计日志策略。 - 取值7~732，表示开启审计日志策略，并设置审计日志保存天数为该值。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);

    /// <summary>
    /// 仅关闭审计日志策略时有效。 - true（默认），表示关闭审计日志策略的同时，保留历史审计日志。 - false，表示关闭审计日志策略的同时，删除已有的历史审计日志。
    /// </summary>

    std::string getReserveAuditlogs() const;
    bool reserveAuditlogsIsSet() const;
    void unsetreserveAuditlogs();
    void setReserveAuditlogs(const std::string& value);

    /// <summary>
    /// 仅打开审计日志策略时有效，并且为空时，默认全部。审计范围。请输入数据库或集合名称，多个库或集合请用英文逗号分隔。若名称中有英文逗号，请在逗号前添加“$”符号，用以区分分隔符。
    /// </summary>

    std::string getAuditScope() const;
    bool auditScopeIsSet() const;
    void unsetauditScope();
    void setAuditScope(const std::string& value);

    /// <summary>
    /// 仅打开审计日志策略时有效，并且为空时，默认全部。审计类型。支持insert，delete，update，query等。
    /// </summary>

    std::vector<std::string>& getAuditTypes();
    bool auditTypesIsSet() const;
    void unsetauditTypes();
    void setAuditTypes(const std::vector<std::string>& value);


protected:
    int32_t keepDays_;
    bool keepDaysIsSet_;
    std::string reserveAuditlogs_;
    bool reserveAuditlogsIsSet_;
    std::string auditScope_;
    bool auditScopeIsSet_;
    std::vector<std::string> auditTypes_;
    bool auditTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SetAuditlogPolicyRequestBody_H_
