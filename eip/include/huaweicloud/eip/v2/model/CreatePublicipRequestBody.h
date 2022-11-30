
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipRequestBody_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/CreatePublicipBandwidthOption.h>
#include <string>
#include <huaweicloud/eip/v2/model/CreatePublicipOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建弹性公网IP并绑定带宽的请求参数
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  CreatePublicipRequestBody
    : public ModelBase
{
public:
    CreatePublicipRequestBody();
    virtual ~CreatePublicipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePublicipRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreatePublicipBandwidthOption getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const CreatePublicipBandwidthOption& value);

    /// <summary>
    /// 企业项目ID。最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。  创建弹性公网IP时，给弹性公网IP绑定企业项目ID。  不指定该参数时，默认值是 0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreatePublicipOption getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const CreatePublicipOption& value);


protected:
    CreatePublicipBandwidthOption bandwidth_;
    bool bandwidthIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    CreatePublicipOption publicip_;
    bool publicipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipRequestBody_H_
