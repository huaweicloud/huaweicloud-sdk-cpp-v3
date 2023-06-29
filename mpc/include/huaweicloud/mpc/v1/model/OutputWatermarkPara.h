
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputWatermarkPara_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputWatermarkPara_H_

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
class HUAWEICLOUD_MPC_V1_EXPORT  OutputWatermarkPara
    : public ModelBase
{
public:
    OutputWatermarkPara();
    virtual ~OutputWatermarkPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OutputWatermarkPara members

    /// <summary>
    /// 水印时长 
    /// </summary>

    int32_t getTimeDuration() const;
    bool timeDurationIsSet() const;
    void unsettimeDuration();
    void setTimeDuration(int32_t value);


protected:
    int32_t timeDuration_;
    bool timeDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputWatermarkPara_H_
