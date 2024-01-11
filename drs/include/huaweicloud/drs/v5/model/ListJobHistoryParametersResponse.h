
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobHistoryParametersResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobHistoryParametersResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ListJobHistoryParameter.h>
#include <vector>

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
class HUAWEICLOUD_DRS_V5_EXPORT  ListJobHistoryParametersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListJobHistoryParametersResponse();
    virtual ~ListJobHistoryParametersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobHistoryParametersResponse members

    /// <summary>
    /// 历史记录总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 任务参数历史修改列表
    /// </summary>

    std::vector<ListJobHistoryParameter>& getParameterHistoryConfigList();
    bool parameterHistoryConfigListIsSet() const;
    void unsetparameterHistoryConfigList();
    void setParameterHistoryConfigList(const std::vector<ListJobHistoryParameter>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<ListJobHistoryParameter> parameterHistoryConfigList_;
    bool parameterHistoryConfigListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobHistoryParametersResponse_H_
