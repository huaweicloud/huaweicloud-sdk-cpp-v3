
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_VersionListViewV5_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_VersionListViewV5_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  VersionListViewV5
    : public ModelBase
{
public:
    VersionListViewV5();
    virtual ~VersionListViewV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VersionListViewV5 members

    /// <summary>
    /// **参数解释**： 发布库版本的状态。 **取值范围**： - test：测试包。 - prod：发布包。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布库版本的名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getBuildVersion() const;
    bool buildVersionIsSet() const;
    void unsetbuildVersion();
    void setBuildVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 版本下的文件个数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getFilesCount() const;
    bool filesCountIsSet() const;
    void unsetfilesCount();
    void setFilesCount(int32_t value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string buildVersion_;
    bool buildVersionIsSet_;
    int32_t filesCount_;
    bool filesCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_VersionListViewV5_H_
