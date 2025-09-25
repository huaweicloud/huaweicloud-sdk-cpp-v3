
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ResolveConflictDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ResolveConflictDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codehub/v4/model/ResolveConflictFileDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ResolveConflictDto
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ResolveConflictDto_H_
