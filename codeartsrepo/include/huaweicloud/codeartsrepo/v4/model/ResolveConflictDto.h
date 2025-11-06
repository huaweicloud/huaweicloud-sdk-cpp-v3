
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResolveConflictDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResolveConflictDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/ResolveConflictFileDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ResolveConflictDto
    : public ModelBase
{
public:
    ResolveConflictDto();
    virtual ~ResolveConflictDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResolveConflictDto members

    /// <summary>
    /// **参数解释：** 提交信息
    /// </summary>

    std::string getCommitMessage() const;
    bool commitMessageIsSet() const;
    void unsetcommitMessage();
    void setCommitMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 冲突的文件      
    /// </summary>

    std::vector<ResolveConflictFileDto>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<ResolveConflictFileDto>& value);


protected:
    std::string commitMessage_;
    bool commitMessageIsSet_;
    std::vector<ResolveConflictFileDto> files_;
    bool filesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResolveConflictDto_H_
