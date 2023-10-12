
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultResourceInstancesReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultResourceInstancesReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/TagsReq.h>
#include <string>
#include <huaweicloud/cbr/v1/model/SysTags.h>
#include <huaweicloud/cbr/v1/model/Match.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultResourceInstancesReq
    : public ModelBase
{
public:
    VaultResourceInstancesReq();
    virtual ~VaultResourceInstancesReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultResourceInstancesReq members

    /// <summary>
    /// 不包含任意一个标签，该字段为true时查询所有不带标签的资源，此时忽略 “tags”、“tags_any”、“not_tags”、“not_tags_any”字段。
    /// </summary>

    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);

    /// <summary>
    /// 包含标签。  tags不允许为空列表。  tags中最多包含10个key。  tags中key不允许重复。  tags中多个key之间是“与”的关系。  结果返回包含所有标签的资源列表，key之间是与的关系，key-value结构中value是或的关系。  无过滤条件时返回全量数据。
    /// </summary>

    std::vector<TagsReq>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsReq>& value);

    /// <summary>
    /// 包含任一标签。  tags不允许为空列表。  tags中最多包含10个key。  tags中key不允许重复。  结果返回包含任一标签的资源列表，key之间是或的关系，key-value结构中value是或的关系。  无过滤条件时返回全量数据。
    /// </summary>

    std::vector<TagsReq>& getTagsAny();
    bool tagsAnyIsSet() const;
    void unsettagsAny();
    void setTagsAny(const std::vector<TagsReq>& value);

    /// <summary>
    /// 不包含标签。  tags不允许为空列表。  tags中最多包含10个key。  tags中key不允许重复。  结果返回不包含所有标签的资源列表，key之间是与的关系，key-value结构中value是或的关系。  无过滤条件时返回全量数据。
    /// </summary>

    std::vector<TagsReq>& getNotTags();
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::vector<TagsReq>& value);

    /// <summary>
    /// 不包含任一标签。  tags不允许为空列表。  tags中最多包含10个key。  tags中key不允许重复。  结果返回不包含任一标签的资源列表，key之间是或的关系，key-value结构张value是或的关系。  无过滤条件时返回全量数据。
    /// </summary>

    std::vector<TagsReq>& getNotTagsAny();
    bool notTagsAnyIsSet() const;
    void unsetnotTagsAny();
    void setNotTagsAny(const std::vector<TagsReq>& value);

    /// <summary>
    /// 仅op_service权限可以使用此字段做资源实例过滤条件。  目前TMS调用时只包含一个tag结构体。  * key： _sys_enterprise_project_id  * values：企业项目id列表  目前TMS调用时，key下面只包含一个value，0表示默认企业项目。  sys_tags和租户标签过滤条件（tags、tags_any、not_tags、not_tags_any）不能同时使用。  无sys_tags时按照tag接口处理，无tag过滤条件时返回全量数据。  sys_tags不能为空列表
    /// </summary>

    std::vector<SysTags>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<SysTags>& value);

    /// <summary>
    /// 查询记录数（action为count时无此参数）如果action为filter时，默认为1000，limit最小值为1，limit最大值为1000, 不在范围内报错。返回的结果中记录数不超过limit。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 索引位置（action为count时无此参数）如果action为filter时，默认为0，offset最小值为0。返回的结果中第一条记录为符合查询条件的第offset+1条记录。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 操作标识取值范围为：\&quot;filter\&quot;, \&quot;count\&quot;。如果是filter就是分页查询，如果是count只需按照条件将总条数返回即可
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 资源本身支持的查询条件。  matches中key不允许重复。  数组长度最大值为 1，后续再扩展。
    /// </summary>

    std::vector<Match>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<Match>& value);

    /// <summary>
    /// 云类型
    /// </summary>

    std::string getCloudType() const;
    bool cloudTypeIsSet() const;
    void unsetcloudType();
    void setCloudType(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);


protected:
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;
    std::vector<TagsReq> tags_;
    bool tagsIsSet_;
    std::vector<TagsReq> tagsAny_;
    bool tagsAnyIsSet_;
    std::vector<TagsReq> notTags_;
    bool notTagsIsSet_;
    std::vector<TagsReq> notTagsAny_;
    bool notTagsAnyIsSet_;
    std::vector<SysTags> sysTags_;
    bool sysTagsIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::vector<Match> matches_;
    bool matchesIsSet_;
    std::string cloudType_;
    bool cloudTypeIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultResourceInstancesReq_H_
