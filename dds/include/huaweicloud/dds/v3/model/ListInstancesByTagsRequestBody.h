
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListInstancesByTagsRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListInstancesByTagsRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/QueryMatchItem.h>
#include <vector>
#include <huaweicloud/dds/v3/model/QueryTagItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListInstancesByTagsRequestBody
    : public ModelBase
{
public:
    ListInstancesByTagsRequestBody();
    virtual ~ListInstancesByTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListInstancesByTagsRequestBody members

    /// <summary>
    /// 索引位置偏移量，表示从第一条数据偏移offset条数据后开始查询。 - “action”值为“count”时，不传该参数。 - “action”值为“filter”时，取值必须为数字，不能为负数。默认取0值，表示从第一条数据开始查询。&#39;
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 查询记录数。   - “action”值为“count”时，不传该参数。   - “action”值为“filter”时，取值范围：1~100。不传该参数时，默认查询前100条实例信息。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 操作标识。   - 取值为“filter”，表示根据标签过滤条件查询实例。   - 取值为“count”，表示仅返回总记录数，禁止返回其他字段。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 搜索字段。   - 该字段值为空，表示不按照实例名称或实例ID查询。   - 该字段值不为空
    /// </summary>

    std::vector<QueryMatchItem>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<QueryMatchItem>& value);

    /// <summary>
    /// 包含标签，最多包含10个key。
    /// </summary>

    std::vector<QueryTagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<QueryTagItem>& value);


protected:
    std::string offset_;
    bool offsetIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::vector<QueryMatchItem> matches_;
    bool matchesIsSet_;
    std::vector<QueryTagItem> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListInstancesByTagsRequestBody_H_
