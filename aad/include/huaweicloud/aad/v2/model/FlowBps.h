
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_FlowBps_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_FlowBps_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  FlowBps
    : public ModelBase
{
public:
    FlowBps();
    virtual ~FlowBps();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowBps members

    /// <summary>
    /// 数据时间
    /// </summary>

    int64_t getUtime() const;
    bool utimeIsSet() const;
    void unsetutime();
    void setUtime(int64_t value);

    /// <summary>
    /// 攻击流量
    /// </summary>

    int32_t getAttackBps() const;
    bool attackBpsIsSet() const;
    void unsetattackBps();
    void setAttackBps(int32_t value);

    /// <summary>
    /// 正常流量
    /// </summary>

    int32_t getNormalBps() const;
    bool normalBpsIsSet() const;
    void unsetnormalBps();
    void setNormalBps(int32_t value);


protected:
    int64_t utime_;
    bool utimeIsSet_;
    int32_t attackBps_;
    bool attackBpsIsSet_;
    int32_t normalBps_;
    bool normalBpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_FlowBps_H_
