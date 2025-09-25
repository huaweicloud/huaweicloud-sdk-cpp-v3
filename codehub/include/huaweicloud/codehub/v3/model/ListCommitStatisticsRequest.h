
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListCommitStatisticsRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListCommitStatisticsRequest_H_


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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ListCommitStatisticsRequest
    : public ModelBase
{
public:
    ListCommitStatisticsRequest();
    virtual ~ListCommitStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCommitStatisticsRequest members

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// 仓库的主键id
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);


protected:
    std::string branchName_;
    bool branchNameIsSet_;
    std::string repositoryId_;
    bool repositoryIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCommitStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ListCommitStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListCommitStatisticsRequest_H_
