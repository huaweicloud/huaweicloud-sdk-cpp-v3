
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobParametersResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobParametersResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/drs/v5/model/ParameterConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListJobParametersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListJobParametersResponse();
    virtual ~ListJobParametersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobParametersResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 任务参数列表
    /// </summary>

    std::vector<ParameterConfig>& getParameterConfigList();
    bool parameterConfigListIsSet() const;
    void unsetparameterConfigList();
    void setParameterConfigList(const std::vector<ParameterConfig>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<ParameterConfig> parameterConfigList_;
    bool parameterConfigListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobParametersResponse_H_
