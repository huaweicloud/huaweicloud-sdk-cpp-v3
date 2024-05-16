
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RecoveryBackupSource_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RecoveryBackupSource_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestoreTableListDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  RecoveryBackupSource
    : public ModelBase
{
public:
    RecoveryBackupSource();
    virtual ~RecoveryBackupSource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecoveryBackupSource members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 恢复备份类型：backup，timestamp，different
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 用于恢复的备份ID。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// UTC时间，时间戳
    /// </summary>

    std::string getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(const std::string& value);

    /// <summary>
    /// 表基础信息。
    /// </summary>

    std::vector<RestoreTableListDetail>& getTableList();
    bool tableListIsSet() const;
    void unsettableList();
    void setTableList(const std::vector<RestoreTableListDetail>& value);

    /// <summary>
    /// 备份级别取值, 默认值：INSTANCE
    /// </summary>

    std::string getSchemaType() const;
    bool schemaTypeIsSet() const;
    void unsetschemaType();
    void setSchemaType(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    std::string restoreTime_;
    bool restoreTimeIsSet_;
    std::vector<RestoreTableListDetail> tableList_;
    bool tableListIsSet_;
    std::string schemaType_;
    bool schemaTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RecoveryBackupSource_H_
