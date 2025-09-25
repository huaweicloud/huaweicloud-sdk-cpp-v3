
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_GetRepositoryByProjectIdRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_GetRepositoryByProjectIdRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  GetRepositoryByProjectIdRequest
    : public ModelBase
{
public:
    GetRepositoryByProjectIdRequest();
    virtual ~GetRepositoryByProjectIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetRepositoryByProjectIdRequest members

    /// <summary>
    /// 仓库的uuid,用来指定需要查看的仓库
    /// </summary>

    std::string getRepositoryUuid() const;
    bool repositoryUuidIsSet() const;
    void unsetrepositoryUuid();
    void setRepositoryUuid(const std::string& value);


protected:
    std::string repositoryUuid_;
    bool repositoryUuidIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GetRepositoryByProjectIdRequest& dereference_from_shared_ptr(std::shared_ptr<GetRepositoryByProjectIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_GetRepositoryByProjectIdRequest_H_
