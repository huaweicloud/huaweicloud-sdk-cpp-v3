
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_FlowPps_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_FlowPps_H_


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
class HUAWEICLOUD_AAD_V2_EXPORT  FlowPps
    : public ModelBase
{
public:
    FlowPps();
    virtual ~FlowPps();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowPps members

    /// <summary>
    /// 数据时间
    /// </summary>

    int64_t getUtime() const;
    bool utimeIsSet() const;
    void unsetutime();
    void setUtime(int64_t value);

    /// <summary>
    /// 攻击包速率
    /// </summary>

    int32_t getAttackPps() const;
    bool attackPpsIsSet() const;
    void unsetattackPps();
    void setAttackPps(int32_t value);

    /// <summary>
    /// 正常包速率
    /// </summary>

    int32_t getNormalPps() const;
    bool normalPpsIsSet() const;
    void unsetnormalPps();
    void setNormalPps(int32_t value);


protected:
    int64_t utime_;
    bool utimeIsSet_;
    int32_t attackPps_;
    bool attackPpsIsSet_;
    int32_t normalPps_;
    bool normalPpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_FlowPps_H_
