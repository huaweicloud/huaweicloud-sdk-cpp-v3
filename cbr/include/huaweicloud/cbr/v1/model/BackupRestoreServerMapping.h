
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupRestoreServerMapping_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupRestoreServerMapping_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BackupRestoreServerMapping
    : public ModelBase
{
public:
    BackupRestoreServerMapping();
    virtual ~BackupRestoreServerMapping();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupRestoreServerMapping members

    /// <summary>
    /// 卷备份ID，可以通过控制台查看云服务器备份详情中磁盘级备份的ID；或“查询指定备份”接口，获取备份中children内的磁盘级备份的ID。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 待恢复目标卷ID
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupRestoreServerMapping_H_
