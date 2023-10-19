
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateBackupOffsitePolicyInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateBackupOffsitePolicyInfo_H_


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
/// 备份策略信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateBackupOffsitePolicyInfo
    : public ModelBase
{
public:
    UpdateBackupOffsitePolicyInfo();
    virtual ~UpdateBackupOffsitePolicyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBackupOffsitePolicyInfo members

    /// <summary>
    /// 是否开启跨区域全量备份。 - true：开启跨区域全量备份。 - false：关闭跨区域全量备份。
    /// </summary>

    bool isOpenAutoBackup() const;
    bool openAutoBackupIsSet() const;
    void unsetopenAutoBackup();
    void setOpenAutoBackup(bool value);

    /// <summary>
    /// 是否开启跨区域增量备份。 - true：开启跨区域增量备份，当open_auto_backup开启时才可以开启。 - false：关闭跨区域增量备份。
    /// </summary>

    bool isOpenIncrementalBackup() const;
    bool openIncrementalBackupIsSet() const;
    void unsetopenIncrementalBackup();
    void setOpenIncrementalBackup(bool value);

    /// <summary>
    /// 设置跨区域备份策略的目标project ID。    租户在某一Region下的project ID。                              获取方法请参见[获取项目ID](https://support.huaweicloud.com/api-gaussdb/gaussdb_10_0004.html)。
    /// </summary>

    std::string getDestinationProjectId() const;
    bool destinationProjectIdIsSet() const;
    void unsetdestinationProjectId();
    void setDestinationProjectId(const std::string& value);

    /// <summary>
    /// 设置跨区域备份策略的目标区域。
    /// </summary>

    std::string getDestinationRegion() const;
    bool destinationRegionIsSet() const;
    void unsetdestinationRegion();
    void setDestinationRegion(const std::string& value);

    /// <summary>
    /// 指定已生成的备份文件可以保存的天数。  取值范围：1～1825。
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);


protected:
    bool openAutoBackup_;
    bool openAutoBackupIsSet_;
    bool openIncrementalBackup_;
    bool openIncrementalBackupIsSet_;
    std::string destinationProjectId_;
    bool destinationProjectIdIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    int32_t keepDays_;
    bool keepDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateBackupOffsitePolicyInfo_H_
