
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowBranchesByRepositoryIdRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowBranchesByRepositoryIdRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ShowBranchesByRepositoryIdRequest
    : public ModelBase
{
public:
    ShowBranchesByRepositoryIdRequest();
    virtual ~ShowBranchesByRepositoryIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBranchesByRepositoryIdRequest members

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
    ShowBranchesByRepositoryIdRequest& dereference_from_shared_ptr(std::shared_ptr<ShowBranchesByRepositoryIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowBranchesByRepositoryIdRequest_H_
