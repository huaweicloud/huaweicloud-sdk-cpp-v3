
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_IflytekSpark_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_IflytekSpark_H_


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
/// 科大讯飞星火大模型应用配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  IflytekSpark
    : public ModelBase
{
public:
    IflytekSpark();
    virtual ~IflytekSpark();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IflytekSpark members

    /// <summary>
    /// 星火大模型应用ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 星火大模型应用密钥。
    /// </summary>

    std::string getAppKey() const;
    bool appKeyIsSet() const;
    void unsetappKey();
    void setAppKey(const std::string& value);

    /// <summary>
    /// 星火大模型API密钥。
    /// </summary>

    std::string getApiSecret() const;
    bool apiSecretIsSet() const;
    void unsetapiSecret();
    void setApiSecret(const std::string& value);

    /// <summary>
    /// 是否为正式环境
    /// </summary>

    bool isIsProduction() const;
    bool isProductionIsSet() const;
    void unsetisProduction();
    void setIsProduction(bool value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string appKey_;
    bool appKeyIsSet_;
    std::string apiSecret_;
    bool apiSecretIsSet_;
    bool isProduction_;
    bool isProductionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_IflytekSpark_H_
