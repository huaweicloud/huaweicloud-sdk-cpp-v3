
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailRequest_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListTranscodeDetailRequest
    : public ModelBase
{
public:
    ListTranscodeDetailRequest();
    virtual ~ListTranscodeDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTranscodeDetailRequest members

    /// <summary>
    /// 转码服务接受任务后产生的任务ID。一次最多10个 
    /// </summary>

    std::vector<std::string>& getTaskId();
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> taskId_;
    bool taskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTranscodeDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ListTranscodeDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailRequest_H_
