
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceInstanceResponse_resources_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceInstanceResponse_resources_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/dbss/v1/model/ResourceInstanceResponse_sys_tags.h>
#include <vector>
#include <huaweicloud/dbss/v1/model/ResourceInstanceResponse_tags.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  ResourceInstanceResponse_resources
    : public ModelBase
{
public:
    ResourceInstanceResponse_resources();
    virtual ~ResourceInstanceResponse_resources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceInstanceResponse_resources members

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源名称，资源没有名称时默认为空字符串，eip返回ip地址。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 资源详情。 资源对象，用于扩展，默认为空。
    /// </summary>

    Object getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const Object& value);

    /// <summary>
    /// 标签列表，没有标签默认为空数组
    /// </summary>

    std::vector<ResourceInstanceResponse_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceInstanceResponse_tags>& value);

    /// <summary>
    /// 仅op_service权限才可以可以获取此字段： 目前只包含一个resource_tag 结构体 key：_sys_enterprise_project_id value：企业项目id，0表示默认企业项目 非op_service场景不能返回此字段
    /// </summary>

    std::vector<ResourceInstanceResponse_sys_tags>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<ResourceInstanceResponse_sys_tags>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    Object resourceDetail_;
    bool resourceDetailIsSet_;
    std::vector<ResourceInstanceResponse_tags> tags_;
    bool tagsIsSet_;
    std::vector<ResourceInstanceResponse_sys_tags> sysTags_;
    bool sysTagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceInstanceResponse_resources_H_
