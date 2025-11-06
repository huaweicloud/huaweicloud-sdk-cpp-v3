
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryImportRecordDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryImportRecordDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/RepositorySimpleDto.h>
#include <string>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RepositoryImportRecordDto
    : public ModelBase
{
public:
    RepositoryImportRecordDto();
    virtual ~RepositoryImportRecordDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryImportRecordDto members

    /// <summary>
    /// **参数解释：** 主键ID。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 规则名称。 **约束限制：** 不涉及。 **取值范围：** - finished, 导入成功 - fail, 导入失败 - importing, 导入中 **默认取值：** 不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RepositorySimpleDto getRepository() const;
    bool repositoryIsSet() const;
    void unsetrepository();
    void setRepository(const RepositorySimpleDto& value);

    /// <summary>
    /// **参数解释：** 源仓库路径。
    /// </summary>

    std::string getOriginFullName() const;
    bool originFullNameIsSet() const;
    void unsetoriginFullName();
    void setOriginFullName(const std::string& value);

    /// <summary>
    /// **参数解释：** 源仓库地址。
    /// </summary>

    std::string getSourceUrl() const;
    bool sourceUrlIsSet() const;
    void unsetsourceUrl();
    void setSourceUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 导入来源。 **取值范围：** - gitee - self_managed_gitlab - gitlab - github - git - svn - coding - bitbucket - gerrit - codeup
    /// </summary>

    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);

    /// <summary>
    /// **参数解释：** 导入时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 导入完成时间。
    /// </summary>

    std::string getFinishedAt() const;
    bool finishedAtIsSet() const;
    void unsetfinishedAt();
    void setFinishedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 源仓库容量。
    /// </summary>

    double getRepositorySize() const;
    bool repositorySizeIsSet() const;
    void unsetrepositorySize();
    void setRepositorySize(double value);

    /// <summary>
    /// **参数解释：** 失败原因。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库路径。
    /// </summary>

    std::string getTargetFullName() const;
    bool targetFullNameIsSet() const;
    void unsettargetFullName();
    void setTargetFullName(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目ID。
    /// </summary>

    std::string getTargetProjectId() const;
    bool targetProjectIdIsSet() const;
    void unsettargetProjectId();
    void setTargetProjectId(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string state_;
    bool stateIsSet_;
    RepositorySimpleDto repository_;
    bool repositoryIsSet_;
    std::string originFullName_;
    bool originFullNameIsSet_;
    std::string sourceUrl_;
    bool sourceUrlIsSet_;
    std::string sourceType_;
    bool sourceTypeIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string finishedAt_;
    bool finishedAtIsSet_;
    double repositorySize_;
    bool repositorySizeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;
    std::string targetFullName_;
    bool targetFullNameIsSet_;
    std::string targetProjectId_;
    bool targetProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryImportRecordDto_H_
