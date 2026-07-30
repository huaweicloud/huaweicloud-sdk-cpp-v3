
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceQuotasReq_quotas_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceQuotasReq_quotas_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateWorkspaceQuotasReq_quotas
    : public ModelBase
{
public:
    UpdateWorkspaceQuotasReq_quotas();
    virtual ~UpdateWorkspaceQuotasReq_quotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWorkspaceQuotasReq_quotas members

    /// <summary>
    /// 资源标识。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// 要修改的配额值。配额值为正整数或-1，-1代表不限制配额。配额值范围不能超过配额的最大值与最小值。可通过调用查询工作空间配额接口查询配额的最大值。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);


protected:
    std::string resource_;
    bool resourceIsSet_;
    int32_t quota_;
    bool quotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceQuotasReq_quotas_H_
