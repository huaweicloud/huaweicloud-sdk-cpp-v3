
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MRConflictFileDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MRConflictFileDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ConflictSectionDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 冲突文件详情
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  MRConflictFileDto
    : public ModelBase
{
public:
    MRConflictFileDto();
    virtual ~MRConflictFileDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MRConflictFileDto members

    /// <summary>
    /// **参数解释：** 旧文件名称。
    /// </summary>

    std::string getOldPath() const;
    bool oldPathIsSet() const;
    void unsetoldPath();
    void setOldPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 新文件名称。
    /// </summary>

    std::string getNewPath() const;
    bool newPathIsSet() const;
    void unsetnewPath();
    void setNewPath(const std::string& value);

    /// <summary>
    /// blob_icon
    /// </summary>

    std::string getBlobIcon() const;
    bool blobIconIsSet() const;
    void unsetblobIcon();
    void setBlobIcon(const std::string& value);

    /// <summary>
    /// blob 路径
    /// </summary>

    std::string getBlobPath() const;
    bool blobPathIsSet() const;
    void unsetblobPath();
    void setBlobPath(const std::string& value);

    /// <summary>
    /// 冲突类型
    /// </summary>

    std::string getConflictType() const;
    bool conflictTypeIsSet() const;
    void unsetconflictType();
    void setConflictType(const std::string& value);

    /// <summary>
    /// 内容
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 内容路径
    /// </summary>

    std::string getContentPath() const;
    bool contentPathIsSet() const;
    void unsetcontentPath();
    void setContentPath(const std::string& value);

    /// <summary>
    /// 片段
    /// </summary>

    std::vector<ConflictSectionDto>& getSections();
    bool sectionsIsSet() const;
    void unsetsections();
    void setSections(const std::vector<ConflictSectionDto>& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string oldPath_;
    bool oldPathIsSet_;
    std::string newPath_;
    bool newPathIsSet_;
    std::string blobIcon_;
    bool blobIconIsSet_;
    std::string blobPath_;
    bool blobPathIsSet_;
    std::string conflictType_;
    bool conflictTypeIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string contentPath_;
    bool contentPathIsSet_;
    std::vector<ConflictSectionDto> sections_;
    bool sectionsIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MRConflictFileDto_H_
