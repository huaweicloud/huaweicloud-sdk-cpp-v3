
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditResult_admin_audit_result_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditResult_admin_audit_result_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 管理员审核结果。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AuditResult_admin_audit_result
    : public ModelBase
{
public:
    AuditResult_admin_audit_result();
    virtual ~AuditResult_admin_audit_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditResult_admin_audit_result members

    /// <summary>
    /// 审核信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 附件名称。
    /// </summary>

    std::string getAttachmentName() const;
    bool attachmentNameIsSet() const;
    void unsetattachmentName();
    void setAttachmentName(const std::string& value);

    /// <summary>
    /// 附件下载地址。
    /// </summary>

    std::string getAttachmentUrl() const;
    bool attachmentUrlIsSet() const;
    void unsetattachmentUrl();
    void setAttachmentUrl(const std::string& value);

    /// <summary>
    /// 操作时间。
    /// </summary>

    int64_t getAuditTime() const;
    bool auditTimeIsSet() const;
    void unsetauditTime();
    void setAuditTime(int64_t value);


protected:
    std::string message_;
    bool messageIsSet_;
    std::string attachmentName_;
    bool attachmentNameIsSet_;
    std::string attachmentUrl_;
    bool attachmentUrlIsSet_;
    int64_t auditTime_;
    bool auditTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AuditResult_admin_audit_result_H_
