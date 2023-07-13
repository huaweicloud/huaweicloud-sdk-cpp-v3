
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultTagResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultTagResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/SysTag.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowVaultTagResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVaultTagResponse();
    virtual ~ShowVaultTagResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVaultTagResponse members

    /// <summary>
    /// 标签列表 tags中key不重复
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 仅op_service权限才可以获取此字段： 目前只包含一个resource_tag结构体  key：_sys_enterprise_project_id value：企业项目id。0表示默认企业项目 非op_service场景不能返回此字段。
    /// </summary>

    std::vector<SysTag>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<SysTag>& value);


protected:
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::vector<SysTag> sysTags_;
    bool sysTagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultTagResponse_H_
