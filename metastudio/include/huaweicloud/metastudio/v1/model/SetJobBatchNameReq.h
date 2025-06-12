
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetJobBatchNameReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetJobBatchNameReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置任务批次信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SetJobBatchNameReq
    : public ModelBase
{
public:
    SetJobBatchNameReq();
    virtual ~SetJobBatchNameReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetJobBatchNameReq members

    /// <summary>
    /// 批次名称
    /// </summary>

    std::string getBatchName() const;
    bool batchNameIsSet() const;
    void unsetbatchName();
    void setBatchName(const std::string& value);

    /// <summary>
    /// 任务id列表
    /// </summary>

    std::vector<std::string>& getJobIds();
    bool jobIdsIsSet() const;
    void unsetjobIds();
    void setJobIds(const std::vector<std::string>& value);


protected:
    std::string batchName_;
    bool batchNameIsSet_;
    std::vector<std::string> jobIds_;
    bool jobIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetJobBatchNameReq_H_
