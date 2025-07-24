
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_LabelVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_LabelVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  LabelVo
    : public ModelBase
{
public:
    LabelVo();
    virtual ~LabelVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LabelVo members

    /// <summary>
    /// uri主键
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 逻辑region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 标签名称
    /// </summary>

    std::string getLabelName() const;
    bool labelNameIsSet() const;
    void unsetlabelName();
    void setLabelName(const std::string& value);

    /// <summary>
    /// 服务类型
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 所属资源类型（TestCase：用例，Task：测试套）
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string labelName_;
    bool labelNameIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_LabelVo_H_
