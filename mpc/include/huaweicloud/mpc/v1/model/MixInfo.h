
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MixInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MixInfo_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/InputSetting.h>
#include <huaweicloud/mpc/v1/model/MixInfo_layout.h>
#include <vector>

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
class HUAWEICLOUD_MPC_V1_EXPORT  MixInfo
    : public ModelBase
{
public:
    MixInfo();
    virtual ~MixInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MixInfo members

    /// <summary>
    /// 合成任务原始视频配置
    /// </summary>

    std::vector<InputSetting>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<InputSetting>& value);

    /// <summary>
    /// 
    /// </summary>

    MixInfo_layout getLayout() const;
    bool layoutIsSet() const;
    void unsetlayout();
    void setLayout(const MixInfo_layout& value);


protected:
    std::vector<InputSetting> inputs_;
    bool inputsIsSet_;
    MixInfo_layout layout_;
    bool layoutIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MixInfo_H_
