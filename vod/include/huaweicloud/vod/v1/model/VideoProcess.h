
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_VideoProcess_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_VideoProcess_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  VideoProcess
    : public ModelBase
{
public:
    VideoProcess();
    virtual ~VideoProcess();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoProcess members

    /// <summary>
    /// 需要单独设置时长的HLS起始分片数量。 取值范围：[0,10]，默认值为：0 与hls_init_interval配合使用，设置前面hls_init_count个HLS分片时长。为0表示不单独配置时长。 
    /// </summary>

    int32_t getHlsInitCount() const;
    bool hlsInitCountIsSet() const;
    void unsethlsInitCount();
    void setHlsInitCount(int32_t value);

    /// <summary>
    /// 表示前面hls_init_count个HLS分片的时长。 取值范围：[2,10] ，默认值为：5 hls_init_count不为0时，该字段才起作用。 
    /// </summary>

    int32_t getHlsInitInterval() const;
    bool hlsInitIntervalIsSet() const;
    void unsethlsInitInterval();
    void setHlsInitInterval(int32_t value);


protected:
    int32_t hlsInitCount_;
    bool hlsInitCountIsSet_;
    int32_t hlsInitInterval_;
    bool hlsInitIntervalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_VideoProcess_H_
