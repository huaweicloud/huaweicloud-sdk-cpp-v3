
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_StopJobActionReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_StopJobActionReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结束单个任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  StopJobActionReq
    : public ModelBase
{
public:
    StopJobActionReq();
    virtual ~StopJobActionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StopJobActionReq members

    /// <summary>
    /// 强制结束任务时取值true，默认false。
    /// </summary>

    bool isIsForceStop() const;
    bool isForceStopIsSet() const;
    void unsetisForceStop();
    void setIsForceStop(bool value);


protected:
    bool isForceStop_;
    bool isForceStopIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_StopJobActionReq_H_
