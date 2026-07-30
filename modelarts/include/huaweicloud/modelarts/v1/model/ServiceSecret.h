
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceSecret_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceSecret_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/SecretVolume.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 服务密钥挂载。 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceSecret
    : public ModelBase
{
public:
    ServiceSecret();
    virtual ~ServiceSecret();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceSecret members

    /// <summary>
    /// **参数解释：** 是否启用密钥。 **约束限制：** 不涉及。 **取值范围：** - true：启用密钥。 - false：不启用密钥。 **默认取值：** false。
    /// </summary>

    bool isSecretEnable() const;
    bool secretEnableIsSet() const;
    void unsetsecretEnable();
    void setSecretEnable(bool value);

    /// <summary>
    /// **参数解释：** 密钥类型。 **约束限制：** 不涉及。 **取值范围：** - custom：自定义密钥。 - [dew：DEW密钥。](tag:hws,hws_hk,fcs) **默认取值：** 不涉及。
    /// </summary>

    std::string getSecretType() const;
    bool secretTypeIsSet() const;
    void unsetsecretType();
    void setSecretType(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥挂载。 **约束限制：** 上限30个。
    /// </summary>

    std::vector<SecretVolume>& getSecretVolumes();
    bool secretVolumesIsSet() const;
    void unsetsecretVolumes();
    void setSecretVolumes(const std::vector<SecretVolume>& value);

    /// <summary>
    /// **参数解释：** 是否启用镜像的用户组。 **约束限制：** 不涉及。 **取值范围：** - true：启用镜像的用户组。 - false：不启用镜像的用户组。 **默认取值：** false。
    /// </summary>

    bool isGroupEnable() const;
    bool groupEnableIsSet() const;
    void unsetgroupEnable();
    void setGroupEnable(bool value);

    /// <summary>
    /// **参数解释：** 镜像的用户组ID。 **约束限制：** 不涉及。 **取值范围：** 1000~4294967294。 **默认取值：** 不涉及。
    /// </summary>

    int64_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int64_t value);


protected:
    bool secretEnable_;
    bool secretEnableIsSet_;
    std::string secretType_;
    bool secretTypeIsSet_;
    std::vector<SecretVolume> secretVolumes_;
    bool secretVolumesIsSet_;
    bool groupEnable_;
    bool groupEnableIsSet_;
    int64_t groupId_;
    bool groupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceSecret_H_
