
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepoRevisionModel_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepoRevisionModel_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  IDERepoRevisionModel
    : public ModelBase
{
public:
    IDERepoRevisionModel();
    virtual ~IDERepoRevisionModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IDERepoRevisionModel members

    /// <summary>
    /// 仓库id集合
    /// </summary>

    std::string getRepositoryIds() const;
    bool repositoryIdsIsSet() const;
    void unsetrepositoryIds();
    void setRepositoryIds(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);


protected:
    std::string repositoryIds_;
    bool repositoryIdsIsSet_;
    std::string format_;
    bool formatIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_IDERepoRevisionModel_H_
