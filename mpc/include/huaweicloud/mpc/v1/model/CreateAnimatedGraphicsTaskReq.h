
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateAnimatedGraphicsTaskReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateAnimatedGraphicsTaskReq_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/AnimatedGraphicsOutputParam.h>
#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/CommonCreateTaskReq.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  CreateAnimatedGraphicsTaskReq
    : public ModelBase
{
public:
    CreateAnimatedGraphicsTaskReq();
    virtual ~CreateAnimatedGraphicsTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAnimatedGraphicsTaskReq members

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 用户自定义数据。 
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AnimatedGraphicsOutputParam getOutputParam() const;
    bool outputParamIsSet() const;
    void unsetoutputParam();
    void setOutputParam(const AnimatedGraphicsOutputParam& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    AnimatedGraphicsOutputParam outputParam_;
    bool outputParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateAnimatedGraphicsTaskReq_H_
