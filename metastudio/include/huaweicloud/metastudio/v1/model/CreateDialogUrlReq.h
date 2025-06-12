
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateDialogUrlReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateDialogUrlReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建对话链接。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateDialogUrlReq
    : public ModelBase
{
public:
    CreateDialogUrlReq();
    virtual ~CreateDialogUrlReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDialogUrlReq members

    /// <summary>
    /// 智能交互对话ID，获取方法请参考[创建智能交互对话直播间](CreateSmartChatRoom.xml)。
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);


protected:
    std::string roomId_;
    bool roomIdIsSet_;
    std::string robotId_;
    bool robotIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateDialogUrlReq_H_
