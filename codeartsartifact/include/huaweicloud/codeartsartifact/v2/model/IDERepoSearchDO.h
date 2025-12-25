
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepoSearchDO_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepoSearchDO_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  IDERepoSearchDO
    : public ModelBase
{
public:
    IDERepoSearchDO();
    virtual ~IDERepoSearchDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IDERepoSearchDO members

    /// <summary>
    /// 搜索制品名称
    /// </summary>

    std::string getArtifactName() const;
    bool artifactNameIsSet() const;
    void unsetartifactName();
    void setArtifactName(const std::string& value);

    /// <summary>
    /// 制品类型
    /// </summary>

    std::string getArtifactType() const;
    bool artifactTypeIsSet() const;
    void unsetartifactType();
    void setArtifactType(const std::string& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 是否在项目中
    /// </summary>

    bool isInProject() const;
    bool inProjectIsSet() const;
    void unsetinProject();
    void setInProject(bool value);


protected:
    std::string artifactName_;
    bool artifactNameIsSet_;
    std::string artifactType_;
    bool artifactTypeIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    bool inProject_;
    bool inProjectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepoSearchDO_H_
