
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SetAuditAutoBackupTemplateResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SetAuditAutoBackupTemplateResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SetAuditAutoBackupTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    SetAuditAutoBackupTemplateResponse();
    virtual ~SetAuditAutoBackupTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetAuditAutoBackupTemplateResponse members

    /// <summary>
    /// OBS桶名称
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// OBS备份根路径
    /// </summary>

    std::string getBucketRootPath() const;
    bool bucketRootPathIsSet() const;
    void unsetbucketRootPath();
    void setBucketRootPath(const std::string& value);

    /// <summary>
    /// 周期 - PER_DAY：每天 - PER_WEEK：每周 - PER_MONTH：每月 - PER_HOUR：每小时 - FIVE_MIN：每5分钟
    /// </summary>

    std::string getCycle() const;
    bool cycleIsSet() const;
    void unsetcycle();
    void setCycle(const std::string& value);

    /// <summary>
    /// 最近备份时间
    /// </summary>

    utility::datetime getLatestBackupTime() const;
    bool latestBackupTimeIsSet() const;
    void unsetlatestBackupTime();
    void setLatestBackupTime(const utility::datetime& value);

    /// <summary>
    /// 备份开关  - 0：关闭  - 1：开启
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 触发时间
    /// </summary>

    utility::datetime getTriggerTime() const;
    bool triggerTimeIsSet() const;
    void unsettriggerTime();
    void setTriggerTime(const utility::datetime& value);

    /// <summary>
    /// 是否已触发
    /// </summary>

    bool isTriggered() const;
    bool triggeredIsSet() const;
    void unsettriggered();
    void setTriggered(bool value);


protected:
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string bucketRootPath_;
    bool bucketRootPathIsSet_;
    std::string cycle_;
    bool cycleIsSet_;
    utility::datetime latestBackupTime_;
    bool latestBackupTimeIsSet_;
    int32_t status_;
    bool statusIsSet_;
    utility::datetime triggerTime_;
    bool triggerTimeIsSet_;
    bool triggered_;
    bool triggeredIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SetAuditAutoBackupTemplateResponse_H_
