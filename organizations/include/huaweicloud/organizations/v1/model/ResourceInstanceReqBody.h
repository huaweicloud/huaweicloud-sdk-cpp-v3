
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ResourceInstanceReqBody_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ResourceInstanceReqBody_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/Match.h>
#include <huaweicloud/organizations/v1/model/TagsDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ResourceInstance操作的请求体。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ResourceInstanceReqBody
    : public ModelBase
{
public:
    ResourceInstanceReqBody();
    virtual ~ResourceInstanceReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceInstanceReqBody members

    /// <summary>
    /// 不包含任意一个标签，该字段为true时查询所有不带标签的资源。
    /// </summary>

    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);

    /// <summary>
    /// 包含标签，最多包含10个key，每个key下面的value最多10个，结构体不能缺失，key不能为空或者空字符串。Key不能重复，同一个key中values不能重复。返回包含所有标签的资源列表，key之间是与的关系，key-value结构中value是或的关系。无tag过滤条件时返回全量数据。
    /// </summary>

    std::vector<TagsDTO>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsDTO>& value);

    /// <summary>
    /// 要绑定到新创建的账号的标签列表。
    /// </summary>

    std::vector<Match>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<Match>& value);


protected:
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;
    std::vector<TagsDTO> tags_;
    bool tagsIsSet_;
    std::vector<Match> matches_;
    bool matchesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ResourceInstanceReqBody_H_
