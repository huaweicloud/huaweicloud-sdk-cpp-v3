
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryInstanceByTagReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryInstanceByTagReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/TagMatch.h>
#include <huaweicloud/drs/v5/model/Tag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询资源实例请求
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryInstanceByTagReq
    : public ModelBase
{
public:
    QueryInstanceByTagReq();
    virtual ~QueryInstanceByTagReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryInstanceByTagReq members

    /// <summary>
    /// 不包含任意一个标签，该字段为true时查询所有不带标签的资源，此时忽略 “tags”字段。该字段为false或者未提供该参数时，该条件不生效，即返回所有资源或按\&quot;tags\&quot;，\&quot;matches\&quot;等条件过滤。
    /// </summary>

    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);

    /// <summary>
    /// 包含标签，最多包含20个key，每个key下面的value最多20个。
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 搜索字段,key为要匹配的字段，如resource_name等。value为匹配的值。
    /// </summary>

    std::vector<TagMatch>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<TagMatch>& value);


protected:
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::vector<TagMatch> matches_;
    bool matchesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryInstanceByTagReq_H_
