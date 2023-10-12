
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ConcatInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ConcatInfo_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  ConcatInfo
    : public ModelBase
{
public:
    ConcatInfo();
    virtual ~ConcatInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConcatInfo members

    /// <summary>
    /// 拼接任务输入源地址。
    /// </summary>

    std::vector<ObsObjInfo>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<ObsObjInfo>& value);


protected:
    std::vector<ObsObjInfo> inputs_;
    bool inputsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ConcatInfo_H_
