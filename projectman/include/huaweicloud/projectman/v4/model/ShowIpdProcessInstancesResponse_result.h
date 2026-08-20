
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProcessInstancesResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProcessInstancesResponse_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ShowIpdProcessInstancesResponse_result_process_instances.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求结果。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIpdProcessInstancesResponse_result
    : public ModelBase
{
public:
    ShowIpdProcessInstancesResponse_result();
    virtual ~ShowIpdProcessInstancesResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpdProcessInstancesResponse_result members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 评审单列表。
    /// </summary>

    std::vector<ShowIpdProcessInstancesResponse_result_process_instances>& getProcessInstances();
    bool processInstancesIsSet() const;
    void unsetprocessInstances();
    void setProcessInstances(const std::vector<ShowIpdProcessInstancesResponse_result_process_instances>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ShowIpdProcessInstancesResponse_result_process_instances> processInstances_;
    bool processInstancesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdProcessInstancesResponse_result_H_
