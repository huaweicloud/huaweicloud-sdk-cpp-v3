
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
    /// 防火墙版本，0：标准版，1：专业版，2：铂金版，3：基础版
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
    /// 带宽
    /// </summary>

    int32_t getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(int32_t value);

    /// <summary>
    /// 日志存储
    /// </summary>

    int32_t getLogStorage() const;
    bool logStorageIsSet() const;
    void unsetlogStorage();
    void setLogStorage(int32_t value);


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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_Flavor_H_
