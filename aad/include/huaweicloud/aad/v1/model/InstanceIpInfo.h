
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_InstanceIpInfo_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_InstanceIpInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  InstanceIpInfo
    : public ModelBase
{
public:
    InstanceIpInfo();
    virtual ~InstanceIpInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceIpInfo members

    /// <summary>
    /// IP ID
    /// </summary>

    std::string getIpId() const;
    bool ipIdIsSet() const;
    void unsetipId();
    void setIpId(const std::string& value);

    /// <summary>
    /// IP
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 保底带宽
    /// </summary>

    int32_t getBasicBandwidth() const;
    bool basicBandwidthIsSet() const;
    void unsetbasicBandwidth();
    void setBasicBandwidth(int32_t value);

    /// <summary>
    /// 弹性带宽
    /// </summary>

    int32_t getElasticBandwidth() const;
    bool elasticBandwidthIsSet() const;
    void unsetelasticBandwidth();
    void setElasticBandwidth(int32_t value);

    /// <summary>
    /// IP状态
    /// </summary>

    int32_t getIpStatus() const;
    bool ipStatusIsSet() const;
    void unsetipStatus();
    void setIpStatus(int32_t value);


protected:
    std::string ipId_;
    bool ipIdIsSet_;
    std::string ip_;
    bool ipIsSet_;
    int32_t basicBandwidth_;
    bool basicBandwidthIsSet_;
    int32_t elasticBandwidth_;
    bool elasticBandwidthIsSet_;
    int32_t ipStatus_;
    bool ipStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_InstanceIpInfo_H_
