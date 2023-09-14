
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListResourceInstancesRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListResourceInstancesRequestBody_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/TagMatches.h>
#include <string>
#include <vector>
#include <huaweicloud/csms/v1/model/Tag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListResourceInstancesRequestBody
    : public ModelBase
{
public:
    ListResourceInstancesRequestBody();
    virtual ~ListResourceInstancesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListResourceInstancesRequestBody members

    /// <summary>
    /// 查询记录数（“action”为“count”时，无需设置此参数），如果“action”为“filter”，默认为“10”。 limit的取值范围为“1-1000”。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 索引位置。从offset指定的下一条数据开始查询。查询第一页数据时，将查询前一页数据时响应体中的值带入此参数（“action”为“count”时，无需设置此参数）。如果“action”为“filter”，offset默认为“0”。 offset必须为数字，不能为负数。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 操作标识（可设置为“filter”或者“count”）。  - filter：表示过滤。  - count：表示查询总条数。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 标签列表，key和value键值对的集合。最多不超过10个。
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 搜索字段。  - key为搜索的字段，目前仅支持搜索凭据名称，值为“resource_name”。  - value为模糊匹配的值，最大长度为255个字符。为空返回空值。
    /// </summary>

    std::vector<TagMatches>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<TagMatches>& value);

    /// <summary>
    /// 请求消息序列号，36字节序列号。 例如：919c82d4-8046-4722-9094-35c3c6524cff
    /// </summary>

    std::string getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(const std::string& value);


protected:
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::vector<TagMatches> matches_;
    bool matchesIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListResourceInstancesRequestBody_H_
