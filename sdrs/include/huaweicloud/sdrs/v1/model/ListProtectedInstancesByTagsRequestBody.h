
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesByTagsRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesByTagsRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sdrs/v1/model/MatchParams.h>
#include <huaweicloud/sdrs/v1/model/TagParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 通过标签查询保护实例请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListProtectedInstancesByTagsRequestBody
    : public ModelBase
{
public:
    ListProtectedInstancesByTagsRequestBody();
    virtual ~ListProtectedInstancesByTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListProtectedInstancesByTagsRequestBody members

    /// <summary>
    /// 包含标签，最多包含10个key，每个key下面的value最多10个，每个key对应的value可以为空数组但结构体不能缺失。Key不能重复，同一个key中values不能重复。结果返回包含所有标签的资源列表，key之间是与的关系，key-value结构中value是或的关系。无tag过滤条件时返回全量数据。
    /// </summary>

    std::vector<TagParams>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagParams>& value);

    /// <summary>
    /// 包含任意标签，最多包含10个key，每个key下面的value最多10个, 每个key对应的value可以为空数组但结构体不能缺失。Key不能重复，同一个key中values不能重复。结果返回包含标签的资源列表，key之间是或的关系，key-value结构中value是或的关系。无过滤条件时返回全量数据。
    /// </summary>

    std::vector<TagParams>& getTagsAny();
    bool tagsAnyIsSet() const;
    void unsettagsAny();
    void setTagsAny(const std::vector<TagParams>& value);

    /// <summary>
    /// 不包含标签，最多包含10个key，每个key下面的value最多10个, 每个key对应的value可以为空数组但结构体不能缺失。Key不能重复，同一个key中values不能重复。结果返回不包含标签的资源列表，key之间是与的关系，key-value结构中value是或的关系。无过滤条件时返回全量数据。
    /// </summary>

    std::vector<TagParams>& getNotTags();
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::vector<TagParams>& value);

    /// <summary>
    /// 不包含任意标签，最多包含10个key，每个key下面的value最多10个, 每个key对应的value可以为空数组但结构体不能缺失。Key不能重复，同一个key中values不能重复。结果返回不包含标签的资源列表，key之间是或的关系，key-value结构中value是或的关系。无过滤条件时返回全量数据。
    /// </summary>

    std::vector<TagParams>& getNotTagsAny();
    bool notTagsAnyIsSet() const;
    void unsetnotTagsAny();
    void setNotTagsAny(const std::vector<TagParams>& value);

    /// <summary>
    /// 查询记录数（action为count时无此参数）如果action为filter默认为1000，limit最多为1000,不能为负数，最小值为1。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量（action为count时无此参数）从第一条数据偏移offset条数据后开始查询，如果action为filter默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 操作标识（仅限于filter，count）：filter（过滤），count(查询总条数)。如果是filter就按照过滤条件查询，如果是count，只需要返回总条数，禁止返回其他字段。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 搜索字段,key为要匹配的字段，如resource_name等。value为匹配的值。key为固定字典值，不能包含重复的key或不支持的key。根据key的值确认是否需要模糊匹配，如resource_name默认为模糊搜索（不区分大小写），如果value为空字符串精确匹配。目前只有resource_name，后续再扩展。
    /// </summary>

    std::vector<MatchParams>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<MatchParams>& value);


protected:
    std::vector<TagParams> tags_;
    bool tagsIsSet_;
    std::vector<TagParams> tagsAny_;
    bool tagsAnyIsSet_;
    std::vector<TagParams> notTags_;
    bool notTagsIsSet_;
    std::vector<TagParams> notTagsAny_;
    bool notTagsAnyIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::vector<MatchParams> matches_;
    bool matchesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesByTagsRequestBody_H_
