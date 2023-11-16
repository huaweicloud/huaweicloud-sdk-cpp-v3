
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePolicyRequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePolicyRequestBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新策略的请求体
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UpdatePolicyRequestBody
    : public ModelBase
{
public:
    UpdatePolicyRequestBody();
    virtual ~UpdatePolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePolicyRequestBody members

    /// <summary>
    /// 策略名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 清洗阈值
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// udp协议封禁。block：封禁，unblock：不封禁
    /// </summary>

    std::string getUdp() const;
    bool udpIsSet() const;
    void unsetudp();
    void setUdp(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t threshold_;
    bool thresholdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string udp_;
    bool udpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePolicyRequestBody_H_
