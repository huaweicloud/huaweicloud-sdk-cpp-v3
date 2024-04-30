
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByBase64Request_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByBase64Request_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/frs/v2/model/FaceCompareBase64Req.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  CompareFaceByBase64Request
    : public ModelBase
{
public:
    CompareFaceByBase64Request();
    virtual ~CompareFaceByBase64Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareFaceByBase64Request members

    /// <summary>
    /// 企业项目ID。FRS支持通过企业项目管理（EPS）对不同用户组和用户的资源使用，进行分账。当前仅支持按需计费模式。  获取方法：进入“[企业项目管理](https://console.huaweicloud.com/eps/?region&#x3D;cn-north-4#/projects/list)”页面，单击企业项目名称，在企业项目详情页获取Enterprise-Project-Id（企业项目ID）。  企业项目创建步骤请参见用户指南。 &gt; 说明： 创建企业项目后，在传参时，有以下三类场景。 - 携带正确的ID，正常使用FRS服务，账单的企业项目会被分类到企业ID对应的企业项目中。 - 携带格式正确但不存在的ID，正常使用FRS服务，账单的企业项目会显示对应不存在的企业项目ID。 - 不携带ID或格式错误ID（包含特殊字符等），正常使用FRS服务，账单的企业项目会被分类到\&quot;default\&quot;中。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FaceCompareBase64Req getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const FaceCompareBase64Req& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    FaceCompareBase64Req body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CompareFaceByBase64Request& dereference_from_shared_ptr(std::shared_ptr<CompareFaceByBase64Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_CompareFaceByBase64Request_H_
