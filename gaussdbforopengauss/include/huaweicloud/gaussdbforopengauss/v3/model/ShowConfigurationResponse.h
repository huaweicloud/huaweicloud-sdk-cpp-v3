
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowConfigurationResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowConfigurationResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/BackupNodeInfoResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowConfigurationResponse();
    virtual ~ShowConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowConfigurationResponse members

    /// <summary>
    /// **参数解释**: 备份限速。 **取值范围**: 0-1024
    /// </summary>

    int32_t getRateLimit() const;
    bool rateLimitIsSet() const;
    void unsetrateLimit();
    void setRateLimit(int32_t value);

    /// <summary>
    /// **参数解释**: 增备预取页面个数。 **取值范围**: 1-8192
    /// </summary>

    int32_t getPrefetchBlock() const;
    bool prefetchBlockIsSet() const;
    void unsetprefetchBlock();
    void setPrefetchBlock(int32_t value);

    /// <summary>
    /// **参数解释**: 分片大小。 **取值范围**: 0-1024
    /// </summary>

    int32_t getFileSplitSize() const;
    bool fileSplitSizeIsSet() const;
    void unsetfileSplitSize();
    void setFileSplitSize(int32_t value);

    /// <summary>
    /// **参数解释**: 启用备机备份标识。 **取值范围**: 不涉及。
    /// </summary>

    bool isEnableStandbyBackup() const;
    bool enableStandbyBackupIsSet() const;
    void unsetenableStandbyBackup();
    void setEnableStandbyBackup(bool value);

    /// <summary>
    /// **参数解释**: 是否关闭压缩。 **取值范围**: true,false
    /// </summary>

    bool isCloseCompression() const;
    bool closeCompressionIsSet() const;
    void unsetcloseCompression();
    void setCloseCompression(bool value);

    /// <summary>
    /// **参数解释**: 默认备份介质。 **取值范围**: - OBS 对象存储
    /// </summary>

    std::string getDefaultBackupMediaType() const;
    bool defaultBackupMediaTypeIsSet() const;
    void unsetdefaultBackupMediaType();
    void setDefaultBackupMediaType(const std::string& value);

    /// <summary>
    /// **参数解释**: 默认备份方式。 **取值范围**: - EBACKUP 快照备份 - PHYSICAL_BACKUP 物理备份
    /// </summary>

    std::string getDefaultBackupMethod() const;
    bool defaultBackupMethodIsSet() const;
    void unsetdefaultBackupMethod();
    void setDefaultBackupMethod(const std::string& value);

    /// <summary>
    /// **参数解释**: 备份并行参数。 **取值范围**: 1, 2, 4, 8
    /// </summary>

    int32_t getBackupParallelDegree() const;
    bool backupParallelDegreeIsSet() const;
    void unsetbackupParallelDegree();
    void setBackupParallelDegree(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    BackupNodeInfoResult getBackupNodeInfo() const;
    bool backupNodeInfoIsSet() const;
    void unsetbackupNodeInfo();
    void setBackupNodeInfo(const BackupNodeInfoResult& value);


protected:
    int32_t rateLimit_;
    bool rateLimitIsSet_;
    int32_t prefetchBlock_;
    bool prefetchBlockIsSet_;
    int32_t fileSplitSize_;
    bool fileSplitSizeIsSet_;
    bool enableStandbyBackup_;
    bool enableStandbyBackupIsSet_;
    bool closeCompression_;
    bool closeCompressionIsSet_;
    std::string defaultBackupMediaType_;
    bool defaultBackupMediaTypeIsSet_;
    std::string defaultBackupMethod_;
    bool defaultBackupMethodIsSet_;
    int32_t backupParallelDegree_;
    bool backupParallelDegreeIsSet_;
    BackupNodeInfoResult backupNodeInfo_;
    bool backupNodeInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowConfigurationResponse_H_
