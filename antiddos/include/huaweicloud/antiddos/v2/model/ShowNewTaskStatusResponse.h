
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ShowNewTaskStatusResponse_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ShowNewTaskStatusResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  ShowNewTaskStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowNewTaskStatusResponse();
    virtual ~ShowNewTaskStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNewTaskStatusResponse members

    /// <summary>
    /// 任务状态，可选范围： - success: 表示成功 - failed: 表示失败 - waiting: 表示等待 - running: 表示运行中 - preprocess: 表示预处理 - ready: 表示准备
    /// </summary>

    std::string getTaskStatus() const;
    bool taskStatusIsSet() const;
    void unsettaskStatus();
    void setTaskStatus(const std::string& value);

    /// <summary>
    /// 任务的附加信息
    /// </summary>

    std::string getTaskMsg() const;
    bool taskMsgIsSet() const;
    void unsettaskMsg();
    void setTaskMsg(const std::string& value);


protected:
    std::string taskStatus_;
    bool taskStatusIsSet_;
    std::string taskMsg_;
    bool taskMsgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_ShowNewTaskStatusResponse_H_
