
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ShowNewTaskStatusRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ShowNewTaskStatusRequest_H_


#include <huaweicloud/antiddos/v2/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  ShowNewTaskStatusRequest
    : public ModelBase
{
public:
    ShowNewTaskStatusRequest();
    virtual ~ShowNewTaskStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNewTaskStatusRequest members

    /// <summary>
    /// 任务ID（非负整数）的字符串
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
public:
    ShowNewTaskStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ShowNewTaskStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ShowNewTaskStatusRequest_H_
