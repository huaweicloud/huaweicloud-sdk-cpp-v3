
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkspaceQuotasResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkspaceQuotasResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkspaceQuotasResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowWorkspaceQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkspaceQuotasResponse();
    virtual ~ShowWorkspaceQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkspaceQuotasResponse members

    /// <summary>
    /// 工作空间配额数据。
    /// </summary>

    std::vector<WorkspaceQuotasResponse>& getQuotas();
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const std::vector<WorkspaceQuotasResponse>& value);


protected:
    std::vector<WorkspaceQuotasResponse> quotas_;
    bool quotasIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkspaceQuotasResponse_H_
