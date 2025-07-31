
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AutoOperationConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AutoOperationConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资产自动处理任务配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AutoOperationConfig
    : public ModelBase
{
public:
    AutoOperationConfig();
    virtual ~AutoOperationConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoOperationConfig members

    /// <summary>
    /// BLOCK: 冻结 DELETE：删除
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);

    /// <summary>
    /// 资源过期时间，格式遵循：RFC 3339 如\&quot;2025-01-10T00:00:00Z\&quot;
    /// </summary>

    std::string getOperationTime() const;
    bool operationTimeIsSet() const;
    void unsetoperationTime();
    void setOperationTime(const std::string& value);


protected:
    std::string operation_;
    bool operationIsSet_;
    std::string operationTime_;
    bool operationTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AutoOperationConfig_H_
