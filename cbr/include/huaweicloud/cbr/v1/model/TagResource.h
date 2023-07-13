
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_TagResource_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_TagResource_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/SysTag.h>
#include <huaweicloud/cbr/v1/model/InstancesResourceDetail.h>
#include <string>
#include <vector>
#include <huaweicloud/cbr/v1/model/Tag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  TagResource
    : public ModelBase
{
public:
    TagResource();
    virtual ~TagResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TagResource members

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InstancesResourceDetail getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const InstancesResourceDetail& value);

    /// <summary>
    /// 标签列表 没有标签默认为空数字。
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 仅op_service权限才可以获取此字段：  目前只包含一个resource_tag 结构体。  key：_sys_enterprise_project_id  value：企业项目id，0表示默认企业项目  非op_service场景不能返回此字段。
    /// </summary>

    std::vector<SysTag>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<SysTag>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    InstancesResourceDetail resourceDetail_;
    bool resourceDetailIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::vector<SysTag> sysTags_;
    bool sysTagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_TagResource_H_
