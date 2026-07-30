
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatistics_statistics_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatistics_statistics_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolStatistics_statistics_status.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数描述**： 资源池统计信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolStatistics_statistics
    : public ModelBase
{
public:
    PoolStatistics_statistics();
    virtual ~PoolStatistics_statistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolStatistics_statistics members

    /// <summary>
    /// 
    /// </summary>

    PoolStatistics_statistics_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const PoolStatistics_statistics_status& value);


protected:
    PoolStatistics_statistics_status status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatistics_statistics_H_
