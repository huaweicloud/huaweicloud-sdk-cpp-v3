
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlRestorePoint_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlRestorePoint_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlRestorePoint
    : public ModelBase
{
public:
    MysqlRestorePoint();
    virtual ~MysqlRestorePoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MysqlRestorePoint members

    /// <summary>
    /// PITR。要恢复的时间点。
    /// </summary>

    int64_t getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(int64_t value);

    /// <summary>
    /// 源实例ID。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// 备份文件ID。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 备份类型。当参数为空时，backup_id不能为空，即默认按备份文件恢复。 当参数不为空时，取值范围： - backup：表示按备份文件恢复； - timestamp：表示按时间点恢复；
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    int64_t restoreTime_;
    bool restoreTimeIsSet_;
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlRestorePoint_H_
