
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupTransferInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupTransferInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 转储任务信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BackupTransferInfo
    : public ModelBase
{
public:
    BackupTransferInfo();
    virtual ~BackupTransferInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupTransferInfo members

    /// <summary>
    /// 备份id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 备份名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(int64_t value);

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 对象大小,单位为KByte
    /// </summary>

    double getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(double value);

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 目标对象名称
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 目标桶名
    /// </summary>

    std::string getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const std::string& value);

    /// <summary>
    /// 转储备份起始时间
    /// </summary>

    int64_t getBackupBeginTime() const;
    bool backupBeginTimeIsSet() const;
    void unsetbackupBeginTime();
    void setBackupBeginTime(int64_t value);

    /// <summary>
    /// 转储备份结束时间
    /// </summary>

    int64_t getBackupEndTime() const;
    bool backupEndTimeIsSet() const;
    void unsetbackupEndTime();
    void setBackupEndTime(int64_t value);

    /// <summary>
    /// 转储任务类型
    /// </summary>

    std::string getTransferType() const;
    bool transferTypeIsSet() const;
    void unsettransferType();
    void setTransferType(const std::string& value);

    /// <summary>
    /// 转储目标前缀
    /// </summary>

    std::string getPrefix() const;
    bool prefixIsSet() const;
    void unsetprefix();
    void setPrefix(const std::string& value);

    /// <summary>
    /// 转储备份类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int64_t beginTime_;
    bool beginTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    double size_;
    bool sizeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string destination_;
    bool destinationIsSet_;
    int64_t backupBeginTime_;
    bool backupBeginTimeIsSet_;
    int64_t backupEndTime_;
    bool backupEndTimeIsSet_;
    std::string transferType_;
    bool transferTypeIsSet_;
    std::string prefix_;
    bool prefixIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupTransferInfo_H_
