
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShareBackups_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShareBackups_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShareBackups
    : public ModelBase
{
public:
    ShareBackups();
    virtual ~ShareBackups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShareBackups members

    /// <summary>
    /// 备份ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 备份名字。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备份开始时间。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 备份结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 备份状态，取值：BUILDING：备份中，COMPLETED：备份完成，FAILED：备份失败，DELETING：备份删除中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 备份大小，单位：KB。
    /// </summary>

    double getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(double value);

    /// <summary>
    /// 备份类型，取值：\&quot;auto\&quot;自动全量备份，“manual”手动全量备份。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 备份方法。
    /// </summary>

    std::string getBackupMethod() const;
    bool backupMethodIsSet() const;
    void unsetbackupMethod();
    void setBackupMethod(const std::string& value);

    /// <summary>
    /// 备份所在实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 备份所在实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 备份所在实例状态。
    /// </summary>

    std::string getInstanceStatus() const;
    bool instanceStatusIsSet() const;
    void unsetinstanceStatus();
    void setInstanceStatus(const std::string& value);

    /// <summary>
    /// 数据库版本信息。
    /// </summary>

    Object getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const Object& value);

    /// <summary>
    /// 共享者用户名称。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    double size_;
    bool sizeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string backupMethod_;
    bool backupMethodIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string instanceStatus_;
    bool instanceStatusIsSet_;
    Object datastore_;
    bool datastoreIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShareBackups_H_
