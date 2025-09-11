
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceInstanceTagRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceInstanceTagRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ResourceInstanceTagRequest_matches.h>
#include <huaweicloud/dbss/v1/model/TagKeyValuesBean.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ResourceInstanceTagRequest
    : public ModelBase
{
public:
    ResourceInstanceTagRequest();
    virtual ~ResourceInstanceTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceInstanceTagRequest members

    /// <summary>
    /// 搜索字段,key为要匹配的字段，如resource_name等。value为匹配的值。key为固定字典值，不能包含重复的key或不支持的key。 根据key的值确认是否需要模糊匹配，如resource_name默认为模糊搜索（不区分大小写），如果value为空字符串精确匹配（多数服务不存在资源名称为空的情况，因此此类情况返回空列表）。resource_id为精确匹配。第一期只做resource_name，后续再扩展。
    /// </summary>

    std::vector<ResourceInstanceTagRequest_matches>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<ResourceInstanceTagRequest_matches>& value);

    /// <summary>
    /// 不包含标签，最多包含50个key，每个key下面的value最多10个, 每个key对应的value可以为空数组但结构体不能缺失。Key不能重复，同一个key中values不能重复。结果返回不包含标签的资源列表，key之间是与的关系，key-value结构中value是或的关系。无过滤条件时返回全量数据
    /// </summary>

    std::vector<TagKeyValuesBean>& getNotTags();
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::vector<TagKeyValuesBean>& value);

    /// <summary>
    /// 包含标签，最多包含50个key，每个key下面的value最多10个，每个key对应的value可以为空数组但结构体不能缺失。Key不能重复，同一个key中values不能重复。结果返回包含所有标签的资源列表，key之间是与的关系，key-value结构中value是或的关系。无tag过滤条件时返回全量数据
    /// </summary>

    std::vector<TagKeyValuesBean>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagKeyValuesBean>& value);

    /// <summary>
    /// 包含任意标签，最多包含50个key，每个key下面的value最多10个, 每个key对应的value可以为空数组但结构体不能缺失。Key不能重复，同一个key中values不能重复。结果返回包含标签的资源列表，key之间是或的关系，key-value结构中value是或的关系。无过滤条件时返回全量数据
    /// </summary>

    std::vector<TagKeyValuesBean>& getTagsAny();
    bool tagsAnyIsSet() const;
    void unsettagsAny();
    void setTagsAny(const std::vector<TagKeyValuesBean>& value);

    /// <summary>
    /// 不包含任意标签，最多包含50个key，每个key下面的value最多10个, 每个key对应的value可以为空数组但结构体不能缺失。Key不能重复，同一个key中values不能重复。结果返回不包含标签的资源列表，key之间是或的关系，key-value结构中value是或的关系。无过滤条件时返回全量数据
    /// </summary>

    std::vector<TagKeyValuesBean>& getNotTagsAny();
    bool notTagsAnyIsSet() const;
    void unsetnotTagsAny();
    void setNotTagsAny(const std::vector<TagKeyValuesBean>& value);

    /// <summary>
    /// 仅op_service权限可以使用此字段做资源实例过滤条件。 目前TMS调用时只包含一个tag结构体。 key：_sys_enterprise_project_id value：企业项目id列表 目前TMS调用时，key下面只包含一个value。0表示默认企业项目 sys_tags和租户标签过滤条件（without_any_tag 、tags、tags_any、not_tags、not_tags_any）不能同时使用 无sys_tags时按照tag接口处理，无tag过滤条件时返回全量数据
    /// </summary>

    std::vector<TagKeyValuesBean>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<TagKeyValuesBean>& value);

    /// <summary>
    /// 不包含任意一个标签，该字段为true时查询所有不带标签的资源，此时忽略 “tags”、“tags_any”、“not_tags”、“not_tags_any”字段
    /// </summary>

    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);


protected:
    std::vector<ResourceInstanceTagRequest_matches> matches_;
    bool matchesIsSet_;
    std::vector<TagKeyValuesBean> notTags_;
    bool notTagsIsSet_;
    std::vector<TagKeyValuesBean> tags_;
    bool tagsIsSet_;
    std::vector<TagKeyValuesBean> tagsAny_;
    bool tagsAnyIsSet_;
    std::vector<TagKeyValuesBean> notTagsAny_;
    bool notTagsAnyIsSet_;
    std::vector<TagKeyValuesBean> sysTags_;
    bool sysTagsIsSet_;
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceInstanceTagRequest_H_
