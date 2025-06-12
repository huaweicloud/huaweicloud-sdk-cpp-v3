
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateActiveCodeReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateActiveCodeReq_H_


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
/// 创建激活码请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateActiveCodeReq
    : public ModelBase
{
public:
    CreateActiveCodeReq();
    virtual ~CreateActiveCodeReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateActiveCodeReq members

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 智能交互对话ID。
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 有效天数（0表示长期有效）。
    /// </summary>

    int32_t getValidPeriod() const;
    bool validPeriodIsSet() const;
    void unsetvalidPeriod();
    void setValidPeriod(int32_t value);


protected:
    std::string robotId_;
    bool robotIdIsSet_;
    std::string roomId_;
    bool roomIdIsSet_;
    int32_t validPeriod_;
    bool validPeriodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateActiveCodeReq_H_
