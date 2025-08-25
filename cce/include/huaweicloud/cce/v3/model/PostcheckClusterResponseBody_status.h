
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PostcheckClusterResponseBody_status_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PostcheckClusterResponseBody_status_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 集群升级后确认的状态信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PostcheckClusterResponseBody_status
    : public ModelBase
{
public:
    PostcheckClusterResponseBody_status();
    virtual ~PostcheckClusterResponseBody_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostcheckClusterResponseBody_status members

    /// <summary>
    /// 状态，取值如下 - Success 成功 - Failed 失败 - Error 错误
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);


protected:
    std::string phase_;
    bool phaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PostcheckClusterResponseBody_status_H_
