
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RestoreRequest
    : public ModelBase
{
public:
    RestoreRequest();
    virtual ~RestoreRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreRequest members

    /// <summary>
    /// 目标实例ID。
    /// </summary>

    std::string getTargetInstanceId() const;
    bool targetInstanceIdIsSet() const;
    void unsettargetInstanceId();
    void setTargetInstanceId(const std::string& value);

    /// <summary>
    /// 源实例ID。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// 用于恢复的备份ID。当使用备份文件恢复时需要指定该参数。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 恢复数据的时间点，格式为UNIX时间戳，单位是毫秒，时区为UTC。
    /// </summary>

    int64_t getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(int64_t value);

    /// <summary>
    /// 表示恢复方式，枚举值： - backup：表示使用备份文件恢复，按照此方式恢复时，当\&quot;type\&quot;字段为非必选时，\&quot;backup_id\&quot;必选。 - timestamp：表示按时间点恢复，按照此方式恢复时，当\&quot;type\&quot;字段必选时，\&quot;restore_time\&quot;必选。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string targetInstanceId_;
    bool targetInstanceIdIsSet_;
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    int64_t restoreTime_;
    bool restoreTimeIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreRequest_H_
