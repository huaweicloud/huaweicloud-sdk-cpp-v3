
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_QueryTmsResourceCountRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_QueryTmsResourceCountRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/CombineInferTmsTags.h>
#include <huaweicloud/modelarts/v1/model/TmsMatch.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询TMS资源总量请求体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  QueryTmsResourceCountRequest
    : public ModelBase
{
public:
    QueryTmsResourceCountRequest();
    virtual ~QueryTmsResourceCountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTmsResourceCountRequest members

    /// <summary>
    /// **参数解释：** 匹配项，目前只支持资源名称的模糊匹配。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<TmsMatch>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<TmsMatch>& value);

    /// <summary>
    /// **参数解释：** 标签匹配项，只支持多个标签与操作，不携带表示查询所有资源。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<CombineInferTmsTags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CombineInferTmsTags>& value);

    /// <summary>
    /// **参数解释：** 是否只查询没有打标签的资源。 **约束限制：** 不涉及。 **取值范围：** true：只查询没有打标签的资源。 false：查询所有资源。 **默认取值：** 不涉及。
    /// </summary>

    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);


protected:
    std::vector<TmsMatch> matches_;
    bool matchesIsSet_;
    std::vector<CombineInferTmsTags> tags_;
    bool tagsIsSet_;
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_QueryTmsResourceCountRequest_H_
