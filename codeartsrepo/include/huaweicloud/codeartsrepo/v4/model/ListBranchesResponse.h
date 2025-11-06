
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListBranchesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListBranchesResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/BranchSimpleDto.h>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListBranchesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBranchesResponse();
    virtual ~ListBranchesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBranchesResponse members

    /// <summary>
    /// 分支列表
    /// </summary>

    std::vector<BranchSimpleDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<BranchSimpleDto>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::vector<BranchSimpleDto> body_;
    bool bodyIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListBranchesResponse_H_
