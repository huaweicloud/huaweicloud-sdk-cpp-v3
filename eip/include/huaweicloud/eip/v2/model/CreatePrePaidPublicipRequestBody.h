
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePrePaidPublicipRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePrePaidPublicipRequestBody_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/CreatePublicipBandwidthOption.h>
#include <huaweicloud/eip/v2/model/CreatePrePaidPublicipOption.h>
#include <huaweicloud/eip/v2/model/CreatePrePaidPublicipExtendParamOption.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 创建包周期的弹性公网IP
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  CreatePrePaidPublicipRequestBody
    : public ModelBase
{
public:
    CreatePrePaidPublicipRequestBody();
    virtual ~CreatePrePaidPublicipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePrePaidPublicipRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreatePrePaidPublicipOption getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const CreatePrePaidPublicipOption& value);

    /// <summary>
    /// 
    /// </summary>

    CreatePublicipBandwidthOption getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const CreatePublicipBandwidthOption& value);

    /// <summary>
    /// 
    /// </summary>

    CreatePrePaidPublicipExtendParamOption getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const CreatePrePaidPublicipExtendParamOption& value);

    /// <summary>
    /// 企业项目ID。最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。  创建弹性公网IP时，给弹性公网IP绑定企业项目ID。  不指定该参数时，默认值是 0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    CreatePrePaidPublicipOption publicip_;
    bool publicipIsSet_;
    CreatePublicipBandwidthOption bandwidth_;
    bool bandwidthIsSet_;
    CreatePrePaidPublicipExtendParamOption extendParam_;
    bool extendParamIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePrePaidPublicipRequestBody_H_
