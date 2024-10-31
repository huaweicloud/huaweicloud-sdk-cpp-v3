
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_Flavor_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_Flavor_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  Flavor
    : public ModelBase
{
public:
    Flavor();
    virtual ~Flavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Flavor members

    /// <summary>
    /// 防火墙版本，0：标准版，1：专业版，3：基础版，购买时，当防火墙“charge_mode”为“postPaid”时，仅支持专业版。“charge_mode”为“prePaid”时，支持标准版、专业版。
    /// </summary>

    int32_t getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(int32_t value);

    /// <summary>
    /// eip数量
    /// </summary>

    int32_t getEipCount() const;
    bool eipCountIsSet() const;
    void unseteipCount();
    void setEipCount(int32_t value);

    /// <summary>
    /// vpc数量
    /// </summary>

    int32_t getVpcCount() const;
    bool vpcCountIsSet() const;
    void unsetvpcCount();
    void setVpcCount(int32_t value);

    /// <summary>
    /// 带宽，单位为mbps
    /// </summary>

    int32_t getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(int32_t value);

    /// <summary>
    /// 日志存储，单位为byte
    /// </summary>

    int32_t getLogStorage() const;
    bool logStorageIsSet() const;
    void unsetlogStorage();
    void setLogStorage(int32_t value);

    /// <summary>
    /// 默认防火墙带宽，单位为mbps，标准版为10，专业版为50，按需专业版为200
    /// </summary>

    int32_t getDefaultBandwidth() const;
    bool defaultBandwidthIsSet() const;
    void unsetdefaultBandwidth();
    void setDefaultBandwidth(int32_t value);

    /// <summary>
    /// 默认eip数，标准版为20，专业版为50，按需专业版为1000
    /// </summary>

    int32_t getDefaultEipCount() const;
    bool defaultEipCountIsSet() const;
    void unsetdefaultEipCount();
    void setDefaultEipCount(int32_t value);

    /// <summary>
    /// 默认日志存储，单位为byte，默认为0
    /// </summary>

    int32_t getDefaultLogStorage() const;
    bool defaultLogStorageIsSet() const;
    void unsetdefaultLogStorage();
    void setDefaultLogStorage(int32_t value);

    /// <summary>
    /// 默认vpc数，标准版为0，专业版为2，按需专业版为5
    /// </summary>

    int32_t getDefaultVpcCount() const;
    bool defaultVpcCountIsSet() const;
    void unsetdefaultVpcCount();
    void setDefaultVpcCount(int32_t value);


protected:
    int32_t version_;
    bool versionIsSet_;
    int32_t eipCount_;
    bool eipCountIsSet_;
    int32_t vpcCount_;
    bool vpcCountIsSet_;
    int32_t bandwidth_;
    bool bandwidthIsSet_;
    int32_t logStorage_;
    bool logStorageIsSet_;
    int32_t defaultBandwidth_;
    bool defaultBandwidthIsSet_;
    int32_t defaultEipCount_;
    bool defaultEipCountIsSet_;
    int32_t defaultLogStorage_;
    bool defaultLogStorageIsSet_;
    int32_t defaultVpcCount_;
    bool defaultVpcCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_Flavor_H_
