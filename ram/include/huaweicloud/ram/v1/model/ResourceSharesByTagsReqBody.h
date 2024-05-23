
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceSharesByTagsReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceSharesByTagsReqBody_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/TagFilter.h>
#include <huaweicloud/ram/v1/model/Match.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ResourceInstance操作的请求体。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ResourceSharesByTagsReqBody
    : public ModelBase
{
public:
    ResourceSharesByTagsReqBody();
    virtual ~ResourceSharesByTagsReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceSharesByTagsReqBody members

    /// <summary>
    /// 不包含任意一个标签，该字段为true时查询所有不带标签的资源。
    /// </summary>

    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);

    /// <summary>
    /// 包含标签，最多包含20个key，每个key下面的value最多20个，结构体不能缺失，key不能为空或者空字符串。Key不能重复，同一个key中values不能重复。返回包含所有标签的资源列表，key之间是\&quot;与\&quot;的关系，key-value结构中value是\&quot;或\&quot;的关系。无tag过滤条件时返回全量数据。
    /// </summary>

    std::vector<TagFilter>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagFilter>& value);

    /// <summary>
    /// 资源共享实例绑定标签列表的匹配字段。
    /// </summary>

    std::vector<Match>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<Match>& value);


protected:
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;
    std::vector<TagFilter> tags_;
    bool tagsIsSet_;
    std::vector<Match> matches_;
    bool matchesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceSharesByTagsReqBody_H_
