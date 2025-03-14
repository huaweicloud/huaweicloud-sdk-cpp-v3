
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceTagDeleteRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceTagDeleteRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ResourceTagDeleteRequest_tags.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ResourceTagDeleteRequest
    : public ModelBase
{
public:
    ResourceTagDeleteRequest();
    virtual ~ResourceTagDeleteRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceTagDeleteRequest members

    /// <summary>
    /// 标签列表 租户权限时该字段必选，op_service权限时和sys_tags二选一
    /// </summary>

    std::vector<ResourceTagDeleteRequest_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTagDeleteRequest_tags>& value);

    /// <summary>
    /// 系统标签列表 op_service权限可以访问，和tags二选一。 目前TMS调用时只包含一个resource_tag结构体 ，key固定为：_sys_enterprise_project_id value是UUID或0,value为0表示默认企业项目。 现在仅支持create操作。
    /// </summary>

    std::vector<ResourceTagDeleteRequest_tags>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<ResourceTagDeleteRequest_tags>& value);


protected:
    std::vector<ResourceTagDeleteRequest_tags> tags_;
    bool tagsIsSet_;
    std::vector<ResourceTagDeleteRequest_tags> sysTags_;
    bool sysTagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceTagDeleteRequest_H_
