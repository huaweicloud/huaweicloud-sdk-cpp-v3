
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcsByTagsRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcsByTagsRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/ListTag.h>
#include <string>
#include <huaweicloud/vpc/v2/model/Match.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ListVpcsByTagsRequestBody
    : public ModelBase
{
public:
    ListVpcsByTagsRequestBody();
    virtual ~ListVpcsByTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVpcsByTagsRequestBody members

    /// <summary>
    /// 功能说明：操作标识 取值范围：filter(过滤)，count(查询总条数)
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 功能说明：查询记录数 取值范围：1-1000 约束：action为count时此参数不生效；action为filter时默认为1000
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 功能说明：索引位置， 从offset指定的下一条数据开始查询。 查询第一页数据时，不需要传入此参数，查询后续页码数据时，将查询前一页数据时响应体中的值带入此参数 约束：action为count时无此参数；action为filter时默认为0；必须为数字，不能为负数
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 功能说明：搜索字段，key为要匹配的字段，value为匹配的值 约束：当前仅支持resource_name
    /// </summary>

    std::vector<Match>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<Match>& value);

    /// <summary>
    /// 包含标签，最多包含10个key，每个key下面的value最多10个，结构体不能缺失，key不能为空或者空字符串。Key不能重复，同一个key中values不能重复
    /// </summary>

    std::vector<ListTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ListTag>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<Match> matches_;
    bool matchesIsSet_;
    std::vector<ListTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListVpcsByTagsRequestBody_H_
