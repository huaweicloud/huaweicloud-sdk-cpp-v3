
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsByTagsRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsByTagsRequestBody_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include "huaweicloud/eip/model/MatchReq.h"
#include "huaweicloud/eip/model/TagReq.h"
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 通过标签过滤弹性公网IP的请求体
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  ListPublicipsByTagsRequestBody
    : public ModelBase
{
public:
    ListPublicipsByTagsRequestBody();
    virtual ~ListPublicipsByTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPublicipsByTagsRequestBody members

    /// <summary>
    /// 包含标签，最多包含10个key。  每个key下面的value最多10个，结构体不能缺失，key不能为空或者空字符串。  Key不能重复，同一个key中values不能重复。
    /// </summary>

    std::vector<TagReq>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagReq>& value);

    /// <summary>
    /// 查询记录数（action为count时无此参数）
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 索引位置， 从offset指定的下一条数据开始查询。 查询第一页数据时，不需要传入此参数，查询后续页码数据时，将查询前一页数据时响应体中的值带入此参数（action为count时无此参数）
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 操作标识：  filter分页查询  count查询总数
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 搜索字段，key为要匹配的字段，当前仅支持resource_name。value为匹配的值。此字段为固定字典值。
    /// </summary>

    std::vector<MatchReq>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<MatchReq>& value);


protected:
    std::vector<TagReq> tags_;
    bool tagsIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::vector<MatchReq> matches_;
    bool matchesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListPublicipsByTagsRequestBody_H_
