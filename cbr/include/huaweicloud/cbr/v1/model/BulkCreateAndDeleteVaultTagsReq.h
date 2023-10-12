
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BulkCreateAndDeleteVaultTagsReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BulkCreateAndDeleteVaultTagsReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/SysTag.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  BulkCreateAndDeleteVaultTagsReq
    : public ModelBase
{
public:
    BulkCreateAndDeleteVaultTagsReq();
    virtual ~BulkCreateAndDeleteVaultTagsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BulkCreateAndDeleteVaultTagsReq members

    /// <summary>
    /// 标签列表。  tags不允许为空列表。  tags中最多包含10个key。  tags中key不允许重复。
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 系统标签列表。  op_service权限可以访问，和tags二选一。  目前TMS调用时只包含一个resource_tag结构体 ，key固定为：_sys_enterprise_project_id。  value是UUID或0,value为0表示默认企业项目。  现在仅支持create操作。
    /// </summary>

    std::vector<SysTag>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<SysTag>& value);

    /// <summary>
    /// 操作标识：仅限于create（创建）、delete（删除）
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::vector<SysTag> sysTags_;
    bool sysTagsIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BulkCreateAndDeleteVaultTagsReq_H_
