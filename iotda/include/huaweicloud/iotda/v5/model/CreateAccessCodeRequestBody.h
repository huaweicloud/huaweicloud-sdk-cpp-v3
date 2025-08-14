
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAccessCodeRequestBody_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAccessCodeRequestBody_H_


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
/// 生成接入凭证的结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateAccessCodeRequestBody
    : public ModelBase
{
public:
    CreateAccessCodeRequestBody();
    virtual ~CreateAccessCodeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAccessCodeRequestBody members

    /// <summary>
    /// **参数说明**：接入凭证类型，默认为AMQP的接入凭证类型。 **取值范围**： - [AMQP,MQTT]
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数说明**: 是否将AMQP/MQTT连接断开
    /// </summary>

    bool isForceDisconnect() const;
    bool forceDisconnectIsSet() const;
    void unsetforceDisconnect();
    void setForceDisconnect(bool value);


protected:
    std::string type_;
    bool typeIsSet_;
    bool forceDisconnect_;
    bool forceDisconnectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateAccessCodeRequestBody_H_
