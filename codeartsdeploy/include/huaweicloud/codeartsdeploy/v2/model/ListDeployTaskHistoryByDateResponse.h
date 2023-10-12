
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListDeployTaskHistoryByDateResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListDeployTaskHistoryByDateResponse_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/ExecuteRecordV2Body.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ListDeployTaskHistoryByDateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDeployTaskHistoryByDateResponse();
    virtual ~ListDeployTaskHistoryByDateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDeployTaskHistoryByDateResponse members

    /// <summary>
    /// 应用历史部署记录列表
    /// </summary>

    std::vector<ExecuteRecordV2Body>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<ExecuteRecordV2Body>& value);

    /// <summary>
    /// 开始时间和结束时间内应用历史部署记录总数
    /// </summary>

    int32_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int32_t value);


protected:
    std::vector<ExecuteRecordV2Body> result_;
    bool resultIsSet_;
    int32_t totalNum_;
    bool totalNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListDeployTaskHistoryByDateResponse_H_
