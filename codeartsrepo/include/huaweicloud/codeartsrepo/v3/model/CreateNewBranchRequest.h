
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateNewBranchRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateNewBranchRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v3/model/CreateNewBranchRequestBody.h>

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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  CreateNewBranchRequest
    : public ModelBase
{
public:
    CreateNewBranchRequest();
    virtual ~CreateNewBranchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateNewBranchRequest members

    /// <summary>
    /// 仓库的主键id
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateNewBranchRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateNewBranchRequestBody& value);


protected:
    std::string repositoryId_;
    bool repositoryIdIsSet_;
    CreateNewBranchRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateNewBranchRequest& dereference_from_shared_ptr(std::shared_ptr<CreateNewBranchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateNewBranchRequest_H_
