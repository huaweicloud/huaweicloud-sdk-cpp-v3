
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GpgSubKeyDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GpgSubKeyDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  GpgSubKeyDto
    : public ModelBase
{
public:
    GpgSubKeyDto();
    virtual ~GpgSubKeyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GpgSubKeyDto members

    /// <summary>
    /// **参数解释：** 子公钥subkey的id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 子公钥的指纹格式。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetfingerprint();
    void setFingerprint(const std::string& value);

    /// <summary>
    /// **参数解释：** gpg_key的id。
    /// </summary>

    int32_t getGpgKeyId() const;
    bool gpgKeyIdIsSet() const;
    void unsetgpgKeyId();
    void setGpgKeyId(int32_t value);

    /// <summary>
    /// **参数解释：** 子密钥的id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getKeyid() const;
    bool keyidIsSet() const;
    void unsetkeyid();
    void setKeyid(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string fingerprint_;
    bool fingerprintIsSet_;
    int32_t gpgKeyId_;
    bool gpgKeyIdIsSet_;
    std::string keyid_;
    bool keyidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_GpgSubKeyDto_H_
