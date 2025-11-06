
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddDeployKeyV2Request_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddDeployKeyV2Request_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/AddDeployKeyRequestBody.h>

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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  AddDeployKeyV2Request
    : public ModelBase
{
public:
    AddDeployKeyV2Request();
    virtual ~AddDeployKeyV2Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddDeployKeyV2Request members

    /// <summary>
    /// 仓库主键id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    AddDeployKeyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddDeployKeyRequestBody& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    AddDeployKeyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddDeployKeyV2Request& dereference_from_shared_ptr(std::shared_ptr<AddDeployKeyV2Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AddDeployKeyV2Request_H_
