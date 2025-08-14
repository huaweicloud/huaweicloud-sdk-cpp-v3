
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PropertiesDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PropertiesDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/UserPropDTO.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 属性数据
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  PropertiesDTO
    : public ModelBase
{
public:
    PropertiesDTO();
    virtual ~PropertiesDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PropertiesDTO members

    /// <summary>
    /// **参数说明**：MQTT 5.0版本请求和响应模式中的相关数据，可选。用户可以通过该参数配置MQTT协议请求和响应模式中的相关数据。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getCorrelationData() const;
    bool correlationDataIsSet() const;
    void unsetcorrelationData();
    void setCorrelationData(const std::string& value);

    /// <summary>
    /// **参数说明**：MQTT 5.0版本请求和响应模式中的响应主题，可选。用户可以通过该参数配置MQTT协议请求和响应模式中的响应主题。 **取值范围**：长度不超过128, 只允许字母、数字、以及_-?&#x3D;$#+/等字符的组合。
    /// </summary>

    std::string getResponseTopic() const;
    bool responseTopicIsSet() const;
    void unsetresponseTopic();
    void setResponseTopic(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义属性，可选。用户可以通过该参数配置用户自定义属性。可以配置的最大自定义属性数量为20。
    /// </summary>

    std::vector<UserPropDTO>& getUserProperties();
    bool userPropertiesIsSet() const;
    void unsetuserProperties();
    void setUserProperties(const std::vector<UserPropDTO>& value);


protected:
    std::string correlationData_;
    bool correlationDataIsSet_;
    std::string responseTopic_;
    bool responseTopicIsSet_;
    std::vector<UserPropDTO> userProperties_;
    bool userPropertiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PropertiesDTO_H_
