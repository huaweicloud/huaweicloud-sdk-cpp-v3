
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListQualityEnhanceDefaultTemplateResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListQualityEnhanceDefaultTemplateResponse_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/QualityEnhanceTemplateInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListQualityEnhanceDefaultTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListQualityEnhanceDefaultTemplateResponse();
    virtual ~ListQualityEnhanceDefaultTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListQualityEnhanceDefaultTemplateResponse members

    /// <summary>
    /// 任务列表
    /// </summary>

    std::vector<QualityEnhanceTemplateInfo>& getTaskArray();
    bool taskArrayIsSet() const;
    void unsettaskArray();
    void setTaskArray(const std::vector<QualityEnhanceTemplateInfo>& value);

    /// <summary>
    /// 查询结果数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<QualityEnhanceTemplateInfo> taskArray_;
    bool taskArrayIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListQualityEnhanceDefaultTemplateResponse_H_
