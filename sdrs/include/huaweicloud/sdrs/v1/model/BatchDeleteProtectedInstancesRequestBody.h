
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchDeleteProtectedInstancesRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchDeleteProtectedInstancesRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ResourceId.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量删除请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  BatchDeleteProtectedInstancesRequestBody
    : public ModelBase
{
public:
    BatchDeleteProtectedInstancesRequestBody();
    virtual ~BatchDeleteProtectedInstancesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteProtectedInstancesRequestBody members

    /// <summary>
    /// 所需要删除的保护实例列表。
    /// </summary>

    std::vector<ResourceId>& getProtectedInstances();
    bool protectedInstancesIsSet() const;
    void unsetprotectedInstances();
    void setProtectedInstances(const std::vector<ResourceId>& value);

    /// <summary>
    /// 是否删除容灾站点服务器，默认值为false。
    /// </summary>

    bool isDeleteTargetServer() const;
    bool deleteTargetServerIsSet() const;
    void unsetdeleteTargetServer();
    void setDeleteTargetServer(bool value);

    /// <summary>
    /// 是否删除容灾站点弹性IP，默认值为false。
    /// </summary>

    bool isDeleteTargetEip() const;
    bool deleteTargetEipIsSet() const;
    void unsetdeleteTargetEip();
    void setDeleteTargetEip(bool value);


protected:
    std::vector<ResourceId> protectedInstances_;
    bool protectedInstancesIsSet_;
    bool deleteTargetServer_;
    bool deleteTargetServerIsSet_;
    bool deleteTargetEip_;
    bool deleteTargetEipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchDeleteProtectedInstancesRequestBody_H_
