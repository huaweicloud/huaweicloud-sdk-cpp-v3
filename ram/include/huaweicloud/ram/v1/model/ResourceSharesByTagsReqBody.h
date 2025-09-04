
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
    /// 搜索字段,key为要匹配的字段，如resource_name等。value为匹配的值。key为固定字典值，不能包含重复的key或不支持的key。根据key的值确认是否需要模糊匹配，如resource_name需要实现前缀搜索，如果value为空字符串精确匹配（多数服务不存在资源名称为空的情况，因此此类情况返回空列表）。resource_id为精确匹配。第一期只做resource_name，后续再扩展。
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
