
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CommonCreateTaskRsp_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CommonCreateTaskRsp_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  CommonCreateTaskRsp
    : public ModelBase
{
public:
    CommonCreateTaskRsp();
    virtual ~CommonCreateTaskRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CommonCreateTaskRsp members

    /// <summary>
    /// 任务ID 
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CommonCreateTaskRsp_H_
