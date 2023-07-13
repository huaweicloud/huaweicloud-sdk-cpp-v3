
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_AgenciesTaskReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_AgenciesTaskReq_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MPC_V1_EXPORT  AgenciesTaskReq
    : public ModelBase
{
public:
    AgenciesTaskReq();
    virtual ~AgenciesTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AgenciesTaskReq members

    /// <summary>
    /// 委托任务租户Id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 操作标记，取值[CREATED,CANCELED]，CREATED表示授权, CANCELED表示取消授权 
    /// </summary>

    std::string getOperateType() const;
    bool operateTypeIsSet() const;
    void unsetoperateType();
    void setOperateType(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string operateType_;
    bool operateTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_AgenciesTaskReq_H_
