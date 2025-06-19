
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecommendOfficialTemplateRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecommendOfficialTemplateRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 获取官方推荐模板请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListRecommendOfficialTemplateRequestBody
    : public ModelBase
{
public:
    ListRecommendOfficialTemplateRequestBody();
    virtual ~ListRecommendOfficialTemplateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRecommendOfficialTemplateRequestBody members

    /// <summary>
    /// 代码仓地址
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// 代码仓分支名称你
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 代码仓TAG
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);


protected:
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecommendOfficialTemplateRequestBody_H_
