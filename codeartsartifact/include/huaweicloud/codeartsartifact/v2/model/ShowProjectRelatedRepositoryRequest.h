
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowProjectRelatedRepositoryRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowProjectRelatedRepositoryRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ShowProjectRelatedRepositoryRequest
    : public ModelBase
{
public:
    ShowProjectRelatedRepositoryRequest();
    virtual ~ShowProjectRelatedRepositoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectRelatedRepositoryRequest members

    /// <summary>
    /// **参数解释**： 项目名称，支持模糊查询。 **约束限制**： 不涉及。 **取值范围**： 最大200个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getSearchName() const;
    bool searchNameIsSet() const;
    void unsetsearchName();
    void setSearchName(const std::string& value);

    /// <summary>
    /// **参数解释**： 分页查询的起始位置。 **约束限制**： 不涉及。 **取值范围**： 0-2147483647 **默认取值**： 0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**： 分页查询每页的数据量。 **约束限制**： 不涉及。 **取值范围**： 1-2147483647 **默认取值**： 10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 仓库ID，格式为{region}\\_{domainId}\\_{format}_{sequence}。可以从“私有依赖库首页 &gt; 仓库概览 &gt; 仓库地址url”中获取，最后两个“/”中间的字符串即为仓库ID。如仓库地址：https://devrepo.devcloud.abcde.abc.xyz.com/artgalaxy/abcde_09d2ca2f5080d5b60f51c00ae5bad0a0_maven_2_50/，其中abcde_09d2ca2f5080d5b60f51c00ae5bad0a0_maven_2_50即为仓库ID。 **约束限制**： 不涉及。 **取值范围**： 仓库ID格式中的format支持以下值： - npm - go - pypi - rpm - composer - maven - debian - conan - nuget - docker2 - cocoapods **默认取值**： 不涉及。
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);


protected:
    std::string searchName_;
    bool searchNameIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string repoId_;
    bool repoIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowProjectRelatedRepositoryRequest& dereference_from_shared_ptr(std::shared_ptr<ShowProjectRelatedRepositoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowProjectRelatedRepositoryRequest_H_
