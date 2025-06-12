
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListJobOperationLogResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListJobOperationLogResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/OperationLogItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListJobOperationLogResponse
    : public ModelBase, public HttpResponse
{
public:
    ListJobOperationLogResponse();
    virtual ~ListJobOperationLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobOperationLogResponse members

    /// <summary>
    /// 满足查询要求的操作日志总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 操作日志列表
    /// </summary>

    std::vector<OperationLogItem>& getOperations();
    bool operationsIsSet() const;
    void unsetoperations();
    void setOperations(const std::vector<OperationLogItem>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<OperationLogItem> operations_;
    bool operationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListJobOperationLogResponse_H_
