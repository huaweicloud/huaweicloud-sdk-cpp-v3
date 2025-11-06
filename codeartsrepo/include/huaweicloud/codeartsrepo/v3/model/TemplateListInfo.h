
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_TemplateListInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_TemplateListInfo_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/DevstarRepoInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  TemplateListInfo
    : public ModelBase
{
public:
    TemplateListInfo();
    virtual ~TemplateListInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateListInfo members

    /// <summary>
    /// 仓库列表
    /// </summary>

    std::vector<DevstarRepoInfo>& getRepos();
    bool reposIsSet() const;
    void unsetrepos();
    void setRepos(const std::vector<DevstarRepoInfo>& value);

    /// <summary>
    /// 仓库总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<DevstarRepoInfo> repos_;
    bool reposIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_TemplateListInfo_H_
