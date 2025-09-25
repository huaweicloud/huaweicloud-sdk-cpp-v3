
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowRepositoryByUuidRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowRepositoryByUuidRequest_H_


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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ShowRepositoryByUuidRequest
    : public ModelBase
{
public:
    ShowRepositoryByUuidRequest();
    virtual ~ShowRepositoryByUuidRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryByUuidRequest members

    /// <summary>
    /// 仓库的uuid
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
    ShowRepositoryByUuidRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRepositoryByUuidRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowRepositoryByUuidRequest_H_
