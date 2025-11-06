
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateCommitRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateCommitRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/CreateCommitRequestBody.h>

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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  CreateCommitRequest
    : public ModelBase
{
public:
    CreateCommitRequest();
    virtual ~CreateCommitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCommitRequest members

    /// <summary>
    /// 仓库短id
    /// </summary>

    int32_t getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CreateCommitRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateCommitRequestBody& value);


protected:
    int32_t repoId_;
    bool repoIdIsSet_;
    CreateCommitRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateCommitRequest& dereference_from_shared_ptr(std::shared_ptr<CreateCommitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateCommitRequest_H_
