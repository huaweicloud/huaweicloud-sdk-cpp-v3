
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ProjectEncryptionStatusBriefDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ProjectEncryptionStatusBriefDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ProjectEncryptionStatusBriefDto
    : public ModelBase
{
public:
    ProjectEncryptionStatusBriefDto();
    virtual ~ProjectEncryptionStatusBriefDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectEncryptionStatusBriefDto members

    /// <summary>
    /// **参数解释：** 仓库加密状态ID。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库加密状态 **取值范围：** - encrypting，加密中。 - encrypted，已加密。 - decrypting，解密中。 - decrypted，已解密。 **默认取值：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 最近加密时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastEncryptionAt() const;
    bool lastEncryptionAtIsSet() const;
    void unsetlastEncryptionAt();
    void setLastEncryptionAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 最近解密时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastDecryptionAt() const;
    bool lastDecryptionAtIsSet() const;
    void unsetlastDecryptionAt();
    void setLastDecryptionAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启仓库加密。 **约束限制：** 不涉及。 **取值范围：** - true，开启仓库加密。 - false，关闭仓库加密。
    /// </summary>

    bool isIsConsistent() const;
    bool isConsistentIsSet() const;
    void unsetisConsistent();
    void setIsConsistent(bool value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string lastEncryptionAt_;
    bool lastEncryptionAtIsSet_;
    std::string lastDecryptionAt_;
    bool lastDecryptionAtIsSet_;
    bool isConsistent_;
    bool isConsistentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ProjectEncryptionStatusBriefDto_H_
