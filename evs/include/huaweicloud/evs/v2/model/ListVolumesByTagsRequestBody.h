
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/TagsForListVolumes.h>
#include <string>
#include <huaweicloud/evs/v2/model/Match.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ListVolumesByTagsRequestBody
    : public ModelBase
{
public:
    ListVolumesByTagsRequestBody();
    virtual ~ListVolumesByTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVolumesByTagsRequestBody members

    /// <summary>
    /// 操作标识。  根据标签查询云硬盘实例详情时使用“filter”。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 查询记录数。最小值1，最大值1000，默认为1000。返回的结果中记录数不超过limit值
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 资源本身支持的查询条件。标签列表中的标签key值不允许重复。
    /// </summary>

    std::vector<Match>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<Match>& value);

    /// <summary>
    /// 索引位置。最小值0，默认为0。返回的结果中第一条记录为符合查询条件的第“offset值+1”条记录
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 标签的键值对。标签列表中最多包含10个key 。标签列表中的标签key值不允许重复。标签列表中多个key之间是“与”的关系，云硬盘必须满足请求中所有key才会匹配出来。
    /// </summary>

    std::vector<TagsForListVolumes>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsForListVolumes>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<Match> matches_;
    bool matchesIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<TagsForListVolumes> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsRequestBody_H_
