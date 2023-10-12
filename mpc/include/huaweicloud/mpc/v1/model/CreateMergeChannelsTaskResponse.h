
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateMergeChannelsTaskResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateMergeChannelsTaskResponse_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  CreateMergeChannelsTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateMergeChannelsTaskResponse();
    virtual ~CreateMergeChannelsTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMergeChannelsTaskResponse members

    /// <summary>
    /// 任务ID。 如果返回值为200 OK，为接受任务后产生的任务ID。 
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateMergeChannelsTaskResponse_H_
