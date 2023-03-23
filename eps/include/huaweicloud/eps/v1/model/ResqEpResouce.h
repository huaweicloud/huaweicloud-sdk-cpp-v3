
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ResqEpResouce_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ResqEpResouce_H_

#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/Match.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 获取企业项目下资源请求
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ResqEpResouce
    : public ModelBase
{
public:
    ResqEpResouce();
    virtual ~ResqEpResouce();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResqEpResouce members

    /// <summary>
    /// 项目ID列表。resource_types中包含region级别服务时为必选项。
    /// </summary>

    std::vector<std::string>& getProjects();
    bool projectsIsSet() const;
    void unsetprojects();
    void setProjects(const std::vector<std::string>& value);

    /// <summary>
    /// 资源类型列表， 此参数为可输入的值（区分大小写）。例如：ecs,scaling_group, images, disk, vpcs,security-groups, shared_bandwidth, eip, cdn等。
    /// </summary>

    std::vector<std::string>& getResourceTypes();
    bool resourceTypesIsSet() const;
    void unsetresourceTypes();
    void setResourceTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 索引位置， 从offset指定的下一条数据开始查询，必须为数字，不能为负数，默认为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数，不传默认为1000，limit最多为1000, 最小值为1。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 搜索字段，key为要匹配的字段，固定为resource_name，value为匹配的值，不传则表示无匹配条件。
    /// </summary>

    std::vector<Match>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<Match>& value);


protected:
    std::vector<std::string> projects_;
    bool projectsIsSet_;
    std::vector<std::string> resourceTypes_;
    bool resourceTypesIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<Match> matches_;
    bool matchesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ResqEpResouce_H_
