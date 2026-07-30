
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadStatistics_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadStatistics_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/WorkloadStatistics_status.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 特定作业类型统计信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkloadStatistics
    : public ModelBase
{
public:
    WorkloadStatistics();
    virtual ~WorkloadStatistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkloadStatistics members

    /// <summary>
    /// **参数描述**： 作业类型。 **取值范围**： 可选值如下： - train：训练作业 - infer：推理作业 - notebook：Notebook作业
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数描述**： 作业个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    WorkloadStatistics_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const WorkloadStatistics_status& value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t total_;
    bool totalIsSet_;
    WorkloadStatistics_status status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadStatistics_H_
