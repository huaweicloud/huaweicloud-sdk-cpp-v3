
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListProtectedBranchesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListProtectedBranchesResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/RepositoryProtectedBranchDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListProtectedBranchesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProtectedBranchesResponse();
    virtual ~ListProtectedBranchesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProtectedBranchesResponse members

    /// <summary>
    /// 仓库保护分支列表
    /// </summary>

    std::vector<RepositoryProtectedBranchDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<RepositoryProtectedBranchDto>& value);


protected:
    std::vector<RepositoryProtectedBranchDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListProtectedBranchesResponse_H_
