
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterExtendParam_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterExtendParam_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AutopilotClusterExtendParam
    : public ModelBase
{
public:
    AutopilotClusterExtendParam();
    virtual ~AutopilotClusterExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutopilotClusterExtendParam members

    /// <summary>
    /// 集群所属的企业项目ID。 &gt;   - 需要开通企业项目功能后才可配置企业项目。 &gt;   - 集群所属的企业项目与集群下所关联的其他云服务资源所属的企业项目必须保持一致。 
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 记录集群通过何种升级方式升级到当前版本。 
    /// </summary>

    std::string getUpgradefrom() const;
    bool upgradefromIsSet() const;
    void unsetupgradefrom();
    void setUpgradefrom(const std::string& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string upgradefrom_;
    bool upgradefromIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterExtendParam_H_
