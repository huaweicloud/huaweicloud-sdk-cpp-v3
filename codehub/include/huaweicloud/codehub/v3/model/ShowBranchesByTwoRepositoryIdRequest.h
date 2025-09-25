
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowBranchesByTwoRepositoryIdRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowBranchesByTwoRepositoryIdRequest_H_


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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ShowBranchesByTwoRepositoryIdRequest
    : public ModelBase
{
public:
    ShowBranchesByTwoRepositoryIdRequest();
    virtual ~ShowBranchesByTwoRepositoryIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBranchesByTwoRepositoryIdRequest members

    /// <summary>
    /// 仓库的主键id
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);


protected:
    std::string repositoryId_;
    bool repositoryIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowBranchesByTwoRepositoryIdRequest& dereference_from_shared_ptr(std::shared_ptr<ShowBranchesByTwoRepositoryIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowBranchesByTwoRepositoryIdRequest_H_
