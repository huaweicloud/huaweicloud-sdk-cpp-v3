
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListInstanceRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/smn/v2/model/TagMatch.h>
#include <huaweicloud/smn/v2/model/ResourceTags.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListInstanceRequestBody
    : public ModelBase
{
public:
    ListInstanceRequestBody();
    virtual ~ListInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceRequestBody members

    /// <summary>
    /// 最多包含10个key，每个key最多包含10个value，结构体不能缺失。key不能为空或者空字符串。key不能重复，同一个key中value不能重复，不同key对应的资源之间为与的关系。
    /// </summary>

    std::vector<ResourceTags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTags>& value);

    /// <summary>
    /// 最多包含10个key，每个key最多包含10个value，结构体不能缺失。key不能为空或者空字符串。key不能重复，同一个key中value不能重复，不同key对应的资源之间为或的关系。
    /// </summary>

    std::vector<ResourceTags>& getTagsAny();
    bool tagsAnyIsSet() const;
    void unsettagsAny();
    void setTagsAny(const std::vector<ResourceTags>& value);

    /// <summary>
    /// 最多包含10个key，每个key最多包含10个value，结构体不能缺失。key不能为空或者空字符串。key不能重复，同一个key中value不能重复，不同key对应的资源之间为与非的关系。
    /// </summary>

    std::vector<ResourceTags>& getNotTags();
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::vector<ResourceTags>& value);

    /// <summary>
    /// 最多包含10个key，每个key最多包含10个value，结构体不能缺失。key不能为空或者空字符串。key不能重复，同一个key中value不能重复，不同key对应的资源之间为或非的关系。
    /// </summary>

    std::vector<ResourceTags>& getNotTagsAny();
    bool notTagsAnyIsSet() const;
    void unsetnotTagsAny();
    void setNotTagsAny(const std::vector<ResourceTags>& value);

    /// <summary>
    /// 索引位置， 从offset指定的下一条数据开始查询。 查询第一页数据时，不需要传入此参数，查询后续页码数据时，将查询前一页数据时响应体中的值带入此参数。  action为count时无此参数。  action为filter时，默认为0，必须为数字，且不能为负数。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 查询记录数。  action为count时无此参数。  action为filter时，默认为1000。limit最多为1000，不能为负数，最小值为1。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 操作标识（仅限于filter，count）：filter（过滤），count(查询总条数)。 为filter时表示分页查询，为count只需按照条件将总条数返回即可。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 搜索字段。  key为要匹配的字段，当前只支持resource_name。  value为匹配的值，当前为精确匹配。
    /// </summary>

    std::vector<TagMatch>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<TagMatch>& value);


protected:
    std::vector<ResourceTags> tags_;
    bool tagsIsSet_;
    std::vector<ResourceTags> tagsAny_;
    bool tagsAnyIsSet_;
    std::vector<ResourceTags> notTags_;
    bool notTagsIsSet_;
    std::vector<ResourceTags> notTagsAny_;
    bool notTagsAnyIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::vector<TagMatch> matches_;
    bool matchesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListInstanceRequestBody_H_
