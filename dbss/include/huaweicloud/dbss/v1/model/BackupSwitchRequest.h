
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_BackupSwitchRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_BackupSwitchRequest_H_


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
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  BackupSwitchRequest
    : public ModelBase
{
public:
    BackupSwitchRequest();
    virtual ~BackupSwitchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupSwitchRequest members

    /// <summary>
    /// OBS桶名称
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// 备份根路径
    /// </summary>

    std::string getBucketRootPath() const;
    bool bucketRootPathIsSet() const;
    void unsetbucketRootPath();
    void setBucketRootPath(const std::string& value);

    /// <summary>
    /// 备份周期 - PER_DAY：每天 - PER_WEEK：每周 - PER_MONTH：每月 - PER_HOUR：每小时 - FIVE_MIN：每5分钟
    /// </summary>

    std::string getCycle() const;
    bool cycleIsSet() const;
    void unsetcycle();
    void setCycle(const std::string& value);

    /// <summary>
    /// 备份模式  - AUTO：自动备份
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 开关状态  - 0：关闭  - 1：开启
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 触发时间，yyyy-MM-dd HH:mm:ss
    /// </summary>

    utility::datetime getTriggerTime() const;
    bool triggerTimeIsSet() const;
    void unsettriggerTime();
    void setTriggerTime(const utility::datetime& value);


protected:
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string bucketRootPath_;
    bool bucketRootPathIsSet_;
    std::string cycle_;
    bool cycleIsSet_;
    std::string mode_;
    bool modeIsSet_;
    int32_t status_;
    bool statusIsSet_;
    utility::datetime triggerTime_;
    bool triggerTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_BackupSwitchRequest_H_
