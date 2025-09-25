
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListUserGpgKeysResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListUserGpgKeysResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/GpgSubKeyDto.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListUserGpgKeysResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUserGpgKeysResponse();
    virtual ~ListUserGpgKeysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserGpgKeysResponse members

    /// <summary>
    /// **参数解释：** 记录id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 解析到的邮箱列表以及是否生效。
    /// </summary>

    std::map<std::string, bool>& getEmailsWithVerifiedStatus();
    bool emailsWithVerifiedStatusIsSet() const;
    void unsetemailsWithVerifiedStatus();
    void setEmailsWithVerifiedStatus(std::map<std::string, bool> value);

    /// <summary>
    /// **参数解释：** 主密/公钥的指纹格式。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetfingerprint();
    void setFingerprint(const std::string& value);

    /// <summary>
    /// **参数解释：** gpg的公钥。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 描述。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** gpg_key的标题。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：** 主密/公钥primary_key的id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getPrimaryKeyid() const;
    bool primaryKeyidIsSet() const;
    void unsetprimaryKeyid();
    void setPrimaryKeyid(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否生效。
    /// </summary>

    bool isActive() const;
    bool activeIsSet() const;
    void unsetactive();
    void setActive(bool value);

    /// <summary>
    /// **参数解释：** 子钥列表。 **取值范围：** 列表长度不少于0，不超过1000。
    /// </summary>

    std::vector<GpgSubKeyDto>& getSubkeys();
    bool subkeysIsSet() const;
    void unsetsubkeys();
    void setSubkeys(const std::vector<GpgSubKeyDto>& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::map<std::string, bool> emailsWithVerifiedStatus_;
    bool emailsWithVerifiedStatusIsSet_;
    std::string fingerprint_;
    bool fingerprintIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string primaryKeyid_;
    bool primaryKeyidIsSet_;
    bool active_;
    bool activeIsSet_;
    std::vector<GpgSubKeyDto> subkeys_;
    bool subkeysIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListUserGpgKeysResponse_H_
