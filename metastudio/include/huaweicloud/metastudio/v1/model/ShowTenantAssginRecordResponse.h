
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantAssginRecordResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantAssginRecordResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/AllocateSpResourceSummaryInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/AllocateSpResourceInfo.h>
#include <huaweicloud/metastudio/v1/model/SpTenantInfo.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowTenantAssginRecordResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTenantAssginRecordResponse();
    virtual ~ShowTenantAssginRecordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTenantAssginRecordResponse members

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getCustomerProjectId() const;
    bool customerProjectIdIsSet() const;
    void unsetcustomerProjectId();
    void setCustomerProjectId(const std::string& value);

    /// <summary>
    /// 被关联租户的名称。
    /// </summary>

    std::string getCustomerName() const;
    bool customerNameIsSet() const;
    void unsetcustomerName();
    void setCustomerName(const std::string& value);

    /// <summary>
    /// 租户的可用区。
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 分配表记录总数，用于分页。
    /// </summary>

    int32_t getResourceCount() const;
    bool resourceCountIsSet() const;
    void unsetresourceCount();
    void setResourceCount(int32_t value);

    /// <summary>
    /// 分配给租户的资源。
    /// </summary>

    std::vector<AllocateSpResourceInfo>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<AllocateSpResourceInfo>& value);

    /// <summary>
    /// 分配给租户的资源总览。
    /// </summary>

    std::vector<AllocateSpResourceSummaryInfo>& getResourcesOverview();
    bool resourcesOverviewIsSet() const;
    void unsetresourcesOverview();
    void setResourcesOverview(const std::vector<AllocateSpResourceSummaryInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string customerProjectId_;
    bool customerProjectIdIsSet_;
    std::string customerName_;
    bool customerNameIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    int32_t resourceCount_;
    bool resourceCountIsSet_;
    std::vector<AllocateSpResourceInfo> resources_;
    bool resourcesIsSet_;
    std::vector<AllocateSpResourceSummaryInfo> resourcesOverview_;
    bool resourcesOverviewIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTenantAssginRecordResponse_H_
