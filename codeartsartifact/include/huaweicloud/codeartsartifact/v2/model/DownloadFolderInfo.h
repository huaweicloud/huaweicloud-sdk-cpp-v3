
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_DownloadFolderInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_DownloadFolderInfo_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  DownloadFolderInfo
    : public ModelBase
{
public:
    DownloadFolderInfo();
    virtual ~DownloadFolderInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadFolderInfo members

    /// <summary>
    /// **参数解释**： 文件总数。  **取值范围**： 不涉及。
    /// </summary>

    int64_t getFilesCount() const;
    bool filesCountIsSet() const;
    void unsetfilesCount();
    void setFilesCount(int64_t value);

    /// <summary>
    /// **参数解释**： 占用空间。  **取值范围**： 不涉及。
    /// </summary>

    std::string getUsedSpace() const;
    bool usedSpaceIsSet() const;
    void unsetusedSpace();
    void setUsedSpace(const std::string& value);


protected:
    int64_t filesCount_;
    bool filesCountIsSet_;
    std::string usedSpace_;
    bool usedSpaceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_DownloadFolderInfo_H_
