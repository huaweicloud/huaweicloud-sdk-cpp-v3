
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowNewTaskStatusResponse_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowNewTaskStatusResponse_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ShowNewTaskStatusResponse
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
    /// 任务状态，有以下几种： - success - failed - waiting - running - preprocess - ready
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

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ShowNewTaskStatusResponse_H_
