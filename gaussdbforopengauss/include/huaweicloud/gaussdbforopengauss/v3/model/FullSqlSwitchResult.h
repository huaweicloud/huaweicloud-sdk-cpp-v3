
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlSwitchResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlSwitchResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/LtsConfigInfoResult.h>
#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/SqlTypeInfoResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**: 开关记录列表。 **取值范围**: 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  FullSqlSwitchResult
    : public ModelBase
{
public:
    FullSqlSwitchResult();
    virtual ~FullSqlSwitchResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FullSqlSwitchResult members

    /// <summary>
    /// **参数解释**: 是否开启全量SQL。 **取值范围**: - true：已开启。 - false：已关闭。
    /// </summary>

    bool isIsOpen() const;
    bool isOpenIsSet() const;
    void unsetisOpen();
    void setIsOpen(bool value);

    /// <summary>
    /// **参数解释**: 开关状态持续的开始时间。格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量。 **取值范围**: 不涉及。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 开关状态持续的结束时间。格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量。 **取值范围**: 为null则表示，开关状态还在持续，没有发生切换。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 已采集的全量SQL数据的最大保留天数。 **取值范围**: [1,30]
    /// </summary>

    int32_t getSaveDays() const;
    bool saveDaysIsSet() const;
    void unsetsaveDays();
    void setSaveDays(int32_t value);

    /// <summary>
    /// **参数解释**: 全量SQL数据存储类型。 **取值范围**: - LTS：LTS云日志服务。
    /// </summary>

    std::string getStorageMode() const;
    bool storageModeIsSet() const;
    void unsetstorageMode();
    void setStorageMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LtsConfigInfoResult getLtsConfig() const;
    bool ltsConfigIsSet() const;
    void unsetltsConfig();
    void setLtsConfig(const LtsConfigInfoResult& value);

    /// <summary>
    /// **参数解释**: SQL采集类型列表。 **取值范围**: 不涉及。
    /// </summary>

    std::vector<SqlTypeInfoResult>& getSqlTypeRange();
    bool sqlTypeRangeIsSet() const;
    void unsetsqlTypeRange();
    void setSqlTypeRange(const std::vector<SqlTypeInfoResult>& value);

    /// <summary>
    /// **参数解释**: 实例ID。 **取值范围**: 不涉及。是否过滤系统用户。使能该选项后，全量SQL采集将会跳过系统用户所执行的SQL记录
    /// </summary>

    bool isIsExcludeSysUser() const;
    bool isExcludeSysUserIsSet() const;
    void unsetisExcludeSysUser();
    void setIsExcludeSysUser(bool value);


protected:
    bool isOpen_;
    bool isOpenIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t saveDays_;
    bool saveDaysIsSet_;
    std::string storageMode_;
    bool storageModeIsSet_;
    LtsConfigInfoResult ltsConfig_;
    bool ltsConfigIsSet_;
    std::vector<SqlTypeInfoResult> sqlTypeRange_;
    bool sqlTypeRangeIsSet_;
    bool isExcludeSysUser_;
    bool isExcludeSysUserIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlSwitchResult_H_
