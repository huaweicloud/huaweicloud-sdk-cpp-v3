
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateOtaModule_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateOtaModule_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 添OTA模块对象结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateOtaModule
    : public ModelBase
{
public:
    CreateOtaModule();
    virtual ~CreateOtaModule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOtaModule members

    /// <summary>
    /// **参数说明**：资源空间ID。存在多资源空间的用户需要使用该接口时，建议携带该参数指定创建的升级包归属到哪个资源空间下。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备关联的产品ID，用于唯一标识一个产品模型，创建产品后获得。方法请参见 [[创建产品](https://support.huaweicloud.com/api-iothub/iot_06_v5_0050.html)](tag:hws)[[创建产品](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0050.html)](tag:hws_hk)。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// **参数说明**：OTA模块名称，产品下唯一且不可修改。 **取值范围**：长度不超过64，只允许英文字母、数字、下划线（_）、连接符（-）、英文点（.）的组合。
    /// </summary>

    std::string getModuleName() const;
    bool moduleNameIsSet() const;
    void unsetmoduleName();
    void setModuleName(const std::string& value);

    /// <summary>
    /// **参数说明**：OTA模块别名。 **取值范围**：长度不超过64，只允许中文、英文字母、数字、下划线（_）、连接符（-）、英文点（.）的组合。
    /// </summary>

    std::string getAliasName() const;
    bool aliasNameIsSet() const;
    void unsetaliasName();
    void setAliasName(const std::string& value);

    /// <summary>
    /// **参数说明**：用于描述模块的功能等信息。 **取值范围**：长度不超过1024。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string moduleName_;
    bool moduleNameIsSet_;
    std::string aliasName_;
    bool aliasNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateOtaModule_H_
