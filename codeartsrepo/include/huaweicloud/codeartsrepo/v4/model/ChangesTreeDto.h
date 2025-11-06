
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ChangesTreeDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ChangesTreeDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ChangesTreeObjectDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 合并请求文件变更列表详情
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ChangesTreeDto
    : public ModelBase
{
public:
    ChangesTreeDto();
    virtual ~ChangesTreeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangesTreeDto members

    /// <summary>
    /// **参数解释：** 展示审核文件。
    /// </summary>

    bool isCanShowMyApprovalFiles() const;
    bool canShowMyApprovalFilesIsSet() const;
    void unsetcanShowMyApprovalFiles();
    void setCanShowMyApprovalFiles(bool value);

    /// <summary>
    /// **参数解释：** 变更树。
    /// </summary>

    std::vector<ChangesTreeObjectDto>& getTree();
    bool treeIsSet() const;
    void unsettree();
    void setTree(const std::vector<ChangesTreeObjectDto>& value);


protected:
    bool canShowMyApprovalFiles_;
    bool canShowMyApprovalFilesIsSet_;
    std::vector<ChangesTreeObjectDto> tree_;
    bool treeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ChangesTreeDto_H_
