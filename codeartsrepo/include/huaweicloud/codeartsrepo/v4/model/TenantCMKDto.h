
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TenantCMKDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TenantCMKDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  TenantCMKDto
    : public ModelBase
{
public:
    TenantCMKDto();
    virtual ~TenantCMKDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TenantCMKDto members

    /// <summary>
    /// **参数解释：** 加密主密钥的名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCmkKeyName() const;
    bool cmkKeyNameIsSet() const;
    void unsetcmkKeyName();
    void setCmkKeyName(const std::string& value);

    /// <summary>
    /// **参数解释：** 加密主密钥的id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCmkKeyId() const;
    bool cmkKeyIdIsSet() const;
    void unsetcmkKeyId();
    void setCmkKeyId(const std::string& value);

    /// <summary>
    /// **参数解释：** 加密主密钥key的状态。 **取值范围：** 1表示待激活状态,2 表示启用状态,3 表示禁用状态,4 表示计划删除状态,5 表示等待导入状态。
    /// </summary>

    std::string getKeyState() const;
    bool keyStateIsSet() const;
    void unsetkeyState();
    void setKeyState(const std::string& value);


protected:
    std::string cmkKeyName_;
    bool cmkKeyNameIsSet_;
    std::string cmkKeyId_;
    bool cmkKeyIdIsSet_;
    std::string keyState_;
    bool keyStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TenantCMKDto_H_
