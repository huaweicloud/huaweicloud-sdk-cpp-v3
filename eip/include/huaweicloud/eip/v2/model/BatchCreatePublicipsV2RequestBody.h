
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipsV2RequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipsV2RequestBody_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v2/model/BatchPublicIp.h>
#include <huaweicloud/eip/v2/model/BatchBandwidth.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BatchCreatePublicipsV2RequestBody
    : public ModelBase
{
public:
    BatchCreatePublicipsV2RequestBody();
    virtual ~BatchCreatePublicipsV2RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreatePublicipsV2RequestBody members

    /// <summary>
    /// 
    /// </summary>

    BatchBandwidth getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const BatchBandwidth& value);

    /// <summary>
    /// 
    /// </summary>

    BatchPublicIp getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const BatchPublicIp& value);

    /// <summary>
    /// 批量创建EIP的个数
    /// </summary>

    int32_t getPublicipNumber() const;
    bool publicipNumberIsSet() const;
    void unsetpublicipNumber();
    void setPublicipNumber(int32_t value);

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    BatchBandwidth bandwidth_;
    bool bandwidthIsSet_;
    BatchPublicIp publicip_;
    bool publicipIsSet_;
    int32_t publicipNumber_;
    bool publicipNumberIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipsV2RequestBody_H_
