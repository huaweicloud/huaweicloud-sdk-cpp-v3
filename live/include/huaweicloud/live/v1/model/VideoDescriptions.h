
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_VideoDescriptions_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_VideoDescriptions_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  VideoDescriptions
    : public ModelBase
{
public:
    VideoDescriptions();
    virtual ~VideoDescriptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoDescriptions members

    /// <summary>
    /// 自定义gop时长，单位秒，有效取值[0,10]. 默认值0，表示跟随源流，不支持7和9，值无效时按默认值处理
    /// </summary>

    int32_t getGopDurationSeconds() const;
    bool gopDurationSecondsIsSet() const;
    void unsetgopDurationSeconds();
    void setGopDurationSeconds(int32_t value);


protected:
    int32_t gopDurationSeconds_;
    bool gopDurationSecondsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_VideoDescriptions_H_
