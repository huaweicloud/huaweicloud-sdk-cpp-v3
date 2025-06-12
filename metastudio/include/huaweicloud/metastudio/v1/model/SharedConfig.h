
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SharedConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SharedConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模板共享配置。该配置仅用于模板。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SharedConfig
    : public ModelBase
{
public:
    SharedConfig();
    virtual ~SharedConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SharedConfig members

    /// <summary>
    /// **参数解释**： 共享类型。 **约束限制**： 该配置仅用于模板 **取值范围**： * PRIVATE：私有，仅本租户可访问。 * PUBLIC：公开，所有租户可访问。当前仅提供系统资产可公开访问。 * SHARED：共享，指定租户可访问。拥有者指定租户可访问。  **默认取值**： 不涉及。
    /// </summary>

    std::string getSharedType() const;
    bool sharedTypeIsSet() const;
    void unsetsharedType();
    void setSharedType(const std::string& value);

    /// <summary>
    /// **参数解释**： 共享状态。 **约束限制**： 该配置仅用于shared_type为SHARED的模板。 **取值范围**： * PUBLISHED：发布。模板可用。 * DRAFT：草稿。编辑态，仅拥有者可访问。 * REVIEW：审核态。不可编辑，仅拥有者/审核人员可查看。  **默认取值**： 不涉及。
    /// </summary>

    std::string getSharedState() const;
    bool sharedStateIsSet() const;
    void unsetsharedState();
    void setSharedState(const std::string& value);

    /// <summary>
    /// **参数解释**： 共享过期时间。空表示永久不过期。 **约束限制**： 该配置仅用于shared_type为SHARED的模板。 格式遵循：RFC 3339，示例“2021*01*10T08:43:17Z”。 **取值范围**： 字符长度0-20位 **默认取值**： 不涉及。
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 允许访问本资产的租户列表。 **约束限制**： 该配置仅用于shared_type为SHARED的模板。 **取值范围**： 最大支持100个租户，重复的记录会被忽略。 租户ID填写project_id，字符长度1-64位。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<std::string>& getAllowedProjectIds();
    bool allowedProjectIdsIsSet() const;
    void unsetallowedProjectIds();
    void setAllowedProjectIds(const std::vector<std::string>& value);


protected:
    std::string sharedType_;
    bool sharedTypeIsSet_;
    std::string sharedState_;
    bool sharedStateIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;
    std::vector<std::string> allowedProjectIds_;
    bool allowedProjectIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SharedConfig_H_
