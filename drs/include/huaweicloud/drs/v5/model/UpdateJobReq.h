
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateJobReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/UpdateJob.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新指定ID任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UpdateJobReq
    : public ModelBase
{
public:
    UpdateJobReq();
    virtual ~UpdateJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateJobReq members

    /// <summary>
    /// 更新指定ID任务详情类型。  场景一：更新单个任务详情，取值： - name：更新该任务名称。 - description：更新该任务描述。 - re_create：配置中任务三天以后虚拟机删除后重建。 - expired_days：更新任务异常自动结束时间，单位为天。  场景二：更新批量异步任务详情，取值： - all：批量异步创建的任务，参数校验不通过，需要指定全部参数进行更新时。 - network：批量异步创建的任务，测试连接不通过，需要更新源库/目标库信息时。 - policy：批量异步创建的任务，需要更新任务配置时。 - db_object：批量异步创建的任务，需要更新对象信息时。 - precheck：批量异步创建的任务，需要重新预检查时。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateJob getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const UpdateJob& value);


protected:
    std::string type_;
    bool typeIsSet_;
    UpdateJob params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateJobReq_H_
