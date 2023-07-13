
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_Common_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_Common_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  Common
    : public ModelBase
{
public:
    Common();
    virtual ~Common();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Common members

    /// <summary>
    /// 是否开启高清低码功能。  取值如下： - false：关闭。 - true：开启。 
    /// </summary>

    bool isPvc() const;
    bool pvcIsSet() const;
    void unsetpvc();
    void setPvc(bool value);

    /// <summary>
    /// HLS分片间隔，仅封装类型“pack_type”取值为1或3时，该参数生效。  取值范围：[2，10]。  单位：秒。 
    /// </summary>

    int32_t getHlsInterval() const;
    bool hlsIntervalIsSet() const;
    void unsethlsInterval();
    void setHlsInterval(int32_t value);

    /// <summary>
    /// DASH间隔，仅封装类型“pack_type”取值为2或3时，该参数生效。  取值范围：[2，10]。  单位：秒。 
    /// </summary>

    int32_t getDashInterval() const;
    bool dashIntervalIsSet() const;
    void unsetdashInterval();
    void setDashInterval(int32_t value);

    /// <summary>
    /// 封装类型。  取值如下： - 1：HLS - 2：DASH - 3：HLS+DASH - 4：MP4 - 5：MP3 - 6：ADTS  &gt; pack_type设置为5和6时，不能设置视频参数。 
    /// </summary>

    int32_t getPackType() const;
    bool packTypeIsSet() const;
    void unsetpackType();
    void setPackType(int32_t value);


protected:
    bool pvc_;
    bool pvcIsSet_;
    int32_t hlsInterval_;
    bool hlsIntervalIsSet_;
    int32_t dashInterval_;
    bool dashIntervalIsSet_;
    int32_t packType_;
    bool packTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_Common_H_
