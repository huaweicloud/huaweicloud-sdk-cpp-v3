
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmSmarLiveRoomReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmSmarLiveRoomReq_H_


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
/// 确认直播间剧本请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ConfirmSmarLiveRoomReq
    : public ModelBase
{
public:
    ConfirmSmarLiveRoomReq();
    virtual ~ConfirmSmarLiveRoomReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfirmSmarLiveRoomReq members

    /// <summary>
    /// 确认操作。 * confirm: 确认。 * reject: 拒绝。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 剧本版本。从查询直播间详情接口中获取。
    /// </summary>

    std::string getScriptVersion() const;
    bool scriptVersionIsSet() const;
    void unsetscriptVersion();
    void setScriptVersion(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string scriptVersion_;
    bool scriptVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ConfirmSmarLiveRoomReq_H_
