
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersByTagRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersByTagRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerTagMatch.h>
#include <huaweicloud/ecs/v2/model/ServerTags.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListServersByTagRequestBody
    : public ModelBase
{
public:
    ListServersByTagRequestBody();
    virtual ~ListServersByTagRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServersByTagRequestBody members

    /// <summary>
    /// 值为filter：表示按标签过滤弹性云服务器，返回符合条件的云服务器列表。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 查询返回的云服务器数量限制，最多为1000，不能为负数。  - 如果action的值为count时，此参数无效。 - 如果action的值为filter时，limit必填，取值范围[0-1000]，如果不传值，系统默认limit值为1000。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 偏移量：指定返回记录的开始位置，必须为数字，取值范围为大于或等于0。  查询第一页数据时，可以不传入此参数。  - 如果action的值为count，此参数无效。 - 如果action的值为filter时，必填，如果用户不传值，系统默认offset值为0。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 查询包含所有指定标签的弹性云服务器。  - 最多包含10个key，每个key下面的value最多10个。 - 结构体不能缺失。 - key不能为空或者空字符串。 - key不能重复。 - 同一个key中values不能重复。
    /// </summary>

    std::vector<ServerTags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ServerTags>& value);

    /// <summary>
    /// 查询不包含所有指定标签的弹性云服务器。  - 最多包含10个key，每个key下面的value最多10个。 - 结构体不能缺失。 - key不能为空或者空字符串。 - key不能重复。 - 同一个key中values不能重复。
    /// </summary>

    std::vector<ServerTags>& getNotTags();
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::vector<ServerTags>& value);

    /// <summary>
    /// 搜索字段，用于按条件搜索弹性云服务器。  当前仅支持按resource_name进行搜索
    /// </summary>

    std::vector<ServerTagMatch>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<ServerTagMatch>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::vector<ServerTags> tags_;
    bool tagsIsSet_;
    std::vector<ServerTags> notTags_;
    bool notTagsIsSet_;
    std::vector<ServerTagMatch> matches_;
    bool matchesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersByTagRequestBody_H_
