
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListFilesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListFilesRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ListFilesRequest
    : public ModelBase
{
public:
    ListFilesRequest();
    virtual ~ListFilesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFilesRequest members

    /// <summary>
    /// 仓库id
    /// </summary>

    std::string getRepositoryUuid() const;
    bool repositoryUuidIsSet() const;
    void unsetrepositoryUuid();
    void setRepositoryUuid(const std::string& value);

    /// <summary>
    /// 分支名称
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);


protected:
    std::string repositoryUuid_;
    bool repositoryUuidIsSet_;
    std::string branchName_;
    bool branchNameIsSet_;
    std::string path_;
    bool pathIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFilesRequest& dereference_from_shared_ptr(std::shared_ptr<ListFilesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListFilesRequest_H_
