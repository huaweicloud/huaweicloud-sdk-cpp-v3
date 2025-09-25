
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlStartRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlStartRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/SqlTypeConfigOption.h>
#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/LtsInfoOption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**: 开启全量SQL请求体。 **取值范围**: 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  FullSqlStartRequestBody
    : public ModelBase
{
public:
    FullSqlStartRequestBody();
    virtual ~FullSqlStartRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FullSqlStartRequestBody members

    /// <summary>
    /// **参数解释**: 全量SQL采集数据最大保留天数。 **约束限制**: 不涉及。 **取值范围**: [1, 30] **默认取值**: 不涉及。
    /// </summary>

    int32_t getSaveDays() const;
    bool saveDaysIsSet() const;
    void unsetsaveDays();
    void setSaveDays(int32_t value);

    /// <summary>
    /// **参数解释**: 存储类型。 **约束限制**: 公有云场景，只支持LTS云日志服务存储。 **取值范围**: - LTS：LTS云日志服务。  **默认取值**: 不涉及。
    /// </summary>

    std::string getStorageMode() const;
    bool storageModeIsSet() const;
    void unsetstorageMode();
    void setStorageMode(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否过滤系统用户。 **约束限制**: 不涉及。 **取值范围**: - true：过滤系统用户。 - false：不过滤系统用户。  **默认取值**: 不涉及。
    /// </summary>

    bool isIsExcludeSysUser() const;
    bool isExcludeSysUserIsSet() const;
    void unsetisExcludeSysUser();
    void setIsExcludeSysUser(bool value);

    /// <summary>
    /// 
    /// </summary>

    LtsInfoOption getLtsConfig() const;
    bool ltsConfigIsSet() const;
    void unsetltsConfig();
    void setLtsConfig(const LtsInfoOption& value);

    /// <summary>
    /// **参数解释**: SQL采集类型列表。默认取值[]，表示采集所有SQL语句。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<SqlTypeConfigOption>& getSqlTypeRange();
    bool sqlTypeRangeIsSet() const;
    void unsetsqlTypeRange();
    void setSqlTypeRange(const std::vector<SqlTypeConfigOption>& value);


protected:
    int32_t saveDays_;
    bool saveDaysIsSet_;
    std::string storageMode_;
    bool storageModeIsSet_;
    bool isExcludeSysUser_;
    bool isExcludeSysUserIsSet_;
    LtsInfoOption ltsConfig_;
    bool ltsConfigIsSet_;
    std::vector<SqlTypeConfigOption> sqlTypeRange_;
    bool sqlTypeRangeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlStartRequestBody_H_
