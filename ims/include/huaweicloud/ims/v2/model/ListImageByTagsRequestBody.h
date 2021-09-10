
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageByTagsRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageByTagsRequestBody_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/Tags.h>
#include <string>
#include <vector>
#include <huaweicloud/ims/v2/model/TagKeyValue.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 请求参数
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ListImageByTagsRequestBody
    : public ModelBase
{
public:
    ListImageByTagsRequestBody();
    virtual ~ListImageByTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListImageByTagsRequestBody members

    /// <summary>
    /// 操作标识（区分大小写），支持filter、count。filter就是分页查询；count是只需按照条件将总条数返回即可。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 包含标签，最多包含10个key，每个key对应的values最多包含10个值，且key和values都不能重复。不能为空列表。
    /// </summary>

    std::vector<Tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tags>& value);

    /// <summary>
    /// 包含任意标签，最多包含10个key，每个key对应的values最多包含10个值，且key和values都不能重复。不允许为空列表，但可以不传递参数。
    /// </summary>

    std::vector<Tags>& getTagsAny();
    bool tagsAnyIsSet() const;
    void unsettagsAny();
    void setTagsAny(const std::vector<Tags>& value);

    /// <summary>
    /// 不包含标签，最多包含10个key，每个key对应的values最多包含10个值，且key和values都不能重复。不能为空列表。
    /// </summary>

    std::vector<Tags>& getNotTags();
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::vector<Tags>& value);

    /// <summary>
    /// 不包含任意标签，最多包含10个key，每个key对应的values最多包含10个值，且key和values都不能重复。不能为空列表。
    /// </summary>

    std::vector<Tags>& getNotTagsAny();
    bool notTagsAnyIsSet() const;
    void unsetnotTagsAny();
    void setNotTagsAny(const std::vector<Tags>& value);

    /// <summary>
    /// 最大查询记录数(action为count，时此参数无效）如果action为filter默认为10，limit最多为1000，不能为负数，最小值为1。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 索引位置， 从offset指定的下一条数据开始查询。 查询第一页数据时，不需要传入此参数（action为count时，此参数无效），如果action为filter默认为0，不能为负数。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 搜索字段，key为要匹配的字段，如resource_name、resource_id等。value为匹配的值。多个matches的key不允许重复。不允许为空列表，但可以不传递参数。
    /// </summary>

    std::vector<TagKeyValue>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<TagKeyValue>& value);

    /// <summary>
    /// 不包含任意一个标签，该字段为true时查询所有不带标签的资源，此时忽略tag、not_tags、tags_any、not_tags_any字段。
    /// </summary>

    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<Tags> tags_;
    bool tagsIsSet_;
    std::vector<Tags> tagsAny_;
    bool tagsAnyIsSet_;
    std::vector<Tags> notTags_;
    bool notTagsIsSet_;
    std::vector<Tags> notTagsAny_;
    bool notTagsAnyIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::vector<TagKeyValue> matches_;
    bool matchesIsSet_;
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageByTagsRequestBody_H_
