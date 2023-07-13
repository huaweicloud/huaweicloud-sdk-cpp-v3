
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_MigrateResourceRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_MigrateResourceRequest_H_

#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/MigrateResource.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  MigrateResourceRequest
    : public ModelBase
{
public:
    MigrateResourceRequest();
    virtual ~MigrateResourceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MigrateResourceRequest members

    /// <summary>
    /// 目标企业项目ID，enterprise_project_id为0时表示迁移资源到默认资源组default。注：实际迁移时，会将资源所属的【当前企业项目ID】替换为【目标企业项目ID】，所以不需要指定【当前企业项目ID】。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MigrateResource getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MigrateResource& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    MigrateResource body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    MigrateResourceRequest& dereference_from_shared_ptr(std::shared_ptr<MigrateResourceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_MigrateResourceRequest_H_
