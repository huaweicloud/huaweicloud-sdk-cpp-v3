
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_RoundDeployVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_RoundDeployVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/tics/v1/model/DeployVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  RoundDeployVo
    : public ModelBase
{
public:
    RoundDeployVo();
    virtual ~RoundDeployVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RoundDeployVo members

    /// <summary>
    /// deploy
    /// </summary>

    std::vector<DeployVo>& getDeploys();
    bool deploysIsSet() const;
    void unsetdeploys();
    void setDeploys(const std::vector<DeployVo>& value);

    /// <summary>
    /// 轮数
    /// </summary>

    int32_t getRoundId() const;
    bool roundIdIsSet() const;
    void unsetroundId();
    void setRoundId(int32_t value);


protected:
    std::vector<DeployVo> deploys_;
    bool deploysIsSet_;
    int32_t roundId_;
    bool roundIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_RoundDeployVo_H_
