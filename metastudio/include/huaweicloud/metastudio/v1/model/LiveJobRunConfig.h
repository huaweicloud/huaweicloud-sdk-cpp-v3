
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveJobRunConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveJobRunConfig_H_


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
/// 数字人直播任务运行配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveJobRunConfig
    : public ModelBase
{
public:
    LiveJobRunConfig();
    virtual ~LiveJobRunConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveJobRunConfig members

    /// <summary>
    /// 允许使用资源类型。 * PERIOD：使用包周期资源 * ONDEMAND：使用按需资源 * UNLIMITED：不限制资源类型 * ONE_TIME：一次性资源
    /// </summary>

    std::string getAllowResourceType() const;
    bool allowResourceTypeIsSet() const;
    void unsetallowResourceType();
    void setAllowResourceType(const std::string& value);

    /// <summary>
    /// 一个直播间是否仅允许一个正在直播的任务。 * true: 限制直播间仅允许一个任务运行。 * false: 不限制直播间任务运行数量。
    /// </summary>

    bool isSingleJobInRoom() const;
    bool singleJobInRoomIsSet() const;
    void unsetsingleJobInRoom();
    void setSingleJobInRoom(bool value);


protected:
    std::string allowResourceType_;
    bool allowResourceTypeIsSet_;
    bool singleJobInRoom_;
    bool singleJobInRoomIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveJobRunConfig_H_
