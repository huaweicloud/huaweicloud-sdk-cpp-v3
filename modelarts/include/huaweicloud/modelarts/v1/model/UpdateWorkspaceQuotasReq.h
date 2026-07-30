
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceQuotasReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceQuotasReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/modelarts/v1/model/UpdateWorkspaceQuotasReq_quotas.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateWorkspaceQuotasReq
    : public ModelBase
{
public:
    UpdateWorkspaceQuotasReq();
    virtual ~UpdateWorkspaceQuotasReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWorkspaceQuotasReq members

    /// <summary>
    /// 工作空间配额数据。
    /// </summary>

    std::vector<UpdateWorkspaceQuotasReq_quotas>& getQuotas();
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const std::vector<UpdateWorkspaceQuotasReq_quotas>& value);


protected:
    std::vector<UpdateWorkspaceQuotasReq_quotas> quotas_;
    bool quotasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceQuotasReq_H_
