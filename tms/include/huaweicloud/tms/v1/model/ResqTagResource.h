
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ResqTagResource_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ResqTagResource_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/tms/v1/model/Tag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 获取标签下资源请求
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ResqTagResource
    : public ModelBase
{
public:
    ResqTagResource();
    virtual ~ResqTagResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResqTagResource members

    /// <summary>
    /// 项目ID，resource_type为region级别服务时为必选项。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 资源类型， 此参数为可输入的值（区分大小写）。例如：ecs,scaling_group, images, disk,vpcs,security-groups, shared_bandwidth,eip, cdn等，具体请参见“附录-标签支持的资源类型”章节。
    /// </summary>

    std::vector<std::string>& getResourceTypes();
    bool resourceTypesIsSet() const;
    void unsetresourceTypes();
    void setResourceTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 是否仅查询未带标签的资源。该字段为true时查询不带标签的资源。
    /// </summary>

    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);

    /// <summary>
    /// 索引位置， 从offset指定的下一条数据开始查询，必须为数字，不能为负数，默认为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数，不传默认为200，limit最多为200, 最小值为1。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<std::string> resourceTypes_;
    bool resourceTypesIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ResqTagResource_H_
