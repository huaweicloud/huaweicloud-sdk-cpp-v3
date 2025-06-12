
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MobvoiConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MobvoiConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 奇妙问应用配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  MobvoiConfig
    : public ModelBase
{
public:
    MobvoiConfig();
    virtual ~MobvoiConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MobvoiConfig members

    /// <summary>
    /// 奇妙问应用帐号。
    /// </summary>

    std::string getAppKey() const;
    bool appKeyIsSet() const;
    void unsetappKey();
    void setAppKey(const std::string& value);

    /// <summary>
    /// 奇妙问应用Secret。
    /// </summary>

    std::string getAppSecret() const;
    bool appSecretIsSet() const;
    void unsetappSecret();
    void setAppSecret(const std::string& value);

    /// <summary>
    /// 奇妙问角色ID。
    /// </summary>

    std::string getRoleId() const;
    bool roleIdIsSet() const;
    void unsetroleId();
    void setRoleId(const std::string& value);

    /// <summary>
    /// SIS所在区域
    /// </summary>

    int32_t getSisRegion() const;
    bool sisRegionIsSet() const;
    void unsetsisRegion();
    void setSisRegion(int32_t value);

    /// <summary>
    /// SIS所在区域的projectId
    /// </summary>

    std::string getSisProjectId() const;
    bool sisProjectIdIsSet() const;
    void unsetsisProjectId();
    void setSisProjectId(const std::string& value);

    /// <summary>
    /// 是否开启热词
    /// </summary>

    bool isEnableHotWords() const;
    bool enableHotWordsIsSet() const;
    void unsetenableHotWords();
    void setEnableHotWords(bool value);


protected:
    std::string appKey_;
    bool appKeyIsSet_;
    std::string appSecret_;
    bool appSecretIsSet_;
    std::string roleId_;
    bool roleIdIsSet_;
    int32_t sisRegion_;
    bool sisRegionIsSet_;
    std::string sisProjectId_;
    bool sisProjectIdIsSet_;
    bool enableHotWords_;
    bool enableHotWordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MobvoiConfig_H_
