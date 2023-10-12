
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateRemuxTaskReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateRemuxTaskReq_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/RemuxOutputParam.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  CreateRemuxTaskReq
    : public ModelBase
{
public:
    CreateRemuxTaskReq();
    virtual ~CreateRemuxTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRemuxTaskReq members

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

    RemuxOutputParam getOutputParam() const;
    bool outputParamIsSet() const;
    void unsetoutputParam();
    void setOutputParam(const RemuxOutputParam& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    RemuxOutputParam outputParam_;
    bool outputParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateRemuxTaskReq_H_
