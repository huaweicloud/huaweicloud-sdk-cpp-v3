
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoFileDOV5_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoFileDOV5_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  RepoFileDOV5
    : public ModelBase
{
public:
    RepoFileDOV5();
    virtual ~RepoFileDOV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoFileDOV5 members

    /// <summary>
    /// **参数解释**: id。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**: 文件id。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getFileId() const;
    bool fileIdIsSet() const;
    void unsetfileId();
    void setFileId(const std::string& value);

    /// <summary>
    /// **参数解释**: 仓库id。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// **参数解释**: 项目名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释**: 父级目录ID。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释**: 文件名。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**: 文件名。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// **参数解释**: 文件类型, folder代表是目录,file代表文件。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**: 发布包状态 test为测试包 prod为发布包。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**: 文件扩展名。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getExtension() const;
    bool extensionIsSet() const;
    void unsetextension();
    void setExtension(const std::string& value);

    /// <summary>
    /// **参数解释**: 文件路径。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释**: 文件路径(含项目)。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getFullPath() const;
    bool fullPathIsSet() const;
    void unsetfullPath();
    void setFullPath(const std::string& value);

    /// <summary>
    /// **参数解释**: 文件大小,单位为byte。 **取值范围**: 不涉及。 
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// **参数解释**: md5校验和。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getMd5() const;
    bool md5IsSet() const;
    void unsetmd5();
    void setMd5(const std::string& value);

    /// <summary>
    /// **参数解释**: sha256校验和。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getSha256() const;
    bool sha256IsSet() const;
    void unsetsha256();
    void setSha256(const std::string& value);

    /// <summary>
    /// **参数解释**: 下载地址。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getDownloadUrl() const;
    bool downloadUrlIsSet() const;
    void unsetdownloadUrl();
    void setDownloadUrl(const std::string& value);

    /// <summary>
    /// **参数解释**: 带有id的下载地址。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getDownloadUrlWithId() const;
    bool downloadUrlWithIdIsSet() const;
    void unsetdownloadUrlWithId();
    void setDownloadUrlWithId(const std::string& value);

    /// <summary>
    /// **参数解释**: 历史版本遗留字段，请忽略。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// **参数解释**: 判断当前文件或文件夹父目录是否为版本路径，即仓库下第一层子目录。 **取值范围**: - true：父目录是版本路径。 - false：父目录不是版本路径。 
    /// </summary>

    bool isVersionEnable() const;
    bool versionEnableIsSet() const;
    void unsetversionEnable();
    void setVersionEnable(bool value);

    /// <summary>
    /// **参数解释**: migrated_state。 **取值范围**: 该参数为内部数据改造参数，无业务含义，请忽略。 
    /// </summary>

    int32_t getMigratedState() const;
    bool migratedStateIsSet() const;
    void unsetmigratedState();
    void setMigratedState(int32_t value);

    /// <summary>
    /// **参数解释**: 该参数无返回值，请忽略。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getUploadId() const;
    bool uploadIdIsSet() const;
    void unsetuploadId();
    void setUploadId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string fileId_;
    bool fileIdIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string extension_;
    bool extensionIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string fullPath_;
    bool fullPathIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string md5_;
    bool md5IsSet_;
    std::string sha256_;
    bool sha256IsSet_;
    std::string downloadUrl_;
    bool downloadUrlIsSet_;
    std::string downloadUrlWithId_;
    bool downloadUrlWithIdIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    bool versionEnable_;
    bool versionEnableIsSet_;
    int32_t migratedState_;
    bool migratedStateIsSet_;
    std::string uploadId_;
    bool uploadIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoFileDOV5_H_
